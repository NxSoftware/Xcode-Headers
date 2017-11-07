//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSTableCellView.h>

@class IDEFindNavigatorResultTextField;

@interface IDEFindNavigatorTableCellView : NSTableCellView
{
    IDEFindNavigatorResultTextField *_attributedTextField;
    CDUnknownBlockType _textReapplicator;
}

+ (struct _NSRange)summarizedRangeForText:(id)arg1 focusedOnRange:(struct _NSRange)arg2 tableCellWidth:(double)arg3 maxXPadding:(double)arg4 maxNumberOfLines:(long long)arg5 suggestedNumberOfLines:(long long *)arg6 showedHead:(char *)arg7 showedTail:(char *)arg8;
+ (void)summarizeText:(id)arg1 focusedOnRange:(struct _NSRange)arg2 tableCellWidth:(double)arg3 maxXPadding:(double)arg4 maxNumberOfLines:(long long)arg5 suggestedNumberOfLines:(long long *)arg6 manuallyTruncatedText:(char *)arg7;
+ (double)rowHeightForNumberOfLines:(long long)arg1;
+ (double)rowHeightForText:(id)arg1 focusedOnRange:(struct _NSRange)arg2 lineWrappingParameters:(id)arg3 indentionLevel:(long long)arg4 allowSummarization:(BOOL)arg5;
+ (long long)suggestedNumberOfLinesForText:(id)arg1 focusedOnRange:(struct _NSRange)arg2 lineWrappingParameters:(id)arg3 indentionLevel:(long long)arg4 allowSummarization:(BOOL)arg5;
+ (double)cellHeightForTextFieldHeight:(double)arg1;
+ (double)textFieldWidthForCellWidth:(double)arg1 maxXPadding:(double)arg2;
+ (id)mutableFullAttributedTextForText:(id)arg1 withContextualSuffix:(id)arg2 lineBreakMode:(unsigned long long)arg3 font:(id)arg4 focusedOnRange:(struct _NSRange)arg5 backgroundStyle:(long long)arg6 filterMatchStrings:(id)arg7;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)applyText:(id)arg1 withContextualSuffix:(id)arg2 focusedOnRange:(struct _NSRange)arg3 lineWrappingParameters:(id)arg4 indentionLevel:(long long)arg5 filterMatchStrings:(id)arg6 allowSummarization:(BOOL)arg7 suggestedHeight:(double *)arg8;
- (void)setBackgroundStyle:(long long)arg1;
- (BOOL)isFlipped;
- (id)initWithFrame:(struct CGRect)arg1;

@end

