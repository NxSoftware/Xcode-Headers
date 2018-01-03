//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTKit/DVTStringTextCompletionItem.h>

#import <IDESourceEditor/DVTTextCompletionItem-Protocol.h>

@class DVTFilePath, NSArray, NSAttributedString, NSImage, NSString;

@interface IDEFilePathTextCompletionItem : DVTStringTextCompletionItem <DVTTextCompletionItem>
{
    DVTFilePath *_filePath;
}

@property(copy) DVTFilePath *filePath; // @synthesize filePath=_filePath;
- (void).cxx_destruct;
@property(readonly) NSImage *icon;
- (id)initWithName:(id)arg1 filePath:(id)arg2;

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
@property(readonly) long long priorityBucket;
@property(readonly) unsigned long long priorityComparatorKind;
@property(readonly) NSImage *statusIcon;
@property(readonly) Class superclass;

@end

