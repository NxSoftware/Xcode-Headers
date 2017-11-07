//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <iCloudSupport/NSObject-Protocol.h>

@class IDEGraph, IDEGraphChart, NSBezierPath, NSColor, NSEvent, NSGradient, NSNumber, NSString;

@protocol IDEGraphDelegate <NSObject>
- (NSColor *)colorForChartNamed:(NSString *)arg1;

@optional
- (void)userMouseExitedGraph:(id)arg1 event:(NSEvent *)arg2;
- (void)userMousedOverOnGraphEntry:(id)arg1 event:(NSEvent *)arg2;
- (void)userClickedOnGraphEntry:(id)arg1;
- (NSColor *)borderColorForBorder:(NSColor *)arg1;
- (NSGradient *)gradientForColor:(NSColor *)arg1;
- (BOOL)useFlatColorForGraphChart:(IDEGraphChart *)arg1;
- (void)setPathStyleForGraph:(IDEGraph *)arg1 entry:(id)arg2 path:(NSBezierPath *)arg3;
- (NSString *)translateValue:(NSNumber *)arg1 keypath:(NSString *)arg2;
- (double)lineWidthForGraphChart:(IDEGraphChart *)arg1;
- (BOOL)lineFilledForGraph:(IDEGraph *)arg1 entry:(id)arg2;
- (NSColor *)keyColorForChartNamed:(NSString *)arg1;
- (NSColor *)colorForEntryValue:(NSNumber *)arg1;
@end

