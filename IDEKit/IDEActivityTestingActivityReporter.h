//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IDEKit/IDEActivityReporter.h>

@class DVTNotificationToken;

@interface IDEActivityTestingActivityReporter : IDEActivityReporter
{
    DVTNotificationToken *_stopTestingAllActivitiesNotificationToken;
    DVTNotificationToken *_runTestNotificationToken;
}

+ (id)activityTests;
+ (void)initialize;
- (void).cxx_destruct;
- (void)testNewAndCompletedNonUserInitiatedTasksActivity;
- (void)testNewAndCompletedUserInitiatedTasksActivity;
- (void)runTestFromNotification:(id)arg1;
- (void)stopTestingAllActivities:(id)arg1;
- (void)testInstallActionActivity;
- (void)testShowingDeterminateActivityBar;
- (void)testDeterminateActivities;
- (void)testIndeterminateActivities;
- (void)removeActivityReports:(id)arg1;
- (void)primitiveInvalidate;
- (id)initWithWorkspace:(id)arg1;

@end

