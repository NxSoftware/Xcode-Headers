//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DVTSourceControl/DVTSourceControlLogItem-Protocol.h>
#import <DVTSourceControl/NSCopying-Protocol.h>
#import <DVTSourceControl/NSSecureCoding-Protocol.h>

@class DVTSourceControlAuthor, DVTSourceControlRevision, DVTSourceControlWorkingCopy, NSArray, NSDate, NSNumber, NSString;

@interface DVTSourceControlVisualLogItem : NSObject <NSSecureCoding, NSCopying, DVTSourceControlLogItem>
{
    BOOL _complete;
    BOOL _hasVisualHistory;
    NSArray *_branches;
    NSArray *_tags;
    DVTSourceControlAuthor *_committer;
    NSDate *_authorDate;
    NSArray *_files;
    NSArray *_fileStatuses;
    NSArray *_parents;
    NSArray *_outBranchIdentifiers;
    NSArray *_splitBranchIdentifiers;
    NSArray *_inBranchIdentifiers;
    NSArray *_mergedBranchIdentifiers;
    NSNumber *_commitBranchIdentifier;
    DVTSourceControlAuthor *_author;
    DVTSourceControlRevision *_revision;
    NSDate *_date;
    NSString *_message;
    DVTSourceControlWorkingCopy *_workingCopy;
    unsigned long long _revisionType;
}

+ (id)sharedUnversionedLogItem;
+ (BOOL)supportsSecureCoding;
@property(nonatomic) BOOL hasVisualHistory; // @synthesize hasVisualHistory=_hasVisualHistory;
@property(nonatomic) unsigned long long revisionType; // @synthesize revisionType=_revisionType;
@property(retain) DVTSourceControlWorkingCopy *workingCopy; // @synthesize workingCopy=_workingCopy;
@property(retain, nonatomic) NSString *message; // @synthesize message=_message;
@property(retain, nonatomic) NSDate *date; // @synthesize date=_date;
@property(retain, nonatomic) DVTSourceControlRevision *revision; // @synthesize revision=_revision;
@property(retain, nonatomic) DVTSourceControlAuthor *author; // @synthesize author=_author;
@property(retain, nonatomic) NSNumber *commitBranchIdentifier; // @synthesize commitBranchIdentifier=_commitBranchIdentifier;
@property(retain, nonatomic) NSArray *mergedBranchIdentifiers; // @synthesize mergedBranchIdentifiers=_mergedBranchIdentifiers;
@property(retain, nonatomic) NSArray *inBranchIdentifiers; // @synthesize inBranchIdentifiers=_inBranchIdentifiers;
@property(retain, nonatomic) NSArray *splitBranchIdentifiers; // @synthesize splitBranchIdentifiers=_splitBranchIdentifiers;
@property(retain, nonatomic) NSArray *outBranchIdentifiers; // @synthesize outBranchIdentifiers=_outBranchIdentifiers;
@property(getter=isComplete) BOOL complete; // @synthesize complete=_complete;
@property(retain, nonatomic) NSArray *parents; // @synthesize parents=_parents;
@property(retain, nonatomic) NSArray *fileStatuses; // @synthesize fileStatuses=_fileStatuses;
@property(readonly, nonatomic) NSArray *files; // @synthesize files=_files;
@property(retain, nonatomic) NSDate *authorDate; // @synthesize authorDate=_authorDate;
@property(retain, nonatomic) DVTSourceControlAuthor *committer; // @synthesize committer=_committer;
@property(retain, nonatomic) NSArray *tags; // @synthesize tags=_tags;
@property(retain, nonatomic) NSArray *branches; // @synthesize branches=_branches;
- (void).cxx_destruct;
@property(readonly, nonatomic) BOOL isMerge;
- (long long)compareToLogItem:(id)arg1;
- (BOOL)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)identifier;
@property(readonly, copy) NSString *description;
- (id)loadCompleteLogItem:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
@property(readonly, getter=isUnversionedLogItem) BOOL unversionedLogItem;
- (void)updateVisualInformationWithOutBranchIdentifiers:(id)arg1 splitBranchIdentifiers:(id)arg2 inBranchIdentifiers:(id)arg3 mergedBranchIdentifiers:(id)arg4 commitBranchIdentifier:(id)arg5;
- (id)initWithAuthor:(id)arg1 revision:(id)arg2 date:(id)arg3 message:(id)arg4 fileStatuses:(id)arg5 revisionType:(unsigned long long)arg6;
- (id)initWithAuthor:(id)arg1 revision:(id)arg2 date:(id)arg3 message:(id)arg4 fileStatuses:(id)arg5 parents:(id)arg6 revisionType:(unsigned long long)arg7;
- (id)initIncompleteLogItemWithAuthor:(id)arg1 revision:(id)arg2 date:(id)arg3 message:(id)arg4;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

