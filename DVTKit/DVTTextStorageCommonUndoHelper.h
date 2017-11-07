//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSUndoTextOperation;

@interface DVTTextStorageCommonUndoHelper : NSObject
{
    NSUndoTextOperation *_undoTextOperation;
    BOOL _isNonUserEdit;
    struct _NSRange _savedSelectedRange;
}

- (void).cxx_destruct;
- (void)restoreSelectedRange:(id)arg1;
- (void)saveSelectedRange:(id)arg1;
- (void)didUndoRedo:(id)arg1;
- (void)willUndoRedo:(id)arg1;
- (BOOL)isUserEdit;
- (id)initWithUndoTextOperation:(id)arg1 affectedRange:(struct _NSRange)arg2 layoutManager:(id)arg3 undoManager:(id)arg4 replacementRange:(struct _NSRange)arg5;

@end

