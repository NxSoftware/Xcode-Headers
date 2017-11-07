//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEKit/DVTInvalidation-Protocol.h>

@class DVTStackBacktrace, IDEToybox, NSArray, NSError, NSMutableArray, NSString;

@interface IDEToy : NSObject <DVTInvalidation>
{
    NSMutableArray *_generationResults;
    BOOL _liveToy;
    BOOL _displayInTimeline;
    BOOL _executionIsInProgress;
    BOOL _lastExpressionDidComplete;
    BOOL _shouldTrackSuperviewWidth;
    IDEToybox *_toybox;
    unsigned long long _persistence;
    unsigned long long _generation;
    NSArray *_previousGenerationResults;
    unsigned long long _selectedRepresentationIndex;
    struct CGSize _lockedSize;
}

+ (void)initialize;
@property(nonatomic) BOOL shouldTrackSuperviewWidth; // @synthesize shouldTrackSuperviewWidth=_shouldTrackSuperviewWidth;
@property(nonatomic) unsigned long long selectedRepresentationIndex; // @synthesize selectedRepresentationIndex=_selectedRepresentationIndex;
@property(nonatomic) struct CGSize lockedSize; // @synthesize lockedSize=_lockedSize;
@property(retain) NSArray *previousGenerationResults; // @synthesize previousGenerationResults=_previousGenerationResults;
@property(readonly) NSArray *generationResults; // @synthesize generationResults=_generationResults;
@property(nonatomic) unsigned long long generation; // @synthesize generation=_generation;
@property BOOL lastExpressionDidComplete; // @synthesize lastExpressionDidComplete=_lastExpressionDidComplete;
@property BOOL executionIsInProgress; // @synthesize executionIsInProgress=_executionIsInProgress;
@property(readonly, getter=shouldDisplayInTimeline) BOOL displayInTimeline; // @synthesize displayInTimeline=_displayInTimeline;
@property(readonly, getter=isLiveToy) BOOL liveToy; // @synthesize liveToy=_liveToy;
@property unsigned long long persistence; // @synthesize persistence=_persistence;
@property(retain, nonatomic) IDEToybox *toybox; // @synthesize toybox=_toybox;
- (void).cxx_destruct;
- (void)primitiveInvalidate;
- (BOOL)liveToy;
@property(readonly) NSError *unarchivingError;
@property(readonly) BOOL supportsArchiving;
- (void)processPlaygroundResult:(id)arg1;
- (void)executionGenerationDidEndAndCompleted:(BOOL)arg1;
- (void)executionGenerationWillEnd;
- (void)beginExecutionGeneration:(unsigned long long)arg1;
- (id)init;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

