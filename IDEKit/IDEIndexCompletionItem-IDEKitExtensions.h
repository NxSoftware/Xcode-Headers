//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <IDEFoundation/IDEIndexCompletionItem.h>

#import <IDEKit/DVTTextCompletionItem-Protocol.h>

@class NSArray, NSAttributedString, NSImage, NSString;

@interface IDEIndexCompletionItem (IDEKitExtensions) <DVTTextCompletionItem>
@property(readonly) unsigned long long priorityComparatorKind;
@property(readonly) long long priorityBucket;
- (void)infoViewControllerWithWidth:(double)arg1 context:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
@property(readonly) NSImage *icon;

// Remaining properties
@property(readonly, copy) NSString *action;
@property(readonly, copy) NSArray *additionalCompletions;
@property(readonly) int completionItemStyle;
@property(readonly, copy) NSString *completionText;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, copy) NSAttributedString *descriptionText;
@property(readonly, copy) NSString *displayText;
@property(readonly, copy) NSString *displayType;
@property double fuzzyMatchingScore;
@property(readonly) unsigned long long hash;
@property(readonly) NSImage *highlightedStatusIcon;
@property(readonly, copy) NSString *name;
@property(readonly) BOOL notRecommended;
@property(readonly, copy) NSString *parentText;
@property double priority;
@property(readonly) NSImage *statusIcon;
@property(readonly) Class superclass;
@end

