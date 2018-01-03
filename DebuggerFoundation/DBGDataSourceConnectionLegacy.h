//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DebuggerFoundation/DBGDataSourceConnectionLibViewDebugger.h>

@class NSArray;

@interface DBGDataSourceConnectionLegacy : DBGDataSourceConnectionLibViewDebugger
{
    BOOL _enableLayersAsSnapshots;
    BOOL _enableAlwaysEncodeLayers;
    NSArray *_effectViewClassesToSnapshotAsImage;
}

+ (Class)matchingDataCoordinatorClass;
+ (void)initialize;
@property(retain) NSArray *effectViewClassesToSnapshotAsImage; // @synthesize effectViewClassesToSnapshotAsImage=_effectViewClassesToSnapshotAsImage;
@property BOOL enableAlwaysEncodeLayers; // @synthesize enableAlwaysEncodeLayers=_enableAlwaysEncodeLayers;
@property BOOL enableLayersAsSnapshots; // @synthesize enableLayersAsSnapshots=_enableLayersAsSnapshots;
- (void).cxx_destruct;
- (BOOL)isiOS;
- (id)targetKitFamilyIdentifier;
- (id)libViewDebuggerSupportClassName;
- (BOOL)isObjectOfClassInteresting:(id)arg1;
- (id)_fetchExpression;
- (void)performRequest:(id)arg1;
- (id)initWithDebugSession:(id)arg1;

@end

