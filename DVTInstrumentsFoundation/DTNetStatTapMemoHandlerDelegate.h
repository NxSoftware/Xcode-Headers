//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DVTInstrumentsFoundation/DTTapMemoHandlerDelegate-Protocol.h>

@class DTNetStatTapRecordDecoder, NSString;

@interface DTNetStatTapMemoHandlerDelegate : NSObject <DTTapMemoHandlerDelegate>
{
    DTNetStatTapRecordDecoder *_recordDecoder;
}

- (void).cxx_destruct;
- (id)peekAtMemo:(id)arg1;
- (void)sendHeartbeatMemo:(id)arg1 toClientUsingConfig:(id)arg2;
- (void)sendDataMemo:(id)arg1 toClientUsingConfig:(id)arg2;
- (void)sendDataMemo:(id)arg1 toBulkReceiver:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

