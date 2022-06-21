// Copyright (c) robo8080. All rights reserved.
// Licensed under the MIT license. See LICENSE file in the project root for full
// license information.
// modified by robo8080

#include "SusumuMouth.h"

namespace m5avatar {

SusumuMouth::SusumuMouth(uint16_t minWidth, uint16_t maxWidth, uint16_t minHeight,
             uint16_t maxHeight)
    : minWidth{minWidth},
      maxWidth{maxWidth},
      minHeight{minHeight},
      maxHeight{maxHeight} {}

void SusumuMouth::draw(M5Canvas *spi, BoundingRect rect, DrawContext *ctx) {
  Expression exp = ctx->getExpression();
  uint32_t primaryColor = ctx->getColorPalette()->get(COLOR_PRIMARY);
  uint32_t backgroundColor = ctx->getColorPalette()->get(COLOR_BACKGROUND);
  float breath = _min(1.0f, ctx->getBreath());
  float openRatio = ctx->getMouthOpenRatio();
  int h = minHeight + (maxHeight - minHeight) * openRatio;
  int w = maxWidth;
  int x = rect.getLeft() - w / 2;
  int y = rect.getTop() - h / 2 + breath * 2;

  if (openRatio == 0.0)
  {
    h = 8;
    spi->fillEllipse(x+w/2, y+h/2, w/2, h/2, (uint16_t)primaryColor);
    spi->fillEllipse(x+w/2, y+h/2, w/2-3, h/2-3, RED);
    spi->fillRect(x, y+h/2- minHeight*6-8, w+3, minHeight*6+8, (uint16_t)backgroundColor);
    spi->fillRect(x, rect.getTop()+ breath * 2, maxWidth, 3, (uint16_t)primaryColor);
  
  } else {
    spi->fillEllipse(x+w/2, y+h/2, w/2, h/2, (uint16_t)primaryColor);
    spi->fillEllipse(x+w/2, y+h/2, w/2-3, h/2-3, (uint16_t)RED);
    spi->fillRect(x, y+h/2- minHeight*6-8, w+3, minHeight*6+8, (uint16_t)backgroundColor);
    spi->fillRect(x, rect.getTop()+ breath * 2, maxWidth, 3, (uint16_t)primaryColor);
  }
}

}  // namespace m5avatar
