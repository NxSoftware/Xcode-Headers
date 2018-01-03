//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEFoundation/IDELocalizationWorkContext.h>

@class NSArray, NSMutableArray, NSURL;

@interface IDELocalizationXLIFFComparisonContext : IDELocalizationWorkContext
{
    NSMutableArray *_issues;
    NSMutableArray *_filesWithChanges;
    NSURL *_destinationURL;
}

+ (id)contextWithDestinationURL:(id)arg1;
@property(readonly) NSArray *filesWithChanges; // @synthesize filesWithChanges=_filesWithChanges;
@property(readonly) NSArray *issues; // @synthesize issues=_issues;
@property(retain) NSURL *destinationURL; // @synthesize destinationURL=_destinationURL;
- (void).cxx_destruct;
- (void)recordFileChangeForFile:(id)arg1 importUrl:(id)arg2 exportUrl:(id)arg3 foundInProject:(BOOL)arg4;
- (void)recordMissingFile:(id)arg1 appendedIncomingRange:(struct _NSRange)arg2 appendedProjectRange:(struct _NSRange)arg3 importUrl:(id)arg4 exportUrl:(id)arg5;
- (void)recordExtraFile:(id)arg1 appendedIncomingRange:(struct _NSRange)arg2 appendedProjectRange:(struct _NSRange)arg3 importUrl:(id)arg4 exportUrl:(id)arg5;
- (void)recordExtraTUInFile:(id)arg1 idString:(id)arg2 appendedIncomingRange:(struct _NSRange)arg3 appendedProjectRange:(struct _NSRange)arg4 importUrl:(id)arg5 exportUrl:(id)arg6;
- (void)recordMissingTUInFile:(id)arg1 idString:(id)arg2 appendedIncomingRange:(struct _NSRange)arg3 appendedProjectRange:(struct _NSRange)arg4 importUrl:(id)arg5 exportUrl:(id)arg6;
- (void)recordEmptyTargetInFile:(id)arg1 idString:(id)arg2 appendedIncomingRange:(struct _NSRange)arg3 appendedProjectRange:(struct _NSRange)arg4 importUrl:(id)arg5 exportUrl:(id)arg6;
- (void)recordMismatchedSourceInFile:(id)arg1 idString:(id)arg2 incomingStringValue:(id)arg3 projectStringValue:(id)arg4 appendedIncomingRange:(struct _NSRange)arg5 appendedProjectRange:(struct _NSRange)arg6 importUrl:(id)arg7 exportUrl:(id)arg8;
- (void)recordIssue:(int)arg1 message:(id)arg2 appendedIncomingRange:(struct _NSRange)arg3 appendedProjectRange:(struct _NSRange)arg4 importUrl:(id)arg5 exportUrl:(id)arg6;
- (id)init;

@end

