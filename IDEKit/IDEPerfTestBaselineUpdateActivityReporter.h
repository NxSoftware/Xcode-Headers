//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <IDEKit/IDEActivityReporter.h>

@class NSMapTable;

@interface IDEPerfTestBaselineUpdateActivityReporter : IDEActivityReporter
{
    id _updateStartedObserver;
    id _updateFinishedObserver;
    NSMapTable *_baselineRecordsToActivityReports;
}

- (void).cxx_destruct;
- (void)publishActivityReport:(id)arg1;
- (void)destroyActivityReportForBaselineController:(id)arg1;
- (void)createActivityReportForBaselineController:(id)arg1;
- (void)primitiveInvalidate;
- (id)initWithWorkspace:(id)arg1;

@end

