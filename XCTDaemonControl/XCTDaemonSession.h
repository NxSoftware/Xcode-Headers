//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "XCTConfigurableCallbackQueue.h"
#import "XCTConfigurableDebugLogger.h"

@class DTXConnection, DTXProxyChannel, NSError, NSMutableArray, NSObject<OS_dispatch_queue>, NSString;

@interface XCTDaemonSession : NSObject <XCTConfigurableCallbackQueue, XCTConfigurableDebugLogger>
{
    NSObject<OS_dispatch_queue> *_callbackQueue;
    id <XCTDebugLogDelegate> _logDelegate;
    id <XCTDaemonSessionDelegate> _delegate;
    id <XCTTransportProvider> _transportProvider;
    DTXConnection *_dtxConnection;
    DTXProxyChannel *_proxyChannel;
    NSError *_daemonConnectionError;
    NSMutableArray *_requests;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)sessionForSimulatorDevice:(id)arg1;
+ (id)sessionForLocalComputer;
@property(readonly) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain) NSMutableArray *requests; // @synthesize requests=_requests;
@property(retain) NSError *daemonConnectionError; // @synthesize daemonConnectionError=_daemonConnectionError;
@property(retain) DTXProxyChannel *proxyChannel; // @synthesize proxyChannel=_proxyChannel;
@property(retain) DTXConnection *dtxConnection; // @synthesize dtxConnection=_dtxConnection;
@property(readonly) id <XCTTransportProvider> transportProvider; // @synthesize transportProvider=_transportProvider;
@property __weak id <XCTDaemonSessionDelegate> delegate; // @synthesize delegate=_delegate;
@property __weak id <XCTDebugLogDelegate> logDelegate; // @synthesize logDelegate=_logDelegate;
@property(retain) NSObject<OS_dispatch_queue> *callbackQueue; // @synthesize callbackQueue=_callbackQueue;
- (void).cxx_destruct;
- (void)_on_queue_processPendingRequests;
- (void)_on_queue_handleDaemonConnectionError:(id)arg1;
- (void)_on_queue_configureWithTransport:(id)arg1;
- (void)enqueueRequest:(id)arg1;
- (id)proxyChannelForConnection:(id)arg1;
- (void)invalidate;
- (void)dealloc;
- (id)initWithTransportProvider:(id)arg1;
- (CDUnknownBlockType)completionOnCallbackQueue:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

