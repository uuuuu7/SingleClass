//
//  Header.h
//  SingleClass
//
//  Created by Bo on 16/5/25.
//  Copyright © 2016年 Simple. All rights reserved.
//

#ifndef Header_h
#define Header_h
//.h文件的实现
#define SingleH(methodName) + (instancetype)share##methodName;

//.m文件的视线
//arc下的宏
#if __has_feature(objc_arc)
#define SingleM(methodName)\
static id single = nil;\
+ (instancetype)share##methodName{\
    if (!single) {\
        static dispatch_once_t onceToken;\
        dispatch_once(&onceToken, ^{\
            single = [[self alloc]init];\
        });\
    }\
    return single;\
}\
\
+ (instancetype)allocWithZone:(struct _NSZone *)zone{\
    if (!single) {\
        static dispatch_once_t onceToken;\
        dispatch_once(&onceToken, ^{\
            single = [super allocWithZone:zone];\
        });\
    }\
    return single;\
}\
\
- (instancetype)init{\
static dispatch_once_t onceToken;\
dispatch_once(&onceToken, ^{\
    single = [super init];\
});\
return single;\
}
#else
//定义非ARC下的宏

#endif


#endif /* Header_h */
