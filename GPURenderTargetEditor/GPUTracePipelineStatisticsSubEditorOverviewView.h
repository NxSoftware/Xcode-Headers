//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSArray, NSColor;

__attribute__((visibility("hidden")))
@interface GPUTracePipelineStatisticsSubEditorOverviewView : NSView
{
    NSArray *_ratios;
    NSArray *_currentRatios;
    NSArray *_colors;
    NSArray *_currentColors;
    NSColor *_background;
}

@property(retain) NSColor *background; // @synthesize background=_background;
@property(retain) NSArray *currentColors; // @synthesize currentColors=_currentColors;
@property(retain) NSArray *colors; // @synthesize colors=_colors;
@property(retain) NSArray *currentRatios; // @synthesize currentRatios=_currentRatios;
@property(retain) NSArray *ratios; // @synthesize ratios=_ratios;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;

@end

