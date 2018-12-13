/*
 * Copyright (C) 2016 The Android Open Source Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 */
#include <stdlib.h>
#include "glog.h"

#if defined(__GNUC__) && __GNUC__ >= 4
#define GLOG_EXPORT __attribute__((visibility("default")))
#elif defined(__SUNPRO_C) && (__SUNPRO_C >= 0x590)
#define GLOG_EXPORT __attribute__((visibility("default")))
#else
#define GLOG_EXPORT
#endif

GLOG_EXPORT unsigned glog_int(unsigned n) {
  printf("%s Debug: ", __FUNCTION__, n);
  return 1;
}

GLOG_EXPORT void glog_str(char* msg) {
  printf("%s Debug: %s", __FUNCTION__, msg);
  return;
}

