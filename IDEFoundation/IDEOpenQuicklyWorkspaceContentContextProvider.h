//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEFoundation/DVTInvalidation-Protocol.h>

@class DVTDelayedInvocation, DVTStackBacktrace, IDEWorkspace, NSDictionary, NSMutableSet, NSSet, NSString;
@protocol DVTInvalidation;

@interface IDEOpenQuicklyWorkspaceContentContextProvider : NSObject <DVTInvalidation>
{
    NSMutableSet *_pendingRemovedFilePaths;
    NSMutableSet *_pendingAddedOrModifiedFilePaths;
    NSDictionary *_filePathsToFrameworkNames;
    id <DVTInvalidation> _workspaceObserver;
    DVTDelayedInvocation *_refreshInvocation;
    BOOL _queryInProgress;
    IDEWorkspace *_workspace;
    NSSet *_directlyImportedFrameworkNames;
}

+ (void)initialize;
@property(readonly) NSSet *directlyImportedFrameworkNames; // @synthesize directlyImportedFrameworkNames=_directlyImportedFrameworkNames;
@property(readonly) IDEWorkspace *workspace; // @synthesize workspace=_workspace;
- (void).cxx_destruct;
- (void)workspaceFilePath:(id)arg1 didChangeWithType:(long long)arg2;
- (void)beginRefresh;
- (void)primitiveInvalidate;
- (id)initWithWorkspace:(id)arg1;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end
