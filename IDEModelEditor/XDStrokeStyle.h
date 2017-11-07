//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <IDEModelEditor/XDDrawingStyle.h>

@class NSColor, XDLineDashPattern;

@interface XDStrokeStyle : XDDrawingStyle
{
    double _lineWidth;
    XDLineDashPattern *_lineDashPattern;
    NSColor *_strokeColor;
    struct _XDStrokeStyleFlags _ssFlags;
}

+ (id)defaultStrokeColor;
+ (id)defaultLineDashPattern;
+ (void)initialize;
- (void).cxx_destruct;
- (void)drawGraphic:(id)arg1 inView:(id)arg2;
- (id)strokeColor;
- (void)setStrokeColor:(id)arg1;
- (id)lineDashPattern;
- (void)setLineDashPattern:(id)arg1;
- (unsigned long long)lineJoinStyle;
- (void)setLineJoinStyle:(unsigned long long)arg1;
- (unsigned long long)lineCapStyle;
- (void)setLineCapStyle:(unsigned long long)arg1;
- (double)lineWidth;
- (void)setLineWidth:(double)arg1;
- (BOOL)shouldAntialias;
- (void)setShouldAntialias:(BOOL)arg1;
- (BOOL)drawsStroke;
- (void)setDrawsStroke:(BOOL)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithGraphic:(id)arg1;

@end

