//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/NSObject-Protocol.h>

@class NSURL;
@protocol DVTDeviceApplication;

@protocol DVTSpecificApplicationProvider <NSObject>
- (id <DVTDeviceApplication>)applicationForURL:(NSURL *)arg1;
@end

