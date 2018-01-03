//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SymbolicationDT/VMUCommonGraphInterface-Protocol.h>

@class DVT_VMUClassInfoMap, DVT_VMUDebugTimer, DVT_VMUObjectIdentifier, DVT_VMUProcessObjectGraph, DVT_VMURangeArray, DVT_VMUVMRegionIdentifier, NSMutableArray, NSString;

@interface DVT_VMUTaskMemoryScanner : NSObject <VMUCommonGraphInterface>
{
    unsigned int _task;
    int _pid;
    unsigned long long _suspendTime;
    unsigned int _suspensionToken;
    DVT_VMUObjectIdentifier *_objectIdentifier;
    DVT_VMUVMRegionIdentifier *_regionIdentifier;
    struct _VMUBlockNode *_blocks;
    unsigned int _blocksCount;
    unsigned int _blocksSize;
    struct _VMURegionNode *_regions;
    unsigned int _regionsCount;
    struct _VMURegionMap *_regionMap;
    DVT_VMURangeArray *_stackRanges;
    NSMutableArray *_zoneNames;
    struct _VMUZoneNode *_zones;
    unsigned int _zonesCount;
    unsigned int _zonesSize;
    struct _VMUThreadNode *_threads;
    unsigned int _threadsCount;
    struct _VMUInstanceValues *_instanceValues;
    unsigned int _instanceValuesCount;
    unsigned int _instanceValuesSize;
    id *_classInfos;
    unsigned int _classInfosCount;
    DVT_VMUClassInfoMap *_classInfoIndexer;
    struct _VMUScanLocationCache **_scanCaches;
    BOOL _exactScanningEnabled;
    unsigned long long _maxInteriorOffset;
    unsigned int _scanningMask;
    DVT_VMUDebugTimer *_debugTimer;
    NSString *_processName;
    NSString *_processDescriptionString;
    NSString *_binaryImagesDescription;
    CDUnknownBlockType _referenceLogger;
    CDUnknownBlockType _nodeLogger;
    BOOL _abandonedMarkingEnabled;
    BOOL _saveNodeLabelsInGraph;
    DVT_VMUProcessObjectGraph *_processObjectGraph;
    void *_userMarkedAbandoned;
    unsigned long long _cfPasteboardReservedBase;
}

+ (id)referenceDescription:(CDStruct_8b65991f)arg1 withSourceNode:(CDStruct_599faf0f)arg2 destinationNode:(CDStruct_599faf0f)arg3 sortedVMRegions:(id)arg4 symbolicator:(struct _CSTypeRef)arg5 alignmentSpacing:(unsigned int)arg6;
+ (id)nodeDescription:(CDStruct_599faf0f)arg1 withNodeOffset:(unsigned long long)arg2 sortedVMRegions:(id)arg3;
+ (void)initialize;
@property(readonly, nonatomic) NSString *binaryImagesDescription; // @synthesize binaryImagesDescription=_binaryImagesDescription;
@property(readonly, nonatomic) NSString *processDescriptionString; // @synthesize processDescriptionString=_processDescriptionString;
@property(readonly, nonatomic) NSString *processName; // @synthesize processName=_processName;
@property(retain, nonatomic) DVT_VMUDebugTimer *debugTimer; // @synthesize debugTimer=_debugTimer;
@property(nonatomic) BOOL abandonedMarkingEnabled; // @synthesize abandonedMarkingEnabled=_abandonedMarkingEnabled;
@property(nonatomic) BOOL saveNodeLabelsInGraph; // @synthesize saveNodeLabelsInGraph=_saveNodeLabelsInGraph;
@property(nonatomic) unsigned int scanningMask; // @synthesize scanningMask=_scanningMask;
@property(readonly, nonatomic) unsigned int regionCount; // @synthesize regionCount=_regionsCount;
@property(readonly, nonatomic) unsigned int zoneCount; // @synthesize zoneCount=_zonesCount;
@property(readonly, nonatomic) unsigned int nodeCount; // @synthesize nodeCount=_blocksCount;
@property(nonatomic) BOOL exactScanningEnabled; // @synthesize exactScanningEnabled=_exactScanningEnabled;
@property(nonatomic) unsigned long long maxInteriorOffset; // @synthesize maxInteriorOffset=_maxInteriorOffset;
@property(readonly, nonatomic) DVT_VMUObjectIdentifier *objectIdentifier; // @synthesize objectIdentifier=_objectIdentifier;
@property(readonly, nonatomic) unsigned int task; // @synthesize task=_task;
@property(readonly, nonatomic) int pid; // @synthesize pid=_pid;
- (void).cxx_destruct;
- (id)referenceDescription:(CDStruct_8b65991f)arg1 withSourceNode:(unsigned int)arg2 destinationNode:(unsigned int)arg3 symbolicator:(struct _CSTypeRef)arg4 alignmentSpacing:(unsigned int)arg5;
- (id)nodeDescription:(unsigned int)arg1 withOffset:(unsigned long long)arg2;
- (id)nodeDescription:(unsigned int)arg1;
- (void)setReferenceScanningLogger:(CDUnknownBlockType)arg1;
- (void)setNodeScanningLogger:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) unsigned int nodeNamespaceSize;
@property(readonly, nonatomic) unsigned int vmPageSize;
- (void *)copyUserMarked;
- (unsigned int)enumerateReferencesWithBlock:(CDUnknownBlockType)arg1;
- (unsigned int)enumerateRegionsWithBlock:(CDUnknownBlockType)arg1;
- (unsigned int)enumerateMarkedObjects:(void *)arg1 withBlock:(CDUnknownBlockType)arg2;
- (unsigned int)enumerateObjectsWithBlock:(CDUnknownBlockType)arg1;
- (unsigned int)enumerateNodesWithBlock:(CDUnknownBlockType)arg1;
- (BOOL)validateAddressRange:(struct _VMURange)arg1;
- (id)classInfoForObjectAtAddress:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned int mallocNodeCount;
- (void *)contentForNode:(unsigned int)arg1;
- (id)labelForNode:(unsigned int)arg1;
- (BOOL)hasLabelsForNodes;
- (id)zoneNameForIndex:(unsigned int)arg1;
- (id)zoneNameForNode:(unsigned int)arg1;
- (id)vmuVMRegionForNode:(unsigned int)arg1;
- (id)vmuVMRegionForAddress:(unsigned long long)arg1;
- (CDStruct_599faf0f)nodeDetails:(unsigned int)arg1;
@property(readonly, nonatomic) DVT_VMUClassInfoMap *realizedClasses;
- (id)processSnapshotGraph;
- (id)processSnapshotGraphWithMallocStackLogs:(BOOL)arg1;
- (void)scanNodesForReferences:(CDUnknownBlockType)arg1;
- (void)removeRootReachableNodes;
- (void)markReachableNodesFromRoots:(void *)arg1 inMap:(void *)arg2;
- (unsigned int)_removeFalsePositiveLeakedVMregionsFromNodes:(unsigned int *)arg1 nodeCount:(unsigned int)arg2 recorder:(CDUnknownBlockType)arg3;
- (void)_orderedScanWithScanner:(CDUnknownBlockType)arg1 recorder:(CDUnknownBlockType)arg2 keepMapped:(_Bool)arg3 actions:(CDUnknownBlockType)arg4;
- (void)orderedNodeTraversal:(int)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)_withOrderedNodeMapper:(CDUnknownBlockType)arg1;
- (void)_withScanningContext:(CDUnknownBlockType)arg1;
- (void)_buildRegionPageBlockMaps;
- (void)refineTypesWithOverlay:(id)arg1;
- (void)_findMarkedAbandonedBlocks;
- (void)_fixupBlockIsas;
- (void)_sortAndClassifyBlocks;
- (void)addMallocNodes:(id)arg1;
- (void)addMallocNodesFromTask;
- (void)_sortBlocks;
- (void)addRootNodesFromTask;
- (void)_updateLinearClassInfos;
- (void)_destroyLinearClassInfos;
- (void)_callRemoteMallocEnumerators:(unsigned int)arg1 block:(CDUnknownBlockType)arg2;
- (void)_withMemoryReaderBlock:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (void)detachFromTask;
- (BOOL)_suspend;
- (id)initWithTask:(unsigned int)arg1;
- (id)initWithTask:(unsigned int)arg1 options:(unsigned long long)arg2;
- (id)initWithSelfTaskAndOptions:(unsigned long long)arg1;
- (id)_initWithTask:(unsigned int)arg1 options:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

