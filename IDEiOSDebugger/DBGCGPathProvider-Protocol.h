//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <IDEiOSDebugger/NSObject-Protocol.h>

@class NSArray, NSDictionary;
@protocol IDEDataValue;

@protocol DBGCGPathProvider <NSObject>
@property(readonly) double lineDashPhase;
@property(readonly) NSArray *lineDashPattern;
@property(readonly) BOOL usesEvenOddFillRule;
@property(readonly) double flatness;
@property(readonly) double miterLimit;
@property(readonly) int lineJoinStyle;
@property(readonly) int lineCapStyle;
@property(readonly) double lineWidth;
@property(readonly) struct CGPath *path;
@property(readonly) BOOL hasPathBeenRetrieved;
- (void)cancel;
- (id)initWithDataValue:(id <IDEDataValue>)arg1 options:(NSDictionary *)arg2;
@end

