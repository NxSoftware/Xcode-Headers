//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <DVTKit/DVTStackView_ML.h>

#import <IDEKit/IDEToyHostingView-Protocol.h>
#import <IDEKit/IDEToyViewControllerDelegate-Protocol.h>

@class NSColor, NSString, NSTrackingArea;

@interface IDEToyHostingView_timeline : DVTStackView_ML <IDEToyHostingView, IDEToyViewControllerDelegate>
{
    NSTrackingArea *_trackingArea;
    BOOL _toyIsSelected;
    BOOL _toyIsHighlighted;
    BOOL _hasRoundedCorners;
    CDUnknownBlockType _mouseTrackingHandler;
    CDUnknownBlockType _mouseDownHandler;
    CDUnknownBlockType _rightMouseDownHandler;
    NSColor *_backgroundColor;
    NSColor *_selectedBorderColor;
    NSColor *_customLeftBorderColor;
    NSColor *_customRightBorderColor;
}

@property(retain) NSColor *customRightBorderColor; // @synthesize customRightBorderColor=_customRightBorderColor;
@property(retain) NSColor *customLeftBorderColor; // @synthesize customLeftBorderColor=_customLeftBorderColor;
@property(nonatomic) BOOL hasRoundedCorners; // @synthesize hasRoundedCorners=_hasRoundedCorners;
@property(retain, nonatomic) NSColor *selectedBorderColor; // @synthesize selectedBorderColor=_selectedBorderColor;
@property(retain, nonatomic) NSColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(copy) CDUnknownBlockType rightMouseDownHandler; // @synthesize rightMouseDownHandler=_rightMouseDownHandler;
@property(copy) CDUnknownBlockType mouseDownHandler; // @synthesize mouseDownHandler=_mouseDownHandler;
@property(copy) CDUnknownBlockType mouseTrackingHandler; // @synthesize mouseTrackingHandler=_mouseTrackingHandler;
@property(nonatomic) BOOL toyIsHighlighted; // @synthesize toyIsHighlighted=_toyIsHighlighted;
@property(nonatomic) BOOL toyIsSelected; // @synthesize toyIsSelected=_toyIsSelected;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (void)updateTrackingAreas;
- (void)rightMouseDown:(id)arg1;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

