//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface XCSUIIntegrationSummaryIssuesContentGenerator : NSObject
{
}

+ (id)attributedStringForSection:(id)arg1 rowSelected:(BOOL)arg2;
+ (id)committersResponsibleAttributedStringForIssue:(id)arg1 rowSelected:(BOOL)arg2;
+ (id)issueRadarAttributedString:(id)arg1 rowSelected:(BOOL)arg2;
+ (id)issueFileAttributedStringForFile:(id)arg1 line:(id)arg2 testCase:(id)arg3 selected:(BOOL)arg4;
+ (id)issueReasonAttributedStringForIssue:(id)arg1 rowSelected:(BOOL)arg2;
+ (id)issueTypeAndCauseAttributedStringForIssue:(id)arg1 rowSelected:(BOOL)arg2;

@end
