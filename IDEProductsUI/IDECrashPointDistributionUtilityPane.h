//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <IDEProductsUI/IDEProductsUtilityPane.h>

@class DVTCrashChartView, DVTCrashPoint;

@interface IDECrashPointDistributionUtilityPane : IDEProductsUtilityPane
{
    DVTCrashChartView *_crashChartView;
}

@property __weak DVTCrashChartView *crashChartView; // @synthesize crashChartView=_crashChartView;
- (void).cxx_destruct;
- (void)viewDidLoad;
@property(readonly) DVTCrashPoint *crashPoint;
- (id)initWithInspectable:(id)arg1;

@end

