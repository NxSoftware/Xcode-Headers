//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSArray, NSData, NSString, NSURL;

@protocol SKEBakeryServiceProtocol
- (void)bakeLightProbesForNodesAtIndexPaths:(NSArray *)arg1 sceneData:(NSData *)arg2 XcodeBundleURL:(NSURL *)arg3 completionBlock:(void (^)(NSError *))arg4;
- (void)bakeGeometryForNodesAtIndexPathes:(NSArray *)arg1 sceneData:(NSData *)arg2 settings:(CDStruct_862f26a3)arg3 resourceEnclosingFolderPath:(NSString *)arg4 XcodeBundleURL:(NSURL *)arg5 completionBlock:(void (^)(NSDictionary *, NSError *))arg6;
@end

