//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <IDEKit/IDEBuildIssueAnnotation.h>

@interface IDEBuildIssueStaticAnalyzerEventStepAnnotation : IDEBuildIssueAnnotation
{
    BOOL _isCurrentStep;
}

+ (id)_nonCurrentStepTheme;
+ (id)_currentStepTheme;
+ (id)sidebarIcon;
+ (double)precedence;
@property BOOL isCurrentStep; // @synthesize isCurrentStep=_isCurrentStep;
- (BOOL)isHighlightedRangesVisible;
- (id)currentStateInTextView:(id)arg1;
- (id)init;

@end

