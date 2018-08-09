/*  Copyright (c) 2013-2015 Tencent. All rights reserved.  */

#if (defined(_WIN32) && defined(_MSC_VER))
#include "../windows/SocketSelect/socketselect2.h"
#else
#include "../unix/socket/socketpoll.h"
#endif
