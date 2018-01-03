//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEInterfaceBuilderKit/DVTInvalidation-Protocol.h>

@class DVTStackBacktrace, IBDecodedPasteboardContent, IBStoryboardDocument, IBXIBDocument, NSArray, NSMutableArray, NSString;

@interface IBStoryboardSceneAbstractCompilationUnit : NSObject <DVTInvalidation>
{
    NSMutableArray *_downstreamPlaceholderTables;
    IBDecodedPasteboardContent *_content;
    id _localUnitLeader;
    IBStoryboardDocument *_storyboard;
    long long _compilationPhase;
}

+ (void)initialize;
+ (id)counterpartForObject:(id)arg1 sourceDocument:(id)arg2 destinationDocument:(id)arg3 sourceToDestinationObjectIDMap:(id)arg4;
@property(readonly) long long compilationPhase; // @synthesize compilationPhase=_compilationPhase;
@property(readonly) NSArray *downstreamPlaceholderTables; // @synthesize downstreamPlaceholderTables=_downstreamPlaceholderTables;
@property(readonly) IBStoryboardDocument *storyboard; // @synthesize storyboard=_storyboard;
@property(readonly) id localUnitLeader; // @synthesize localUnitLeader=_localUnitLeader;
- (void).cxx_destruct;
- (void)capturePlaceholderTableFromChildCompilationUnit:(id)arg1;
- (id)compilationResultWithCompiledPackage:(id)arg1;
- (CDUnknownBlockType)stringsFileKeyGenerator;
- (BOOL)isDescendantOfCompilationUnit:(id)arg1;
- (id)storyboardCounterpartForMember:(id)arg1;
- (id)storyboardMemberIDForLocalMember:(id)arg1;
- (id)storyboardMemberIDForLocalMemberID:(id)arg1;
- (BOOL)upstreamCounterpartsStillExist;
- (id)localObjectForSegueTemplate:(id)arg1;
- (void)addFilesOwnerOutletToUnitLeader:(id)arg1;
@property(readonly) IBXIBDocument *localDocument;
- (void)moveToPhase:(long long)arg1;
- (id)upstreamObjectIDToLocalObjectIDMap;
- (id)localObjectIDToUpstreamObjectIDMap;
- (void)addDownstreamPlaceholderTable:(id)arg1;
- (void)primitiveInvalidate;
- (id)initWithLeader:(id)arg1 content:(id)arg2 storyboard:(id)arg3 initialPhase:(long long)arg4;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

