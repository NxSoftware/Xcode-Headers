//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEKit/DVTTextCompletionItem-Protocol.h>

@class NSArray, NSAttributedString, NSImage, NSString;

@interface IDEMediaResourceCompletionItem : NSObject <DVTTextCompletionItem>
{
    NSImage *_cachedIcon;
    NSString *name;
    NSString *displayText;
    NSString *displayType;
    NSString *completionText;
    NSAttributedString *descriptionText;
    CDUnknownBlockType iconProvidingMainThreadBlock;
    double priority;
    double fuzzyMatchingScore;
}

@property double fuzzyMatchingScore; // @synthesize fuzzyMatchingScore;
@property double priority; // @synthesize priority;
@property(copy) CDUnknownBlockType iconProvidingMainThreadBlock; // @synthesize iconProvidingMainThreadBlock;
@property(copy) NSAttributedString *descriptionText; // @synthesize descriptionText;
@property(copy) NSString *completionText; // @synthesize completionText;
@property(copy) NSString *displayType; // @synthesize displayType;
@property(copy) NSString *displayText; // @synthesize displayText;
@property(copy) NSString *name; // @synthesize name;
- (void).cxx_destruct;
@property(readonly) BOOL notRecommended;
@property(readonly) unsigned long long priorityComparatorKind;
@property(readonly) long long priorityBucket;
@property(retain) NSImage *icon; // @synthesize icon=_cachedIcon;
@property(readonly, copy) NSString *parentText;

// Remaining properties
@property(readonly, copy) NSString *action;
@property(readonly, copy) NSArray *additionalCompletions;
@property(readonly) int completionItemStyle;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) NSImage *highlightedStatusIcon;
@property(readonly) NSImage *statusIcon;
@property(readonly) Class superclass;

@end

