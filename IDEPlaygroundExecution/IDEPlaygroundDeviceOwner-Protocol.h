//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

@class NSString;
@protocol IDEPlaygroundDeviceOwner;

@protocol IDEPlaygroundDeviceOwner
- (void)playgroundDeviceWithIdentifier:(NSString *)arg1 wasAssignedToOwner:(id <IDEPlaygroundDeviceOwner>)arg2;
- (void)playgroundDeviceWithIdentifier:(NSString *)arg1 wasRequestedBy:(id <IDEPlaygroundDeviceOwner>)arg2;
@end

