//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <IDEModelEditor/XDDrawingStyle.h>

@class NSShadow;

@interface XDShadowStyle : XDDrawingStyle
{
    NSShadow *_shadow;
    struct _XDShadowStyleFlags _ssFlags;
}

+ (void)initialize;
- (void).cxx_destruct;
- (void)drawGraphic:(id)arg1 inView:(id)arg2;
- (id)shadowColor;
- (void)setShadowColor:(id)arg1;
- (double)shadowBlurRadius;
- (void)setShadowBlurRadius:(double)arg1;
- (struct CGSize)shadowOffset;
- (void)setShadowOffset:(struct CGSize)arg1;
- (BOOL)drawsShadow;
- (void)setDrawsShadow:(BOOL)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithGraphic:(id)arg1;

@end

