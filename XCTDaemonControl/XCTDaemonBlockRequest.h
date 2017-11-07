//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <XCTDaemonControl/XCTDaemonRequest-Protocol.h>

@class NSString;

@interface XCTDaemonBlockRequest : NSObject <XCTDaemonRequest>
{
    CDUnknownBlockType _sendToDaemonProxyBlock;
    CDUnknownBlockType _handleConnectionFailureBlock;
}

@property(copy) CDUnknownBlockType handleConnectionFailureBlock; // @synthesize handleConnectionFailureBlock=_handleConnectionFailureBlock;
@property(copy) CDUnknownBlockType sendToDaemonProxyBlock; // @synthesize sendToDaemonProxyBlock=_sendToDaemonProxyBlock;
- (void).cxx_destruct;
- (void)handleConnectionFailure:(id)arg1;
- (void)sendToDaemonProxy:(id)arg1;
- (id)initWithSendToDaemonProxyBlock:(CDUnknownBlockType)arg1 handleConnectionFailureBlock:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

