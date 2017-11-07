//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DebuggerLLDB/DBGSBQueueItem-Protocol.h>

@class NSString;

@interface LLDBQueueItem : NSObject <DBGSBQueueItem>
{
    struct SBQueueItem {
        struct shared_ptr<lldb_private::QueueItem> m_queue_item_sp;
    } _queueItem;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (_Bool)IsValid;
- (id)initWithSBQueueItem:(const struct SBQueueItem *)arg1;
- (id)GetAddress;
- (id)GetExtendedBacktraceThread:(const char *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

