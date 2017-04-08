//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "XCTConfigurableDebugLogger.h"
#import "XCTTestRunnerConnectionProvider.h"

@class DTXProxyChannel, NSObject<OS_dispatch_queue>, NSString, NSUUID;

@interface XCTDaemonMediatedTestRunnerConnectionProvider : NSObject <XCTTestRunnerConnectionProvider, XCTConfigurableDebugLogger>
{
    id <XCTDebugLogDelegate> _logDelegate;
    NSObject<OS_dispatch_queue> *_queue;
    NSUUID *_sessionIdentifier;
    id <XCTTransportProvider> _daemonTransportProvider;
    DTXProxyChannel *_proxyChannel;
}

@property(retain) DTXProxyChannel *proxyChannel; // @synthesize proxyChannel=_proxyChannel;
@property(retain) id <XCTTransportProvider> daemonTransportProvider; // @synthesize daemonTransportProvider=_daemonTransportProvider;
@property(readonly) NSUUID *sessionIdentifier; // @synthesize sessionIdentifier=_sessionIdentifier;
@property(readonly) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property __weak id <XCTDebugLogDelegate> logDelegate; // @synthesize logDelegate=_logDelegate;
- (void).cxx_destruct;
- (void)_queue_initiateSessionWithConnection:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (BOOL)_queue_isValid;
- (void)invalidate;
- (void)makeTestRunnerConnectionWithCompletion:(CDUnknownBlockType)arg1 cancellation:(CDUnknownBlockType)arg2;
- (id)initWithSessionIdentifier:(id)arg1 daemonTransportProvider:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

