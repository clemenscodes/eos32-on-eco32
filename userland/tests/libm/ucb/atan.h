// Copyright (C) 1988-1994 Sun Microsystems, Inc. 2550 Garcia Avenue
// Mountain View, California  94043 All rights reserved.
//
// Any person is hereby authorized to download, copy, use, create bug fixes,
// and distribute, subject to the following conditions:
//
// 	1.  the software may not be redistributed for a fee except as
// 	    reasonable to cover media costs;
// 	2.  any copy of the software must include this notice, as well as
// 	    any other embedded copyright notices; and
// 	3.  any distribution of this software or derivative works thereof
// 	    must comply with all applicable U.S. export control laws.
//
// THE SOFTWARE IS MADE AVAILABLE "AS IS" AND WITHOUT EXPRESS OR IMPLIED
// WARRANTY OF ANY KIND, INCLUDING BUT NOT LIMITED TO THE IMPLIED
// WARRANTIES OF DESIGN, MERCHANTIBILITY, FITNESS FOR A PARTICULAR
// PURPOSE, NON-INFRINGEMENT, PERFORMANCE OR CONFORMANCE TO
// SPECIFICATIONS.
//
// BY DOWNLOADING AND/OR USING THIS SOFTWARE, THE USER WAIVES ALL CLAIMS
// AGAINST SUN MICROSYSTEMS, INC. AND ITS AFFILIATED COMPANIES IN ANY
// JURISDICTION, INCLUDING BUT NOT LIMITED TO CLAIMS FOR DAMAGES OR
// EQUITABLE RELIEF BASED ON LOSS OF DATA, AND SPECIFICALLY WAIVES EVEN
// UNKNOWN OR UNANTICIPATED CLAIMS OR LOSSES, PRESENT AND FUTURE.
//
// IN NO EVENT WILL SUN MICROSYSTEMS, INC. OR ANY OF ITS AFFILIATED
// COMPANIES BE LIABLE FOR ANY LOST REVENUE OR PROFITS OR OTHER SPECIAL,
// INDIRECT AND CONSEQUENTIAL DAMAGES, EVEN IF IT HAS BEEN ADVISED OF THE
// POSSIBILITY OF SUCH DAMAGES.
//
// This file is provided with no support and without any obligation on the
// part of Sun Microsystems, Inc. ("Sun") or any of its affiliated
// companies to assist in its use, correction, modification or
// enhancement.  Nevertheless, and without creating any obligation on its
// part, Sun welcomes your comments concerning the software and requests
// that they be sent to fdlibm-comments@sunpro.sun.com.
// atans(+-max) is +-pi/2
T5(RN,0x7f7fffff, 0x3fc90fdb, 0x3ebbbd2e, INEXACT)
T5(RN,0xff7fffff, 0xbfc90fdb, 0xbebbbd2e, INEXACT)
// atans(+-1) is +-pi/4
T5(RN,0x3f800000, 0x3f490fdb, 0x3ebbbd2e, INEXACT)
T5(RN,0xbf800000, 0xbf490fdb, 0xbebbbd2e, INEXACT)
// atans(tiny) is tiny
T5(RN,0x31000000, 0x31000000, 0x2d2aaaab, INEXACT)
T5(RN,0xb1000000, 0xb1000000, 0xad2aaaab, INEXACT)
T5(RN,0x00800000, 0x00800000, 0x00000000, INEXACT)
T5(RN,0x80800000, 0x80800000, 0x00000000, INEXACT)
T5(RZ,0x31000000, 0x30ffffff, 0xbf800000, INEXACT)
T5(RZ,0xb1000000, 0xb0ffffff, 0x3f800000, INEXACT)
T5(RZ,0x00800000, 0x007fffff, 0xbf800000, INEXACT|UNDERFLOW)
T5(RZ,0x80800000, 0x807fffff, 0x3f800000, INEXACT|UNDERFLOW)
T5(RU,0x31000000, 0x31000000, 0x2d2aaaab, INEXACT)
T5(RU,0xb1000000, 0xb0ffffff, 0x3f800000, INEXACT)
T5(RU,0x00800000, 0x00800000, 0x00000000, INEXACT)
T5(RU,0x80800000, 0x807fffff, 0x3f800000, INEXACT|UNDERFLOW)
T5(RD,0x31000000, 0x30ffffff, 0xbf800000, INEXACT)
T5(RD,0xb1000000, 0xb1000000, 0xad2aaaab, INEXACT)
T5(RD,0x00800000, 0x007fffff, 0xbf800000, INEXACT|UNDERFLOW)
T5(RD,0x80800000, 0x80800000, 0x00000000, INEXACT)
// atans(+-0) is +-0
T5(RN,0x00000000, 0x00000000, 0x00000000, 0)
T5(RN,0x80000000, 0x80000000, 0x00000000, 0)
T5(RZ,0x00000000, 0x00000000, 0x00000000, 0)
T5(RZ,0x80000000, 0x80000000, 0x00000000, 0)
T5(RU,0x00000000, 0x00000000, 0x00000000, 0)
T5(RU,0x80000000, 0x80000000, 0x00000000, 0)
T5(RD,0x00000000, 0x00000000, 0x00000000, 0)
T5(RD,0x80000000, 0x80000000, 0x00000000, 0)
// random arguments between -2 and 2
T5(RN,0xbf099426, 0xbefc7baf, 0xbefff5c5, INEXACT)
T5(RN,0x3fb65470, 0x3f756e37, 0x3ee6c30d, INEXACT)
T5(RN,0x3fe16530, 0x3f86f3fc, 0xbee3a115, INEXACT)
T5(RN,0xbfaaf890, 0xbf6d9b3e, 0xbee11291, INEXACT)
T5(RN,0xbf0ab3cf, 0xbefe3942, 0x3e4158cf, INEXACT)
T5(RN,0xbda0f099, 0xbda09c1a, 0xbec5c15c, INEXACT)
T5(RN,0x3f940d87, 0x3f5ba021, 0x3e5c39cf, INEXACT)
T5(RN,0x3fdae71a, 0x3f8555ac, 0xbe961caa, INEXACT)
T5(RN,0xbeac1a41, 0xbea6070a, 0xbe3423fd, INEXACT)
T5(RN,0xbff54112, 0xbf8b7dce, 0xbee84e9c, INEXACT)
T5(RZ,0xbf099426, 0xbefc7bae, 0x3f00051d, INEXACT)
T5(RZ,0x3fb65470, 0x3f756e36, 0xbf0c9e79, INEXACT)
T5(RZ,0x3fe16530, 0x3f86f3fc, 0xbee3a115, INEXACT)
T5(RZ,0xbfaaf890, 0xbf6d9b3d, 0x3f0f76b7, INEXACT)
T5(RZ,0xbf0ab3cf, 0xbefe3942, 0x3e4158cf, INEXACT)
T5(RZ,0xbda0f099, 0xbda09c19, 0x3f1d1f52, INEXACT)
T5(RZ,0x3f940d87, 0x3f5ba020, 0xbf48f18c, INEXACT)
T5(RZ,0x3fdae71a, 0x3f8555ac, 0xbe961caa, INEXACT)
T5(RZ,0xbeac1a41, 0xbea60709, 0x3f52f701, INEXACT)
T5(RZ,0xbff54112, 0xbf8b7dcd, 0x3f0bd8b2, INEXACT)
T5(RU,0xbf099426, 0xbefc7bae, 0x3f00051d, INEXACT)
T5(RU,0x3fb65470, 0x3f756e37, 0x3ee6c30d, INEXACT)
T5(RU,0x3fe16530, 0x3f86f3fd, 0x3f0e2f76, INEXACT)
T5(RU,0xbfaaf890, 0xbf6d9b3d, 0x3f0f76b7, INEXACT)
T5(RU,0xbf0ab3cf, 0xbefe3942, 0x3e4158cf, INEXACT)
T5(RU,0xbda0f099, 0xbda09c19, 0x3f1d1f52, INEXACT)
T5(RU,0x3f940d87, 0x3f5ba021, 0x3e5c39cf, INEXACT)
T5(RU,0x3fdae71a, 0x3f8555ad, 0x3f34f1ab, INEXACT)
T5(RU,0xbeac1a41, 0xbea60709, 0x3f52f701, INEXACT)
T5(RU,0xbff54112, 0xbf8b7dcd, 0x3f0bd8b2, INEXACT)
T5(RD,0xbf099426, 0xbefc7baf, 0xbefff5c5, INEXACT)
T5(RD,0x3fb65470, 0x3f756e36, 0xbf0c9e79, INEXACT)
T5(RD,0x3fe16530, 0x3f86f3fc, 0xbee3a115, INEXACT)
T5(RD,0xbfaaf890, 0xbf6d9b3e, 0xbee11291, INEXACT)
T5(RD,0xbf0ab3cf, 0xbefe3943, 0xbf4fa9cc, INEXACT)
T5(RD,0xbda0f099, 0xbda09c1a, 0xbec5c15c, INEXACT)
T5(RD,0x3f940d87, 0x3f5ba020, 0xbf48f18c, INEXACT)
T5(RD,0x3fdae71a, 0x3f8555ac, 0xbe961caa, INEXACT)
T5(RD,0xbeac1a41, 0xbea6070a, 0xbe3423fd, INEXACT)
T5(RD,0xbff54112, 0xbf8b7dce, 0xbee84e9c, INEXACT)
// atans(+-inf) is +-pi/2
T5(RN,0x7f800000, 0x3fc90fdb, 0x3ebbbd2e, INEXACT)
T5(RN,0xff800000, 0xbfc90fdb, 0xbebbbd2e, INEXACT)
// atans(nan) is nan
T5(RN,0x7fc00000, 0x7fc00000, 0x00000000, 0)
T5(RN,0x7fc00000, 0x7fc00000, 0x00000000, 0)
T5(RZ,0x7fc00000, 0x7fc00000, 0x00000000, 0)
T5(RZ,0x7fc00000, 0x7fc00000, 0x00000000, 0)
T5(RU,0x7fc00000, 0x7fc00000, 0x00000000, 0)
T5(RU,0x7fc00000, 0x7fc00000, 0x00000000, 0)
T5(RD,0x7fc00000, 0x7fc00000, 0x00000000, 0)
T5(RD,0x7fc00000, 0x7fc00000, 0x00000000, 0)
T5(RD,0x00800001, 0x00800000, 0xbf800000, INEXACT)
T5(RD,0x00800002, 0x00800001, 0xbf800000, INEXACT)
T5(RD,0x01000000, 0x00ffffff, 0xbf800000, INEXACT)
T5(RD,0x01800000, 0x017fffff, 0xbf800000, INEXACT)
T5(RD,0x80800001, 0x80800001, 0x00000000, INEXACT)
T5(RD,0x80800002, 0x80800002, 0x00000000, INEXACT)
T5(RD,0x80fffffb, 0x80fffffb, 0x00000000, INEXACT)
T5(RD,0x81000000, 0x81000000, 0x00000000, INEXACT)
T5(RD,0x81000003, 0x81000003, 0x00000000, INEXACT)
T5(RD,0x81800000, 0x81800000, 0x00000000, INEXACT)
T5(RD,0x00000001, 0x00000000, 0xbf800000, INEXACT|UNDERFLOW)
T5(RD,0x00000002, 0x00000001, 0xbf800000, INEXACT|UNDERFLOW)
T5(RD,0x00200000, 0x001fffff, 0xbf800000, INEXACT|UNDERFLOW)
T5(RD,0x00400000, 0x003fffff, 0xbf800000, INEXACT|UNDERFLOW)
T5(RD,0x007ffffe, 0x007ffffd, 0xbf800000, INEXACT|UNDERFLOW)
T5(RD,0x007fffff, 0x007ffffe, 0xbf800000, INEXACT|UNDERFLOW)
T5(RD,0x80000001, 0x80000001, 0x00000000, INEXACT|UNDERFLOW)
T5(RD,0x80000002, 0x80000002, 0x00000000, INEXACT|UNDERFLOW)
T5(RD,0x80000009, 0x80000009, 0x00000000, INEXACT|UNDERFLOW)
T5(RD,0x80200000, 0x80200000, 0x00000000, INEXACT|UNDERFLOW)
T5(RD,0x80400000, 0x80400000, 0x00000000, INEXACT|UNDERFLOW)
T5(RD,0x807ffffe, 0x807ffffe, 0x00000000, INEXACT|UNDERFLOW)
T5(RD,0x807fffff, 0x807fffff, 0x00000000, INEXACT|UNDERFLOW)
T5(RD,0x32400000, 0x323fffff, 0xbf800000, INEXACT)
T5(RD,0x39800000, 0x397fffff, 0xbf2aaaab, INEXACT)
T5(RD,0xb2400000, 0xb2400000, 0xb0100000, INEXACT)
T5(RD,0xb9800000, 0xb9800000, 0xbe2aaaaa, INEXACT)
T5(RN,0x00800001, 0x00800001, 0x00000000, INEXACT)
T5(RN,0x00800002, 0x00800002, 0x00000000, INEXACT)
T5(RN,0x00fffffb, 0x00fffffb, 0x00000000, INEXACT)
T5(RN,0x01000000, 0x01000000, 0x00000000, INEXACT)
T5(RN,0x01000003, 0x01000003, 0x00000000, INEXACT)
T5(RN,0x01800000, 0x01800000, 0x00000000, INEXACT)
T5(RN,0x32400000, 0x32400000, 0x30100000, INEXACT)
T5(RN,0x39800000, 0x39800000, 0x3e2aaaaa, INEXACT)
T5(RN,0x80800001, 0x80800001, 0x00000000, INEXACT)
T5(RN,0x80800002, 0x80800002, 0x00000000, INEXACT)
T5(RN,0x80fffffb, 0x80fffffb, 0x00000000, INEXACT)
T5(RN,0x81000000, 0x81000000, 0x00000000, INEXACT)
T5(RN,0x81000003, 0x81000003, 0x00000000, INEXACT)
T5(RN,0x81800000, 0x81800000, 0x00000000, INEXACT)
T5(RN,0xb2400000, 0xb2400000, 0xb0100000, INEXACT)
T5(RN,0xb9800000, 0xb9800000, 0xbe2aaaaa, INEXACT)
T5(RN,0x00000001, 0x00000001, 0x00000000, INEXACT|UNDERFLOW)
T5(RN,0x00000002, 0x00000002, 0x00000000, INEXACT|UNDERFLOW)
T5(RN,0x00000009, 0x00000009, 0x00000000, INEXACT|UNDERFLOW)
T5(RN,0x00200000, 0x00200000, 0x00000000, INEXACT|UNDERFLOW)
T5(RN,0x00400000, 0x00400000, 0x00000000, INEXACT|UNDERFLOW)
T5(RN,0x007ffffe, 0x007ffffe, 0x00000000, INEXACT|UNDERFLOW)
T5(RN,0x007fffff, 0x007fffff, 0x00000000, INEXACT|UNDERFLOW)
T5(RN,0x80000001, 0x80000001, 0x00000000, INEXACT|UNDERFLOW)
T5(RN,0x80000002, 0x80000002, 0x00000000, INEXACT|UNDERFLOW)
T5(RN,0x80000009, 0x80000009, 0x00000000, INEXACT|UNDERFLOW)
T5(RN,0x80200000, 0x80200000, 0x00000000, INEXACT|UNDERFLOW)
T5(RN,0x80400000, 0x80400000, 0x00000000, INEXACT|UNDERFLOW)
T5(RN,0x807ffffe, 0x807ffffe, 0x00000000, INEXACT|UNDERFLOW)
T5(RN,0x807fffff, 0x807fffff, 0x00000000, INEXACT|UNDERFLOW)
T5(RU,0x00800001, 0x00800001, 0x00000000, INEXACT)
T5(RU,0x00800002, 0x00800002, 0x00000000, INEXACT)
T5(RU,0x00fffffb, 0x00fffffb, 0x00000000, INEXACT)
T5(RU,0x01000000, 0x01000000, 0x00000000, INEXACT)
T5(RU,0x01000003, 0x01000003, 0x00000000, INEXACT)
T5(RU,0x01800000, 0x01800000, 0x00000000, INEXACT)
T5(RU,0x80800001, 0x80800000, 0x3f800000, INEXACT)
T5(RU,0x80800002, 0x80800001, 0x3f800000, INEXACT)
T5(RU,0x81000000, 0x80ffffff, 0x3f800000, INEXACT)
T5(RU,0x81800000, 0x817fffff, 0x3f800000, INEXACT)
T5(RU,0x00000001, 0x00000001, 0x00000000, INEXACT|UNDERFLOW)
T5(RU,0x00000002, 0x00000002, 0x00000000, INEXACT|UNDERFLOW)
T5(RU,0x00000009, 0x00000009, 0x00000000, INEXACT|UNDERFLOW)
T5(RU,0x00200000, 0x00200000, 0x00000000, INEXACT|UNDERFLOW)
T5(RU,0x00400000, 0x00400000, 0x00000000, INEXACT|UNDERFLOW)
T5(RU,0x007ffffe, 0x007ffffe, 0x00000000, INEXACT|UNDERFLOW)
T5(RU,0x007fffff, 0x007fffff, 0x00000000, INEXACT|UNDERFLOW)
T5(RU,0x80000001, 0x80000000, 0x3f800000, INEXACT|UNDERFLOW)
T5(RU,0x80000002, 0x80000001, 0x3f800000, INEXACT|UNDERFLOW)
T5(RU,0x80200000, 0x801fffff, 0x3f800000, INEXACT|UNDERFLOW)
T5(RU,0x80400000, 0x803fffff, 0x3f800000, INEXACT|UNDERFLOW)
T5(RU,0x807ffffe, 0x807ffffd, 0x3f800000, INEXACT|UNDERFLOW)
T5(RU,0x807fffff, 0x807ffffe, 0x3f800000, INEXACT|UNDERFLOW)
T5(RU,0x32400000, 0x32400000, 0x30100000, INEXACT)
T5(RU,0x39800000, 0x39800000, 0x3e2aaaaa, INEXACT)
T5(RU,0xb2400000, 0xb23fffff, 0x3f800000, INEXACT)
T5(RU,0xb9800000, 0xb97fffff, 0x3f2aaaab, INEXACT)
T5(RZ,0x00800001, 0x00800000, 0xbf800000, INEXACT)
T5(RZ,0x00800002, 0x00800001, 0xbf800000, INEXACT)
T5(RZ,0x01000000, 0x00ffffff, 0xbf800000, INEXACT)
T5(RZ,0x01800000, 0x017fffff, 0xbf800000, INEXACT)
T5(RZ,0x80800001, 0x80800000, 0x3f800000, INEXACT)
T5(RZ,0x80800002, 0x80800001, 0x3f800000, INEXACT)
T5(RZ,0x81000000, 0x80ffffff, 0x3f800000, INEXACT)
T5(RZ,0x81800000, 0x817fffff, 0x3f800000, INEXACT)
T5(RZ,0x00000001, 0x00000000, 0xbf800000, INEXACT|UNDERFLOW)
T5(RZ,0x00000002, 0x00000001, 0xbf800000, INEXACT|UNDERFLOW)
T5(RZ,0x00200000, 0x001fffff, 0xbf800000, INEXACT|UNDERFLOW)
T5(RZ,0x00400000, 0x003fffff, 0xbf800000, INEXACT|UNDERFLOW)
T5(RZ,0x007ffffe, 0x007ffffd, 0xbf800000, INEXACT|UNDERFLOW)
T5(RZ,0x007fffff, 0x007ffffe, 0xbf800000, INEXACT|UNDERFLOW)
T5(RZ,0x80000001, 0x80000000, 0x3f800000, INEXACT|UNDERFLOW)
T5(RZ,0x80000002, 0x80000001, 0x3f800000, INEXACT|UNDERFLOW)
T5(RZ,0x80200000, 0x801fffff, 0x3f800000, INEXACT|UNDERFLOW)
T5(RZ,0x80400000, 0x803fffff, 0x3f800000, INEXACT|UNDERFLOW)
T5(RZ,0x807ffffe, 0x807ffffd, 0x3f800000, INEXACT|UNDERFLOW)
T5(RZ,0x807fffff, 0x807ffffe, 0x3f800000, INEXACT|UNDERFLOW)
T5(RZ,0x32400000, 0x323fffff, 0xbf800000, INEXACT)
T5(RZ,0x39800000, 0x397fffff, 0xbf2aaaab, INEXACT)
T5(RZ,0xb2400000, 0xb23fffff, 0x3f800000, INEXACT)
T5(RZ,0xb9800000, 0xb97fffff, 0x3f2aaaab, INEXACT)
