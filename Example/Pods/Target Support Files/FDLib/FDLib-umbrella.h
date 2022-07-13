#ifdef __OBJC__
#import <UIKit/UIKit.h>
#else
#ifndef FOUNDATION_EXPORT
#if defined(__cplusplus)
#define FOUNDATION_EXPORT extern "C"
#else
#define FOUNDATION_EXPORT extern
#endif
#endif
#endif

#import "FDLibTest.h"

FOUNDATION_EXPORT double FDLibVersionNumber;
FOUNDATION_EXPORT const unsigned char FDLibVersionString[];

