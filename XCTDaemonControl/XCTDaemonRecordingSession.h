//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <XCTDaemonControl/XCTDaemonSession.h>

#import "XCTestManager_IDEInterface.h"

@class NSMutableArray;

@interface XCTDaemonRecordingSession : XCTDaemonSession <XCTestManager_IDEInterface>
{
    NSMutableArray *_startRecordingRequests;
}

@property(retain) NSMutableArray *startRecordingRequests; // @synthesize startRecordingRequests=_startRecordingRequests;
- (void).cxx_destruct;
- (id)_XCT_nativeFocusItemDidChangeAtTime:(id)arg1 parameterSnapshot:(id)arg2 applicationSnapshot:(id)arg3;
- (id)_XCT_recordedKeyEventsWithApplicationSnapshot:(id)arg1 characters:(id)arg2 charactersIgnoringModifiers:(id)arg3 modifierFlags:(id)arg4;
- (id)_XCT_recordedFirstResponderChangedWithApplicationSnapshot:(id)arg1;
- (id)_XCT_recordedOrientationChange:(id)arg1;
- (id)_XCT_recordedEventNames:(id)arg1 timestamp:(id)arg2 duration:(id)arg3 startLocation:(id)arg4 startElementSnapshot:(id)arg5 startApplicationSnapshot:(id)arg6 endLocation:(id)arg7 endElementSnapshot:(id)arg8 endApplicationSnapshot:(id)arg9;
- (id)_XCT_exchangeCurrentProtocolVersion:(id)arg1 minimumVersion:(id)arg2;
- (void)completeStartRecordingRequestsWithProtocolExchangeError:(id)arg1;
- (void)saveStartRecordingRequest:(id)arg1;
- (void)stopRecording;
- (void)startRecordingProcessID:(int)arg1 configuration:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)proxyChannelForConnection:(id)arg1;
- (id)initWithTransportProvider:(id)arg1;

// Remaining properties
@property __weak id <XCTDaemonRecordingSessionDelegate> delegate; // @dynamic delegate;

@end

