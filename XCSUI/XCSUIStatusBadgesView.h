//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSView.h>

#import <XCSUI/NSAccessibilityStaticText-Protocol.h>

@class NSArray, NSMutableArray, NSString, XCSUIStatusBadge;

@interface XCSUIStatusBadgesView : NSView <NSAccessibilityStaticText>
{
    NSMutableArray *_badgeViews;
    XCSUIStatusBadge *_errorsBadge;
    XCSUIStatusBadge *_warningsBadge;
    XCSUIStatusBadge *_issuesBadge;
    XCSUIStatusBadge *_testsBadge;
    NSArray *_badges;
}

@property(copy, nonatomic) NSArray *badges; // @synthesize badges=_badges;
- (void).cxx_destruct;
- (id)accessibilityValue;
- (void)refreshBadges;
- (void)placeBadges;
- (void)removeBadgeSubviews;
- (void)resetBadgeSelection:(id)arg1 ressetAll:(BOOL)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

