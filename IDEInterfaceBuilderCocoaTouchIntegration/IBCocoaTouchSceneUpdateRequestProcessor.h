//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IBPlatformToolRequestProcessor.h"

@class NSString;

@interface IBCocoaTouchSceneUpdateRequestProcessor : NSObject <IBPlatformToolRequestProcessor>
{
}

- (id)toolDescriptionForProcessingRequestsWithTargetRuntime:(id)arg1 role:(long long)arg2 scaleFactor:(double)arg3;
- (id)resultsAfterFailingToLaunchPlatformToolWithResult:(id)arg1 forRequests:(id)arg2;
- (id)performRequestOnBackgroundThreadWithData:(id)arg1 diagnosticsBlock:(CDUnknownBlockType)arg2 platformTool:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

