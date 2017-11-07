//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <DVTKit/DVTLayoutView_ML.h>

#import <IDEInterfaceBuilderKit/IBConnectionPredecessorViewDelegate-Protocol.h>

@class DVTStackView_ML, IBConnectionInterfaceStyle, IBImageButton, NSMutableArray, NSString, NSTextField, NSView, NSWindow;
@protocol IBConnectionPrototypeViewDelegate;

@interface IBConnectionPrototypeView : DVTLayoutView_ML <IBConnectionPredecessorViewDelegate>
{
    IBImageButton *_connectionWell;
    DVTStackView_ML *_predecessorStack;
    NSMutableArray *_predecessorViews;
    id _mouseObserveringToken;
    NSView *_hoverTarget;
    struct CGRect _hoverTargetRect;
    NSWindow *_observedWindow;
    BOOL _allowsNewConnections;
    double _titleWidthPercentage;
    id _representedObject;
    NSString *_warningMessage;
    id <IBConnectionPrototypeViewDelegate> _delegate;
    NSTextField *_titleField;
    IBConnectionInterfaceStyle *_connectionInterfaceStyle;
}

+ (id)defaultTitleFieldWithInterfaceStyle:(id)arg1;
@property(retain) IBConnectionInterfaceStyle *connectionInterfaceStyle; // @synthesize connectionInterfaceStyle=_connectionInterfaceStyle;
@property(readonly, nonatomic) NSTextField *titleField; // @synthesize titleField=_titleField;
@property(nonatomic) __weak id <IBConnectionPrototypeViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *warningMessage; // @synthesize warningMessage=_warningMessage;
@property(nonatomic) BOOL allowsNewConnections; // @synthesize allowsNewConnections=_allowsNewConnections;
@property(retain) id representedObject; // @synthesize representedObject=_representedObject;
@property(nonatomic) double titleWidthPercentage; // @synthesize titleWidthPercentage=_titleWidthPercentage;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (id)effectiveLinkBubbleStrokeColor;
- (id)effectiveLinkBubbleFillColor;
- (id)rolledOverLinkBubbleFillColor;
- (id)bubblePath;
- (void)updateTitleFieldAccessibility;
- (void)updateConnectionWellImages;
- (void)connectionWellDragged:(id)arg1;
- (void)viewWillMoveToWindow:(id)arg1;
- (void)windowWillClose:(id)arg1;
- (void)conditionallyRegisterForMouseMovedEventsWithWindow:(id)arg1;
- (void)mouseMoved:(struct CGPoint)arg1 buttonStates:(unsigned long long)arg2;
- (void)connectionPredecessorViewHandleDisconnect:(id)arg1;
- (void)layoutBottomUp;
- (void)layoutTopDown;
- (struct CGRect)titleFieldFrameForBounds:(struct CGRect)arg1;
- (struct CGRect)connectionWellFrame;
- (struct CGRect)connectionWellFrameForBounds:(struct CGRect)arg1;
- (struct CGRect)predecessorBubbleRectForBounds:(struct CGRect)arg1;
- (struct CGRect)titleBubbleRectForBounds:(struct CGRect)arg1;
- (double)predecessorBubbleWidthForBounds:(struct CGRect)arg1;
- (double)titleBubbleWidthForBounds:(struct CGRect)arg1;
- (double)bubbleRadius;
- (double)bubbleBottomInset;
- (double)bubbleRightInset;
- (double)bubbleCenterPadding;
- (double)bubbleLeftInset;
- (double)titleBubbleHeight;
- (BOOL)isFlipped;
- (void)setWindowToObserveForClosing:(id)arg1;
- (void)setHoverTarget:(id)arg1;
- (void)pushHoverTargetRect;
- (void)setHoverTargetRect:(struct CGRect)arg1;
- (void)setPredecessorDisplayValues:(id)arg1 representedObjects:(id)arg2 andEnabledStates:(id)arg3;
- (id)predecessorDisplayValues;
@property(copy) NSString *title;
- (id)initWithFrame:(struct CGRect)arg1 andInterfaceStyle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

