//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <XCSCore/XCSService.h>

#import <XCSCore/NSNetServiceDelegate-Protocol.h>

@class NSError, NSMutableArray, NSNetService, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface XCSService_BonjourConnection : XCSService <NSNetServiceDelegate>
{
    NSMutableArray *_resolveListeners;
    NSObject<OS_dispatch_queue> *_resolveListenerQueue;
    BOOL isResolved;
    BOOL isResolving;
    NSString *netServiceDomain;
    NSString *netServiceType;
    NSString *netServiceName;
    NSError *resolutionError;
    NSNetService *_netService;
}

@property(retain) NSNetService *netService; // @synthesize netService=_netService;
@property(retain, nonatomic) NSError *resolutionError; // @synthesize resolutionError;
@property BOOL isResolving; // @synthesize isResolving;
@property BOOL isResolved; // @synthesize isResolved;
@property(retain, nonatomic) NSString *netServiceName; // @synthesize netServiceName;
@property(retain, nonatomic) NSString *netServiceType; // @synthesize netServiceType;
@property(retain, nonatomic) NSString *netServiceDomain; // @synthesize netServiceDomain;
- (void).cxx_destruct;
- (void)netService:(id)arg1 didNotResolve:(id)arg2;
- (void)netServiceDidResolveAddress:(id)arg1;
- (void)notifyAfterBonjourResolution:(CDUnknownBlockType)arg1;
- (void)resolveService;
- (BOOL)isBonjour;
- (id)initWithNetServiceDomain:(id)arg1 type:(id)arg2 name:(id)arg3 enabled:(BOOL)arg4;
- (id)initWithNetServiceDomain:(id)arg1 type:(id)arg2 name:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

