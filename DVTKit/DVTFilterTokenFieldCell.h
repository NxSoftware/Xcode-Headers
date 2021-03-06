//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSTokenFieldCell.h>

@interface DVTFilterTokenFieldCell : NSTokenFieldCell
{
    BOOL _hasText;
    unsigned long long _leftMargin;
    unsigned long long _rightMargin;
}

@property(nonatomic) BOOL hasText; // @synthesize hasText=_hasText;
@property unsigned long long rightMargin; // @synthesize rightMargin=_rightMargin;
@property unsigned long long leftMargin; // @synthesize leftMargin=_leftMargin;
- (struct CGRect)drawingRectForBounds:(struct CGRect)arg1;
- (void)selectWithFrame:(struct CGRect)arg1 inView:(id)arg2 editor:(id)arg3 delegate:(id)arg4 start:(long long)arg5 length:(long long)arg6;
- (void)editWithFrame:(struct CGRect)arg1 inView:(id)arg2 editor:(id)arg3 delegate:(id)arg4 event:(id)arg5;
- (void)setObjectValue:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)_initCommon;
- (void)_setPlaceholderString:(id)arg1;
- (BOOL)tokenAttachment:(id)arg1 doubleClickedInRect:(struct CGRect)arg2 ofView:(id)arg3 atCharacterIndex:(unsigned long long)arg4;
- (void)updateTrackingAreaWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (void)drawWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (void)_drawBackgroundForFlatStyleWithFrame:(struct CGRect)arg1 inView:(id)arg2 hasFocus:(BOOL)arg3;

@end

