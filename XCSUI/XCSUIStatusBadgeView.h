//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class CAShapeLayer, CATextLayer, XCSUIStatusBadge, XCSUIStatusBadgesView;

@interface XCSUIStatusBadgeView : NSView
{
    BOOL _setupDone;
    CAShapeLayer *_badgeCircleLayer;
    CATextLayer *_badgeCountTextLayer;
    CATextLayer *_secondaryBadgeCountTextLayer;
    CATextLayer *_badgeLabelTextLayer;
    CATextLayer *_newIssuesTextLayer;
    XCSUIStatusBadge *_badge;
    XCSUIStatusBadgesView *_hostBadgeView;
}

@property __weak XCSUIStatusBadgesView *hostBadgeView; // @synthesize hostBadgeView=_hostBadgeView;
@property(retain) XCSUIStatusBadge *badge; // @synthesize badge=_badge;
- (void).cxx_destruct;
- (BOOL)wantsUpdateLayer;
- (void)runOpacityAnimation:(id)arg1;
- (void)updateLayer;
- (id)defaultBadgeCountTextColor;
- (void)reset;
- (void)viewDidChangeBackingProperties;
- (void)reconfigureBadge;
- (id)initWithFrame:(struct CGRect)arg1;

@end

