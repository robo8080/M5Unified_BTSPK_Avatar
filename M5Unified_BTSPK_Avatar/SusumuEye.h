// Copyright (c) robo8080 All rights reserved.
// Licensed under the MIT license. See LICENSE file in the project root for full
// license information.

#ifndef SUSUMUEYE_H_
#define SUSUMUEYE_H_

#include <M5Unified.h>
#include "DrawContext.h"
#include "Drawable.h"

namespace m5avatar {

class SusumuEye final : public Drawable {
 private:
  uint16_t r;
  bool isLeft;

 public:
  // constructor
  SusumuEye() = delete;
  SusumuEye(uint16_t x, uint16_t y, uint16_t r, bool isLeft);  // deprecated
  SusumuEye(uint16_t r, bool isLeft);
  ~SusumuEye() = default;
  SusumuEye(const SusumuEye &other) = default;
  SusumuEye &operator=(const SusumuEye &other) = default;
  void draw(M5Canvas *spi, BoundingRect rect,
            DrawContext *drawContext) override;
};

}  // namespace m5avatar

#endif  // SUSUMUEYE_H_
