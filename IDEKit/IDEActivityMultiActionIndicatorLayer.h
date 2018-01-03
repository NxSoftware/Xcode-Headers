//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTKit/DVTClickableLayer.h>

@class DVTTextLayer;

@interface IDEActivityMultiActionIndicatorLayer : DVTClickableLayer
{
    DVTTextLayer *_textLayer;
    long long _count;
    struct CGRect _savedBounds;
}

+ (id)defaultActionForKey:(id)arg1;
@property(nonatomic) long long count; // @synthesize count=_count;
- (void).cxx_destruct;
- (id)accessibilityAttributeValue:(id)arg1;
- (id)accessibilityAttributeNames;
- (void)_setAnimatedHidden:(BOOL)arg1;
- (void)layoutSublayers;
- (void)sizeToFit;
- (void)setBounds:(struct CGRect)arg1;
- (void)setHidden:(BOOL)arg1 resizeAnimation:(BOOL)arg2;
- (void)layerShouldShowUnclickedState;
- (void)layerShouldShowClickedState;
- (id)attributedStringValue;
- (id)textAttributes;
- (id)init;

@end

