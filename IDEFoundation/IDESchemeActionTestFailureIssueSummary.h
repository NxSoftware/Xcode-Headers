//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEFoundation/IDESchemeActionIssueSummary.h>

@class NSString;

@interface IDESchemeActionTestFailureIssueSummary : IDESchemeActionIssueSummary
{
    NSString *_testCaseName;
}

@property(copy) NSString *testCaseName; // @synthesize testCaseName=_testCaseName;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)updateWithDictionaryRepresentation:(id)arg1;
- (id)dictionaryRepresentation;
- (id)initWithDictionaryRepresentation:(id)arg1 creatingWorkspaceFilePath:(id)arg2;
- (id)initWithIssueType:(id)arg1 message:(id)arg2 producingTarget:(id)arg3 documentLocation:(id)arg4 creatingWorkspaceFilePath:(id)arg5 testCaseName:(id)arg6;
- (id)initWithIssueType:(id)arg1 message:(id)arg2 producingTarget:(id)arg3 documentLocation:(id)arg4 creatingWorkspaceFilePath:(id)arg5;

@end

