// Copyright (c) robo8080. All rights reserved.
// Licensed under the MIT license. See LICENSE file in the project root for full
// license information.

#ifndef SUSUMUEYEBLOW_H_
#define SUSUMUEYEBLOW_H

#include <M5Unified.h>
#include "BoundingRect.h"
#include "DrawContext.h"
#include "Drawable.h"

namespace m5avatar {
class SusumuEyeblow final : public Drawable {
 private:
  uint16_t width;
  uint16_t height;
  bool isLeft;

 public:
  // constructor
  SusumuEyeblow() = delete;
  SusumuEyeblow(uint16_t w, uint16_t h, bool isLeft);
  ~SusumuEyeblow() = default;
  SusumuEyeblow(const SusumuEyeblow &other) = default;
  SusumuEyeblow &operator=(const SusumuEyeblow &other) = default;
  void draw(M5Canvas *spi, BoundingRect rect,
            DrawContext *drawContext) override;
};

}  // namespace m5avatar

#endif  // SUSUMUEYEBLOW_H
