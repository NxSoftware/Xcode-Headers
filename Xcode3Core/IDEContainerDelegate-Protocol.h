//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Xcode3Core/NSObject-Protocol.h>

@class DVTFilePath, IDEContainer;

@protocol IDEContainerDelegate <NSObject>

@optional
- (void)_container:(IDEContainer *)arg1 didChangeFromFilePath:(DVTFilePath *)arg2 toFilePath:(DVTFilePath *)arg3;
@end

