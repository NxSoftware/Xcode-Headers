//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <SymbolicationDT/DVT_VMUCallTreeNode.h>

@class DVT_VMUSampler, NSArray, NSMapTable, NSMutableSet, NSString;
@protocol VMUStackLogReader;

@interface DVT_VMUCallTreeRoot : DVT_VMUCallTreeNode
{
    struct _CSTypeRef _symbolicator;
    id <VMUStackLogReader> _stackLogReader;
    DVT_VMUSampler *_sampler;
    unsigned long long _options;
    NSMutableSet *_uniqueNodeNames;
    NSMapTable *_addressToSymbolNameMap;
    NSMapTable *_addressToLeafSymbolNameMap;
    NSMapTable *_threadPortToNameMap;
    NSString *_binaryImagesDescription;
    NSArray *_binaryImages;
}

- (void).cxx_destruct;
- (id)chargeSystemLibrariesToCallersAndKeepBoundaries:(BOOL)arg1;
- (id)initWithCallGraphFile:(id)arg1 fileHeader:(id *)arg2 topFunctionsList:(id *)arg3 binaryImagesList:(id *)arg4;
- (id)addUniqueChildWithName:(id)arg1 address:(unsigned long long)arg2 count:(unsigned int)arg3 numBytes:(unsigned long long)arg4 toNode:(id)arg5;
- (id)addChildWithName:(id)arg1 address:(unsigned long long)arg2 count:(unsigned int)arg3 numBytes:(unsigned long long)arg4 toNode:(id)arg5;
- (id)addBacktrace:(id)arg1;
- (id)addBacktrace:(id)arg1 count:(unsigned int)arg2 numBytes:(unsigned long long)arg3;
- (id)descriptionStringForAddress:(unsigned long long)arg1 atTime:(unsigned long long)arg2 leafFrame:(BOOL)arg3 startOfRecursion:(BOOL)arg4;
- (void)dealloc;
- (void)allBacktracesHaveBeenAdded;
- (void)setStackLogReader:(id)arg1;
- (id)initWithSymbolicator:(struct _CSTypeRef)arg1 sampler:(id)arg2 options:(unsigned long long)arg3;

@end

