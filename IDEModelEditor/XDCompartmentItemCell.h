//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSTextFieldCell.h>

@class NSImage, XDCompartmentItem;

@interface XDCompartmentItemCell : NSTextFieldCell
{
    XDCompartmentItem *_compartmentItem;
    NSImage *_image;
    NSImage *_alternateImage;
    id _buttonTarget;
    SEL _buttonAction;
    SEL _buttonDoubleAction;
    struct _XDCompartmentItemCellFlags _cicFlags;
}

+ (void)initialize;
- (void).cxx_destruct;
- (void)drawInteriorWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (void)selectWithFrame:(struct CGRect)arg1 inView:(id)arg2 editor:(id)arg3 delegate:(id)arg4 start:(long long)arg5 length:(long long)arg6;
- (void)editWithFrame:(struct CGRect)arg1 inView:(id)arg2 editor:(id)arg3 delegate:(id)arg4 event:(id)arg5;
- (BOOL)trackMouse:(id)arg1 inRect:(struct CGRect)arg2 ofView:(id)arg3 untilMouseUp:(BOOL)arg4;
- (struct CGSize)cellSizeForBounds:(struct CGRect)arg1;
- (struct CGRect)titleRectForBounds:(struct CGRect)arg1;
- (struct CGRect)imageRectForBounds:(struct CGRect)arg1;
- (SEL)buttonDoubleAction;
- (void)setButtonDoubleAction:(SEL)arg1;
- (SEL)buttonAction;
- (void)setButtonAction:(SEL)arg1;
- (id)buttonTarget;
- (void)setButtonTarget:(id)arg1;
- (unsigned long long)imagePosition;
- (void)setImagePosition:(unsigned long long)arg1;
- (id)alternateImage;
- (void)setAlternateImage:(id)arg1;
- (id)image;
- (void)setImage:(id)arg1;
- (id)compartmentItem;
- (void)setCompartmentItem:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)initTextCell:(id)arg1;

@end

