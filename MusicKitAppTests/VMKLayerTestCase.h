//  Copyright (c) 2014 Venture Media Labs. All rights reserved.

#import "AIImageCompare.h"
#import "VMKImage.h"
#import <XCTest/XCTest.h>

extern const CGFloat kDefaultAlphaTolerance;
extern const CGFloat kMaximumError;

struct VMKRenderingErrors {
    CGFloat maximumError;
    CGFloat colorError;
    CGFloat alphaError;
    CGFloat rms;
    CGFloat ratio;
};

@interface VMKLayerTestCase : XCTestCase

- (void)calculateRenderingErrors:(CALayer*)layer forSelector:(SEL)selector testBlock:(void (^)(VMKRenderingErrors))testBlock;

- (void)testLayer:(CALayer*)view forSelector:(SEL)selector alphaTolerance:(CGFloat)alphaTolerance;

- (void)overrideLayerBackgorunds:(CALayer *)layer dictionary:(NSDictionary *)dictionary;

@end
