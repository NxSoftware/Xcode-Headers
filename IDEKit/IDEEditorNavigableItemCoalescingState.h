//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IDEEditorHistoryItem, NSNotification;

@interface IDEEditorNavigableItemCoalescingState : NSObject
{
    BOOL _isRespondingToDidForget;
    NSNotification *_willCloseDocumentNotification;
    IDEEditorHistoryItem *_preCoalescingHistoryItem;
}

@property BOOL isRespondingToDidForget; // @synthesize isRespondingToDidForget=_isRespondingToDidForget;
@property(retain) IDEEditorHistoryItem *preCoalescingHistoryItem; // @synthesize preCoalescingHistoryItem=_preCoalescingHistoryItem;
@property(retain) NSNotification *willCloseDocumentNotification; // @synthesize willCloseDocumentNotification=_willCloseDocumentNotification;
- (void).cxx_destruct;

@end

