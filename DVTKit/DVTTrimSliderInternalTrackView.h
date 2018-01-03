//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSColor;

@interface DVTTrimSliderInternalTrackView : NSView
{
    BOOL _drawsBackground;
    long long _numberOfSegments;
    NSColor *_segmentSeparatorColor;
}

@property(retain, nonatomic) NSColor *segmentSeparatorColor; // @synthesize segmentSeparatorColor=_segmentSeparatorColor;
@property(nonatomic) BOOL drawsBackground; // @synthesize drawsBackground=_drawsBackground;
@property(nonatomic) long long numberOfSegments; // @synthesize numberOfSegments=_numberOfSegments;
- (void).cxx_destruct;
- (void)_drawSegmentSeparatorCenteredAtX:(double)arg1 boundsHeight:(double)arg2 color:(id)arg3;
- (void)_drawSegmentSeparatorsInBounds:(struct CGRect)arg1;
- (void)_drawTrackBackgroundInBounds:(struct CGRect)arg1;
- (void)_drawTrackInBounds:(struct CGRect)arg1;
- (void)drawRect:(struct CGRect)arg1;

@end

