// Tencent is pleased to support the open source community by making Mars available.
// Copyright (C) 2016 THL A29 Limited, a Tencent company. All rights reserved.

// Licensed under the MIT License (the "License"); you may not use this file except in 
// compliance with the License. You may obtain a copy of the License at
// http://opensource.org/licenses/MIT

// Unless required by applicable law or agreed to in writing, software distributed under the License is
// distributed on an "AS IS" basis, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND,
// either express or implied. See the License for the specific language governing permissions and
// limitations under the License.

//
//  prjdef.h
//  comm
//
//  Created by yerungui on 16/4/26.
//  Copyright © 2016年 Tencent. All rights reserved.
//

#ifndef prjdef_h
#define prjdef_h

#if (defined(_WIN32) && defined(_MSC_VER))
#include "windows/projdef.h"
#endif
// #if (defined(_WIN32) && defined(__GNU__))
#define PRIu64 "I64d"
// #endif


#endif /* prjdef_h */
