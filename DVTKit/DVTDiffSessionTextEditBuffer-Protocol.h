//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <DVTKit/NSObject-Protocol.h>

@class NSAttributedString, NSString, NSUndoManager;

@protocol DVTDiffSessionTextEditBuffer <NSObject>
@property(readonly, copy) NSString *string;
- (void)setAttributedString:(NSAttributedString *)arg1;
- (void)replaceCharactersInRange:(struct _NSRange)arg1 withString:(NSString *)arg2 withUndoManager:(NSUndoManager *)arg3;
- (void)replaceCharactersInRange:(struct _NSRange)arg1 withString:(NSString *)arg2;
- (void)endEditing;
- (void)beginEditing;
@end

