//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <IDEPlaygroundEditor/NSObject-Protocol.h>

@class NSHashTable;
@protocol IDEPlaygroundExecutionDeviceViewContentReceiver;

@protocol IDEPlaygroundExecutionDeviceViewContentProvider <NSObject>
@property(readonly) NSHashTable *viewContentReceivers;
- (void)unregisterViewContentReceiver:(id <IDEPlaygroundExecutionDeviceViewContentReceiver>)arg1;
- (void)registerViewContentReceiver:(id <IDEPlaygroundExecutionDeviceViewContentReceiver>)arg1;
@end

