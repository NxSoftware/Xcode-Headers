//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DVTFilePath, NSDictionary, NSSet;

@interface IDEOpenQuicklyQueryContext : NSObject
{
    NSDictionary *_recentDocumentFilePathOrURLScoreBonuses;
    DVTFilePath *_developerDirectory;
    DVTFilePath *_workspaceDirectory;
    DVTFilePath *_primarySDKPath;
    NSSet *_referencedSDKPaths;
    NSSet *_interestingFrameworkNames;
    long long _swiftUsage;
}

@property(readonly) long long swiftUsage; // @synthesize swiftUsage=_swiftUsage;
@property(readonly) NSSet *interestingFrameworkNames; // @synthesize interestingFrameworkNames=_interestingFrameworkNames;
@property(readonly) NSSet *referencedSDKPaths; // @synthesize referencedSDKPaths=_referencedSDKPaths;
@property(readonly) DVTFilePath *primarySDKPath; // @synthesize primarySDKPath=_primarySDKPath;
@property(readonly) DVTFilePath *workspaceDirectory; // @synthesize workspaceDirectory=_workspaceDirectory;
@property(readonly) DVTFilePath *developerDirectory; // @synthesize developerDirectory=_developerDirectory;
- (void).cxx_destruct;
- (double)recentlyOpenedBonusForFilePathOrURL:(id)arg1;
- (id)initWithPrimarySDKPath:(id)arg1 referencedSDKPaths:(id)arg2 swiftUsage:(long long)arg3 workspaceDirectory:(id)arg4 developerDirectory:(id)arg5 recentDocumentFilePathOrURLScoreBonuses:(id)arg6 interestingFrameworkNames:(id)arg7;

@end

