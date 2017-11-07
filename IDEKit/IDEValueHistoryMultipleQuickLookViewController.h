//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <IDEKit/IDEValueHistoryToyViewController.h>

@class DVTStackView_ML, NSMutableArray, NSScrollView;

@interface IDEValueHistoryMultipleQuickLookViewController : IDEValueHistoryToyViewController
{
    BOOL _playgroundIsExecuting;
    BOOL _playgroundDidCompleteLastExecution;
    NSMutableArray *_quickLookViewControllers;
    struct CGSize _cachedPreferredSize;
    NSScrollView *_scrollView;
    DVTStackView_ML *_documentView;
    DVTStackView_ML *_stackView;
}

+ (id)displayableReflectionTags;
@property(retain) DVTStackView_ML *stackView; // @synthesize stackView=_stackView;
@property(retain) DVTStackView_ML *documentView; // @synthesize documentView=_documentView;
@property(retain) NSScrollView *scrollView; // @synthesize scrollView=_scrollView;
- (void).cxx_destruct;
- (void)renderResultsForceRedraw:(BOOL)arg1;
- (void)playgroundExecutionEndedAndCompleted:(BOOL)arg1;
- (void)playgroundExecutionStarted;
- (id)toolTip;
- (struct CGSize)preferredContentSizeConstrainedToSize:(struct CGSize)arg1;
- (unsigned long long)representationType;
- (void)viewDidLoad;

@end
