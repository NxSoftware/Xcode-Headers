//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Xcode3UI/IDEUpgradeTaskHandler-Protocol.h>

@class NSString;

@interface Xcode3UpgradeGCHandler : NSObject <IDEUpgradeTaskHandler>
{
}

+ (id)sharedInstance;
- (void)upgradeWorkspace:(id)arg1 withTasks:(id)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

