//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <IDEFoundation/NSObject-Protocol.h>

@class IDEActivityLogSection, IDEBuildTask, NSArray;

@protocol IDEBuildTaskCallbacks <NSObject>
- (void)buildTask:(IDEBuildTask *)arg1 addsPostprocessingBlocks:(NSArray *)arg2;
- (void)buildTaskDidUpdateStatus:(IDEBuildTask *)arg1;
- (void)buildTask:(IDEBuildTask *)arg1 didSetExitCode:(int)arg2;
- (void)buildTask:(IDEBuildTask *)arg1 activityLogSectionDidChange:(IDEActivityLogSection *)arg2;
- (void)buildTaskDidStartExecuting:(IDEBuildTask *)arg1;
@end
