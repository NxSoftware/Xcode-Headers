//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <DVTKit/DVTLayoutView_ML.h>

#import <IDEInterfaceBuilderKit/NSAccessibilityGroup-Protocol.h>

@class DVTStackView_ML, NSString;
@protocol IBICDetailDocumentViewDelegate;

@interface IBICDetailDocumentView : DVTLayoutView_ML <NSAccessibilityGroup>
{
    DVTStackView_ML *_contentStackView;
    double _lastClipViewWidth;
    id <IBICDetailDocumentViewDelegate> _delegate;
}

+ (void)initialize;
@property __weak id <IBICDetailDocumentViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly) DVTStackView_ML *contentStackView; // @synthesize contentStackView=_contentStackView;
- (void).cxx_destruct;
- (id)accessibilityLabel;
- (void)keyDown:(id)arg1;
- (void)cancelOperation:(id)arg1;
- (void)insertText:(id)arg1;
- (void)deleteForward:(id)arg1;
- (void)deleteBackward:(id)arg1;
- (void)performDelete:(id)arg1;
- (BOOL)resignFirstResponder;
- (BOOL)becomeFirstResponder;
- (BOOL)acceptsFirstResponder;
- (void)rightMouseDown:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)beginTrackingMenuWithEvent:(id)arg1;
- (void)trackBandSelectionWithInitialMouseDown:(id)arg1 currentMouseEvent:(id)arg2;
- (void)trackBandSelectionWithInitialMouseDown:(id)arg1 currentMouseEvent:(id)arg2 initialSelection:(id)arg3;
- (void)layoutBottomUp;
- (void)didCompleteLayout;
- (void)layoutTopDown;
- (BOOL)isFlipped;
- (struct CGSize)scrollerSize;
- (struct CGSize)fullScrollViewSize;
- (id)beginObservingScrollView;
- (id)scrollView;
- (BOOL)isCenteringStyle;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

