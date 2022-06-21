// Copyright (c) robo8080. All rights reserved.
// Licensed under the MIT license. See LICENSE file in the project root for full
// license information.

#ifndef SUSUMUMOUTH_H_
#define SUSUMUMOUTH_H_

#include <M5Unified.h>
#include "BoundingRect.h"
#include "DrawContext.h"
#include "Drawable.h"

namespace m5avatar {
class SusumuMouth final : public Drawable {
 private:
  uint16_t minWidth;
  uint16_t maxWidth;
  uint16_t minHeight;
  uint16_t maxHeight;

 public:
  // constructor
  SusumuMouth() = delete;
  ~SusumuMouth() = default;
  SusumuMouth(const SusumuMouth &other) = default;
  SusumuMouth &operator=(const SusumuMouth &other) = default;
  SusumuMouth(uint16_t minWidth, uint16_t maxWidth, uint16_t minHeight,
        uint16_t maxHeight);
  void draw(M5Canvas *spi, BoundingRect rect,
            DrawContext *drawContext) override;
};

}  // namespace m5avatar

#endif  // SUSUMUMOUTH_H_
