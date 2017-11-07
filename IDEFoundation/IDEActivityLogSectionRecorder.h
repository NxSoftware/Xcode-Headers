//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IDEActivityLogSection, NSMapTable, NSMutableArray, NSMutableDictionary, NSPointerArray;

@interface IDEActivityLogSectionRecorder : NSObject
{
    NSPointerArray *_parentRecorders;
    NSMutableArray *_childRecorders;
    IDEActivityLogSection *_section;
    NSMutableArray *_observations;
    NSMutableArray *_changesToPost;
    BOOL _hasScheduledChangePosting;
    NSMapTable *_rememberedMessagesByKey;
    struct _NSRange _mostRecentTextRange;
    CDUnknownBlockType _completionBlock;
    NSMutableDictionary *_severityToLimitTable;
    NSMutableDictionary *_severityToCountTable;
    struct os_unfair_lock_s _lock;
    BOOL _hasAddedAnyErrorMessages;
    // Error parsing type: AB, name: _hasRequestedStop
}

@property BOOL hasAddedAnyErrorMessages; // @synthesize hasAddedAnyErrorMessages=_hasAddedAnyErrorMessages;
- (void).cxx_destruct;
- (id)addObserverUsingBlock:(CDUnknownBlockType)arg1;
- (void)setCommandDetailDescription:(id)arg1;
- (void)addContextInfoMessageWithTitle:(id)arg1;
- (void)addAnalyzerResultStepMessageWithTitle:(id)arg1;
- (void)addAnalyzerResultMessageWithTitle:(id)arg1;
- (void)addNoticeMessageWithTitle:(id)arg1;
- (void)addWarningMessageWithTitle:(id)arg1;
- (void)addErrorMessageWithTitle:(id)arg1;
- (void)addTestFailureMessageWithTitle:(id)arg1;
- (void)stopRecordingWithInfo:(id)arg1;
- (void)stopRecordingWithInfo:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)_stopRecordingWithInfo:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (BOOL)hasRequestedStopRecording;
- (void)childRecorderDidStopRecording:(id)arg1;
- (void)addSubmessage:(id)arg1 toMessage:(id)arg2;
- (void)addMessage:(id)arg1 ignoreMessageLimit:(BOOL)arg2;
- (void)addMessage:(id)arg1;
- (struct _NSRange)mostRecentlyAppendedTextRange;
- (struct _NSRange)appendTextUTF8Bytes:(const char *)arg1 length:(unsigned long long)arg2;
- (struct _NSRange)appendTextFormat:(id)arg1;
- (struct _NSRange)appendText:(id)arg1;
- (void)addSubsection:(id)arg1;
- (BOOL)_attachToParentRecorderIfStillRecording:(id)arg1;
- (BOOL)hasReachedAllMessageLimits;
- (BOOL)hasReachedMessageLimitForSeverity:(unsigned long long)arg1;
- (void)setMessageLimit:(unsigned long long)arg1 forSeverity:(unsigned long long)arg2;
- (unsigned long long)messageLimitForSeverity:(unsigned long long)arg1;
- (void)setLocalizedResultString:(id)arg1;
- (void)setWasFetchedFromCache:(BOOL)arg1;
- (void)setIsQuiet:(BOOL)arg1;
- (id)addUnitTestSectionWithTitle:(id)arg1 location:(id)arg2;
- (id)addCommandSectionWithTitle:(id)arg1 detailDescription:(id)arg2;
- (id)addCommandSectionWithDomainType:(id)arg1 title:(id)arg2 detailDescription:(id)arg3;
- (void)noteDescendantLogSectionDidClose:(id)arg1 inSupersection:(id)arg2;
- (void)noteDescendantLogSection:(id)arg1 didAppendText:(id)arg2;
- (void)noteDescendantLogSection:(id)arg1 didAddSubsection:(id)arg2;
- (void)handleChangeEvent:(id)arg1;
- (void)setRememberedMessage:(id)arg1 forKey:(id)arg2;
- (id)rememberedMessageForKey:(id)arg1;
- (void)addCompletionBlock:(CDUnknownBlockType)arg1;
- (id)section;
- (void)_performOrderedAsyncBlock:(CDUnknownBlockType)arg1;
- (id)initWithLogSection:(id)arg1;

@end

