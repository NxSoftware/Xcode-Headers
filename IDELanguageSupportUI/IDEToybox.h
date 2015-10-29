//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "DVTInvalidation.h"

@class DVTNotificationToken, DVTStackBacktrace, IDEToy, NSArray, NSDate, NSMutableArray, NSMutableDictionary, NSString;

@interface IDEToybox : NSObject <DVTInvalidation>
{
    NSMutableArray *_toys;
    NSMutableDictionary *_toysRegisteredForAllResultSubjectsByChannel;
    NSMutableDictionary *_toysRegisteredForResultSubjectsByChannel;
    NSMutableDictionary *_currentResultsBySubjectByChannel;
    NSDate *_incomingEarliestResultDate;
    NSDate *_incomingLatestResultDate;
    unsigned long long _currentExecutionGeneration;
    BOOL _didClearAllRegisteredToys;
    DVTNotificationToken *_playgroundDidHighlightToyNotificationToken;
    DVTNotificationToken *_playgroundDidSelectToyNotificationToken;
    BOOL _includesLiveToy;
    BOOL _liveViewRecordingEnabled;
    BOOL _executionIsInProgress;
    BOOL _isReplayingSerializedResults;
    BOOL _lastExpressionDidComplete;
    id <IDEToyboxDelegate> _delegate;
    IDEToy *_highlightedToy;
    IDEToy *_selectedToy;
    NSDate *_resultDisplayDate;
    NSDate *_dateOfEarliestResultForCurrentExecutionGeneration;
    NSDate *_dateOfLatestResultForCurrentExecutionGeneration;
}

+ (id)toyboxFromFilePath:(id)arg1 delegate:(id)arg2 error:(id *)arg3;
+ (void)initialize;
@property BOOL lastExpressionDidComplete; // @synthesize lastExpressionDidComplete=_lastExpressionDidComplete;
@property BOOL isReplayingSerializedResults; // @synthesize isReplayingSerializedResults=_isReplayingSerializedResults;
@property BOOL executionIsInProgress; // @synthesize executionIsInProgress=_executionIsInProgress;
@property(copy) NSDate *dateOfLatestResultForCurrentExecutionGeneration; // @synthesize dateOfLatestResultForCurrentExecutionGeneration=_dateOfLatestResultForCurrentExecutionGeneration;
@property(copy) NSDate *dateOfEarliestResultForCurrentExecutionGeneration; // @synthesize dateOfEarliestResultForCurrentExecutionGeneration=_dateOfEarliestResultForCurrentExecutionGeneration;
@property(copy) NSDate *resultDisplayDate; // @synthesize resultDisplayDate=_resultDisplayDate;
@property(getter=isLiveViewRecordingEnabled) BOOL liveViewRecordingEnabled; // @synthesize liveViewRecordingEnabled=_liveViewRecordingEnabled;
@property(readonly) BOOL includesLiveToy; // @synthesize includesLiveToy=_includesLiveToy;
@property __weak IDEToy *selectedToy; // @synthesize selectedToy=_selectedToy;
@property __weak IDEToy *highlightedToy; // @synthesize highlightedToy=_highlightedToy;
@property(readonly) id <IDEToyboxDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)addTimelineItems:(id)arg1 fromXMLUnarchiver:(id)arg2;
- (void)dvt_encodeRelationshipsWithXMLArchiver:(id)arg1 version:(id)arg2;
- (void)dvt_encodeAttributesWithXMLArchiver:(id)arg1 version:(id)arg2;
- (void)dvt_awakeFromXMLUnarchiver:(id)arg1;
- (id)xmlData;
@property(readonly) BOOL hasArchivableData;
- (void)primitiveInvalidate;
- (void)unregisterToy:(id)arg1 forResultsForChannelIdentifier:(id)arg2 subjectIdentifier:(id)arg3;
- (id)registerToy:(id)arg1 forResultsForChannelIdentifier:(id)arg2 subjectIdentifier:(id)arg3;
- (id)toysWithChannelIdentifier:(id)arg1 subjectIdentifier:(id)arg2 createIfNeeded:(BOOL)arg3 toyCreationBlock:(CDUnknownBlockType)arg4;
@property(readonly) unsigned long long currentExecutionGeneration;
- (id)currentResultsForChannelIdentifier:(id)arg1 subjectIdentifier:(id)arg2;
- (void)removeToy:(id)arg1;
- (void)addToy:(id)arg1;
- (void)processPlaygroundResult:(id)arg1 createIfNeeded:(BOOL)arg2 toyCreationBlock:(CDUnknownBlockType)arg3;
- (void)executionGenerationDidEndAndCompleted:(BOOL)arg1;
- (void)executionGenerationWillEnd;
- (void)beginExecutionGeneration:(unsigned long long)arg1 isReplayingSerializedResults:(BOOL)arg2;
- (void)registerToyNotifications;
- (id)initWithDelegate:(id)arg1;
- (id)init;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly, copy) NSMutableArray *mutableToys; // @dynamic mutableToys;
@property(readonly) Class superclass;
@property(copy) NSArray *toys; // @dynamic toys;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

