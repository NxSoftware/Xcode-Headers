//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTKit/DVTTableCellView.h>

@class NSLayoutConstraint;

@interface DVTTableCellViewMultiLine : DVTTableCellView
{
    double _calculatedMaxTitleHeight;
    double _calculatedMaxSubtitleHeight;
    unsigned long long _maxNumberOfTitleLines;
    unsigned long long _maxNumberOfSubtitleLines;
    NSLayoutConstraint *_titleTextFieldHeightConstraint;
    NSLayoutConstraint *_subtitleTextFieldHeightConstraint;
    NSLayoutConstraint *_imageToTopOfTitleTextFieldConstraint;
}

+ (double)_textFieldHeightGivenRowCount:(unsigned long long)arg1 font:(id)arg2;
@property __weak NSLayoutConstraint *imageToTopOfTitleTextFieldConstraint; // @synthesize imageToTopOfTitleTextFieldConstraint=_imageToTopOfTitleTextFieldConstraint;
@property __weak NSLayoutConstraint *subtitleTextFieldHeightConstraint; // @synthesize subtitleTextFieldHeightConstraint=_subtitleTextFieldHeightConstraint;
@property __weak NSLayoutConstraint *titleTextFieldHeightConstraint; // @synthesize titleTextFieldHeightConstraint=_titleTextFieldHeightConstraint;
@property(nonatomic) unsigned long long maxNumberOfSubtitleLines; // @synthesize maxNumberOfSubtitleLines=_maxNumberOfSubtitleLines;
@property(nonatomic) unsigned long long maxNumberOfTitleLines; // @synthesize maxNumberOfTitleLines=_maxNumberOfTitleLines;
- (void).cxx_destruct;
- (void)setTitleStyle:(unsigned long long)arg1;
- (void)setFilterMatchString:(id)arg1;
- (void)setFilterMatchStrings:(id)arg1;
- (void)setTitleFilterMatchRange:(struct _NSRange)arg1;
- (struct _NSRange)titleFilterMatchRange;
- (id)subtitleTextFieldFont;
- (double)subtitleTextFieldLineHeight;
- (void)_rowSizeStyleDidChange;
- (void)_refreshTextFieldFonts;
- (void)_updateSubtitleTextFieldHeightConstraint;
- (void)_updateCachedMaxSubtitleHeight;
- (void)setSubtitle:(id)arg1;
- (id)titleTextFieldFont;
- (double)titleTextFieldLineHeight;
- (double)subtitleTextFieldHeight;
- (double)titleTextFieldHeight;
- (void)_updateTitleTextFieldHeightConstraint;
- (void)_updateCachedMaxTitleHeight;
- (void)setTitle:(id)arg1;
@property struct _NSRange titleRangeToEnsureIsVisible;
@property BOOL titleShouldReplaceNewlinesWithVisibleCharacter;
- (void)awakeFromNib;

@end

