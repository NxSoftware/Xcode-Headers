//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSColor;

@interface DBGRoundedBox : NSView
{
    NSColor *_color;
    double *_pattern;
    long long _count;
    double _phase;
}

- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (void)setLineDash:(double *)arg1 count:(long long)arg2 phase:(double)arg3;
- (void)setColor:(id)arg1;
- (void)dealloc;

@end

