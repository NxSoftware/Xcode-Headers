//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSAttributedString;

@interface IBMeasurementLine : NSObject
{
    NSAttributedString *_measurementText;
    struct CGPoint _startPoint;
    struct CGPoint _endPoint;
    struct CGPoint _auxiliarlyStartPoint;
    struct CGPoint _auxiliarlyEndPoint;
    unsigned long long _auxiliaryRectEdge;
    long long _arrowDirection;
}

+ (id)lineFromRect:(struct CGRect)arg1 withStartEdge:(unsigned long long)arg2 toEndRect:(struct CGRect)arg3 withEndEdge:(unsigned long long)arg4;
- (void).cxx_destruct;
- (id)description;
- (void)drawTextInRect:(struct CGRect)arg1 ofOverlayView:(id)arg2 fromCanvasFrame:(id)arg3;
- (void)drawLineInRect:(struct CGRect)arg1 ofOverlayView:(id)arg2 fromCanvasFrame:(id)arg3;
- (struct CGRect)measurementRectForDrawingInOverlayView:(id)arg1 fromCanvasFrame:(id)arg2;
- (void)calculateLineFromStartRect:(struct CGRect)arg1 withStartEdge:(unsigned long long)arg2 andEndRect:(struct CGRect)arg3 withEndEdge:(unsigned long long)arg4;
- (void)setMeasurementText:(id)arg1;
- (void)calculateAuxiliarlyLineFromStartRect:(struct CGRect)arg1 withStartEdge:(unsigned long long)arg2 andEndRect:(struct CGRect)arg3 withEndEdge:(unsigned long long)arg4;
- (void)calculateStartAndEndPointsFromStartRect:(struct CGRect)arg1 withStartEdge:(unsigned long long)arg2 andEndRect:(struct CGRect)arg3 withEndEdge:(unsigned long long)arg4;
- (id)attributes;
- (id)initLineFromRect:(struct CGRect)arg1 withStartEdge:(unsigned long long)arg2 toEndRect:(struct CGRect)arg3 withEndEdge:(unsigned long long)arg4;

@end

