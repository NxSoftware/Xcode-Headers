//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <DTGraphKit/DTMemoryGraphItem.h>

@class IDEThread, NSArray, NSString;

@interface DTMemoryGraphItem (InspectorSupport)
- (void)_generateBacktraceWithHandler:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) NSString *backtraceErrorMessage;
@property(readonly, nonatomic) IDEThread *threadWithBacktrace;
@property(readonly, nonatomic) NSArray *classHierarchy;
@property(readonly, nonatomic) NSString *regionDescription;
@property(readonly, nonatomic) NSString *classHierarchyDescription;
- (id)addressRangeDescription;
@property(readonly, nonatomic) NSString *instanceSizeDescription;
@property(readonly, nonatomic) NSString *addressDescription;
@property(readonly, nonatomic) NSString *mallocZoneNameDescription;
@property(readonly, nonatomic) NSString *typeKindDescription;
@property(readonly, nonatomic) NSString *typeNameDescription;
@property(readonly, nonatomic) BOOL isMallocBlock;
@property(readonly, nonatomic) BOOL isVMRegion;
- (id)ideModelObjectTypeIdentifier;
@end

