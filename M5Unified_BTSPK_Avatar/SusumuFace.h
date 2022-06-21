// Copyright (c) robo8080. All rights reserved.
// Licensed under the MIT license. See LICENSE file in the project root for full
// license information.
#ifndef FACES_SUSUMUFACE_H_
#define FACES_SUSUMUFACE_H_

#include <M5Unified.h>
#include "SusumuEye.h"
#include "SusumuMouth.h"
#include "SusumuEyeblow.h"
#include "AtaruMouth.h"

namespace m5avatar {
class SusumuFace : public Face {
 public:
  SusumuFace()
      : Face(new SusumuMouth(50, 100, 4, 65), new BoundingRect(160, 163),
             new SusumuEye(23, false), new BoundingRect(93, 90),
             new SusumuEye(23, true),  new BoundingRect(93, 230),
             new SusumuEyeblow(50, 6, false), new BoundingRect(55, 90),
             new SusumuEyeblow(50, 6, true), new BoundingRect(55, 230)) {}
  SusumuFace(M5Canvas *canvas)
      : Face(new SusumuMouth(50, 100, 4, 65), new BoundingRect(160, 163),
             new SusumuEye(23, false), new BoundingRect(93, 90),
             new SusumuEye(23, true),  new BoundingRect(93, 230),
             new SusumuEyeblow(50, 6, false), new BoundingRect(55, 90),
             new SusumuEyeblow(50, 6, true), new BoundingRect(55, 230), canvas) {}
             
};

}  // namespace m5avatar

#endif  // FACES_SUSUMUFACE_H_
