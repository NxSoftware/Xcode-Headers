//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <DVTFoundation/DVTOperation.h>

@class IDESchemeActionRecord;

@interface IDESchemeActionResultOperation : DVTOperation
{
    BOOL _isObservingIsExecuting;
    BOOL _isFinished;
    BOOL _isExecuting;
    DVTOperation *_trackingOperation;
    IDESchemeActionRecord *_schemeActionRecord;
    CDUnknownBlockType _actionCallbackBlock;
    CDUnknownBlockType _schemeActionResultComputationBlock;
}

+ (id)schemeActionResultOperationWithSchemeActionRecord:(id)arg1 trackingExecutionOfOperation:(id)arg2 actionCallbackBlock:(CDUnknownBlockType)arg3 schemeActionResultComputationBlock:(CDUnknownBlockType)arg4;
@property(nonatomic) BOOL isExecuting; // @synthesize isExecuting=_isExecuting;
@property(nonatomic) BOOL isFinished; // @synthesize isFinished=_isFinished;
@property BOOL isObservingIsExecuting; // @synthesize isObservingIsExecuting=_isObservingIsExecuting;
@property(copy) CDUnknownBlockType schemeActionResultComputationBlock; // @synthesize schemeActionResultComputationBlock=_schemeActionResultComputationBlock;
@property(copy) CDUnknownBlockType actionCallbackBlock; // @synthesize actionCallbackBlock=_actionCallbackBlock;
@property(retain) IDESchemeActionRecord *schemeActionRecord; // @synthesize schemeActionRecord=_schemeActionRecord;
@property(retain) DVTOperation *trackingOperation; // @synthesize trackingOperation=_trackingOperation;
- (void).cxx_destruct;
- (void)_doCancellationCleanup;
- (void)main;
- (void)start;
- (BOOL)isConcurrent;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;

@end

