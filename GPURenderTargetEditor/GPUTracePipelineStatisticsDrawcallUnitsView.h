//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSArray, NSNumber;

__attribute__((visibility("hidden")))
@interface GPUTracePipelineStatisticsDrawcallUnitsView : NSView
{
    NSNumber *_maximum;
    NSArray *_units;
}

@property(retain) NSArray *units; // @synthesize units=_units;
@property(retain) NSNumber *maximum; // @synthesize maximum=_maximum;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;

@end
