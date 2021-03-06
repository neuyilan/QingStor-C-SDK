/********************************************************************
 * 2017 -
 * open source under Apache License Version 2.0
 ********************************************************************/
/**
 * Licensed to the Apache Software Foundation (ASF) under one
 * or more contributor license agreements.  See the NOTICE file
 * distributed with this work for additional information
 * regarding copyright ownership.  The ASF licenses this file
 * to you under the Apache License, Version 2.0 (the
 * "License"); you may not use this file except in compliance
 * with the License.  You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef _LIB_ENCODE_FUNCTIONS_
#define _LIB_ENCODE_FUNCTIONS_

#include <stddef.h>
#include <stdbool.h>

namespace QingStor {
namespace Internal {

char *Base64Encode(const char* buffer, size_t length);

bool sha256hmac(const char *str, char out[65], const char *secret);

}
}
#endif  /* _LIB_ENCODE_FUNCTIONS_ */
