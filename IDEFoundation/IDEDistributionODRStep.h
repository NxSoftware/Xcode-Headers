//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEFoundation/IDEDistributionItemProcessingStep.h>

@interface IDEDistributionODRStep : IDEDistributionItemProcessingStep
{
}

+ (_Bool)runsPerThinningVariant;
- (_Bool)runWithError:(id *)arg1;
- (id)providedOutputContextPropertyNames;
- (id)requiredInputContextPropertyNames;
- (_Bool)processAppAtPath:(id)arg1 destinationPath:(id)arg2 isAppStoreBound:(BOOL)arg3 baseURL:(id)arg4 assetPackManifestPath:(id *)arg5 includeODRAssetPackInBundle:(BOOL)arg6 error:(id *)arg7;
- (id)name;

@end

