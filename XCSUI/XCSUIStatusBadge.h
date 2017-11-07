//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSColor, NSImage, NSString, XCSUIStatusBadgeView;

@interface XCSUIStatusBadge : NSObject
{
    BOOL _showNewIssuesResolvedIssuesDifferencesCount;
    NSString *_badgeLabel;
    NSImage *_badgeIcon;
    double _preferredFontSize;
    unsigned long long _badgeCount;
    NSString *_badgeUnit;
    unsigned long long _secondaryBadgeCount;
    NSColor *_badgeColor;
    long long _countOfNewlyIntroducedPassingTests;
    long long _countOfNewIssues;
    long long _countOfResolvedIssues;
    XCSUIStatusBadgeView *_badgeView;
}

@property __weak XCSUIStatusBadgeView *badgeView; // @synthesize badgeView=_badgeView;
@property long long countOfResolvedIssues; // @synthesize countOfResolvedIssues=_countOfResolvedIssues;
@property long long countOfNewIssues; // @synthesize countOfNewIssues=_countOfNewIssues;
@property long long countOfNewlyIntroducedPassingTests; // @synthesize countOfNewlyIntroducedPassingTests=_countOfNewlyIntroducedPassingTests;
@property BOOL showNewIssuesResolvedIssuesDifferencesCount; // @synthesize showNewIssuesResolvedIssuesDifferencesCount=_showNewIssuesResolvedIssuesDifferencesCount;
@property(copy) NSColor *badgeColor; // @synthesize badgeColor=_badgeColor;
@property unsigned long long secondaryBadgeCount; // @synthesize secondaryBadgeCount=_secondaryBadgeCount;
@property(copy) NSString *badgeUnit; // @synthesize badgeUnit=_badgeUnit;
@property unsigned long long badgeCount; // @synthesize badgeCount=_badgeCount;
@property double preferredFontSize; // @synthesize preferredFontSize=_preferredFontSize;
@property(copy) NSImage *badgeIcon; // @synthesize badgeIcon=_badgeIcon;
@property(copy) NSString *badgeLabel; // @synthesize badgeLabel=_badgeLabel;
- (void).cxx_destruct;

@end

