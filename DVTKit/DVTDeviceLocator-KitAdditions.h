//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <DVTFoundation/DVTDeviceLocator.h>

@interface DVTDeviceLocator (KitAdditions)
- (void)beginPairingAssistantForDevice:(id)arg1 withWindow:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)beginDeviceCreationAssistantWithWindow:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
@property(readonly) BOOL canCreateDevices;
@end

