//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <XCSCore/XCSObject.h>

@class NSArray, NSDate, NSString, XCSCommitHistory, XCSContributor;

@interface XCSCommit : XCSObject
{
    BOOL _isMerge;
    XCSCommitHistory *_commitHistory;
    XCSContributor *_contributor;
    NSString *_message;
    NSDate *_timestamp;
    NSString *_scmRevision;
    NSString *_blueprintRepositoryID;
    struct NSArray *_commitChangeFilePaths;
}

+ (id)commitWithContributor:(id)arg1 message:(id)arg2 timestamp:(id)arg3 scmRevision:(id)arg4 blueprintRepositoryID:(id)arg5 commitChangeFilePaths:(struct NSArray *)arg6 isMerge:(BOOL)arg7 validationErrors:(id *)arg8;
@property(nonatomic) BOOL isMerge; // @synthesize isMerge=_isMerge;
@property(retain, nonatomic) NSArray *commitChangeFilePaths; // @synthesize commitChangeFilePaths=_commitChangeFilePaths;
@property(copy, nonatomic) NSString *blueprintRepositoryID; // @synthesize blueprintRepositoryID=_blueprintRepositoryID;
@property(copy, nonatomic) NSString *scmRevision; // @synthesize scmRevision=_scmRevision;
@property(copy, nonatomic) NSDate *timestamp; // @synthesize timestamp=_timestamp;
@property(copy, nonatomic) NSString *message; // @synthesize message=_message;
@property(retain, nonatomic) XCSContributor *contributor; // @synthesize contributor=_contributor;
@property(nonatomic) __weak XCSCommitHistory *commitHistory; // @synthesize commitHistory=_commitHistory;
- (void).cxx_destruct;
- (BOOL)_validateWithContributor:(id)arg1 message:(id)arg2 timestamp:(id)arg3 scmRevision:(id)arg4 blueprintRepositoryID:(id)arg5 commitChangeFilePaths:(struct NSArray *)arg6 validationErrors:(id *)arg7;
- (id)saveRepresentationHumanReadable:(BOOL)arg1;
- (id)saveRepresentation;
- (id)dictionaryRepresentation;
- (id)description;
- (id)initWithContents:(id)arg1 service:(id)arg2 validationErrors:(id *)arg3;
- (id)_initWithID:(id)arg1 contributor:(id)arg2 message:(id)arg3 timestamp:(id)arg4 scmRevision:(id)arg5 blueprintRepositoryID:(id)arg6 commitChangeFilePaths:(struct NSArray *)arg7 isMerge:(BOOL)arg8 service:(id)arg9 validationErrors:(id *)arg10;
- (id)initWithContributor:(id)arg1 message:(id)arg2 timestamp:(id)arg3 scmRevision:(id)arg4 blueprintRepositoryID:(id)arg5 commitChangeFilePaths:(struct NSArray *)arg6 isMerge:(BOOL)arg7 service:(id)arg8 validationErrors:(id *)arg9;

@end

