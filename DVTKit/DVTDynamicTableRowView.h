//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <DVTKit/DVTBorderedView.h>

#import <DVTKit/DVTDynamicTableRowViewSupport-Protocol.h>
#import <DVTKit/DVTInvalidation-Protocol.h>

@class DVTComparisonSplitView, DVTStackBacktrace, NSObject, NSString, NSView, NSViewAnimation;
@protocol OS_dispatch_queue;

@interface DVTDynamicTableRowView : DVTBorderedView <DVTDynamicTableRowViewSupport, DVTInvalidation>
{
    DVTComparisonSplitView *_splitView;
    NSView *_leftContentView;
    NSView *_rightContentView;
    NSViewAnimation *_viewAnimation;
    BOOL _removed;
    CDUnknownBlockType _populationBlock;
    NSObject<OS_dispatch_queue> *_popQ;
}

+ (unsigned long long)assertionBehaviorAfterEndOfEventForSelector:(SEL)arg1;
+ (BOOL)supportsInvalidationPrevention;
+ (void)initialize;
+ (id)dynamicTableRowViewUsingSplitViewStyle:(int)arg1;
+ (id)keyPathsForValuesAffectingSelected;
@property(retain) NSObject<OS_dispatch_queue> *popQ; // @synthesize popQ=_popQ;
@property(copy) CDUnknownBlockType populationBlock; // @synthesize populationBlock=_populationBlock;
@property(getter=isRemoved) BOOL removed; // @synthesize removed=_removed;
@property(retain) NSViewAnimation *viewAnimation; // @synthesize viewAnimation=_viewAnimation;
@property(retain) NSView *rightContentView; // @synthesize rightContentView=_rightContentView;
@property(retain) NSView *leftContentView; // @synthesize leftContentView=_leftContentView;
@property(retain) DVTComparisonSplitView *splitView; // @synthesize splitView=_splitView;
- (void).cxx_destruct;
- (void)populateLeftContentSubview:(id)arg1 rightContentSubview:(id)arg2 withAnimation:(BOOL)arg3;
- (void)viewWillMoveToSuperview:(id)arg1;
- (void)showPlaceholderWithPopulationBlock:(CDUnknownBlockType)arg1 usingQueue:(id)arg2;
- (void)primitiveInvalidate;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

