//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DTXService.h"

@class DTXConnection, NSObject<OS_dispatch_queue>;

@interface DTAssetProviderService : DTXService
{
    DTXConnection *_connection;
    NSObject<OS_dispatch_queue> *_concurrentRequestQueue;
}

+ (void)beginProvidingAssetsForApplication:(id)arg1 onChannel:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (BOOL)shouldStartAssetServerForApplication:(id)arg1;
+ (id)assetManifestPathForApplication:(id)arg1;
+ (void)assetProviderWithConnection:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)beginProvidingAssetsForLocalApplication:(id)arg1 connection:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)beginProvidingAssetsForRemoteApplication:(id)arg1 connection:(id)arg2 completion:(CDUnknownBlockType)arg3;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *concurrentRequestQueue; // @synthesize concurrentRequestQueue=_concurrentRequestQueue;
@property(nonatomic) __weak DTXConnection *connection; // @synthesize connection=_connection;
- (void).cxx_destruct;
- (void)registerManifestForApplicationAtPath:(id)arg1 onPort:(unsigned long long)arg2;
- (void)startServerOnDeviceWithCompletion:(CDUnknownBlockType)arg1;
- (void)serveDataFromFileHandle:(id)arg1 forRequestIdentifier:(id)arg2;
- (void)serveDataFromFile:(id)arg1 forRequestIdentifier:(id)arg2;
- (void)serveDataFromZippedDirectory:(id)arg1 forRequestIdentifier:(id)arg2;
- (void)messageReceived:(id)arg1;
- (void)startServingAssetsForAppWithPath:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (id)initWithChannel:(id)arg1;

@end

