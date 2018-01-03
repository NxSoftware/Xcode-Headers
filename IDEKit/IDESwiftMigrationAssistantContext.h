//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEMigrationAssistantContext.h>

@class DVTFilePath, NSArray, NSMutableArray, NSURL;

@interface IDESwiftMigrationAssistantContext : IDEMigrationAssistantContext
{
    NSMutableArray *_targets;
    NSMutableArray *_selectedTargets;
    NSMutableArray *_migrationBuildOptions;
    unsigned long long _currentConversionStage;
    long long _numIncompatibilityErrors;
    BOOL _remindMe;
    BOOL _minimizeObjectiveCInference;
    DVTFilePath *_migrationBuildFolder;
    NSURL *_savedPlaygroundURL;
}

+ (Class)migrationContextClass;
+ (void)initialize;
@property BOOL minimizeObjectiveCInference; // @synthesize minimizeObjectiveCInference=_minimizeObjectiveCInference;
@property(retain) NSURL *savedPlaygroundURL; // @synthesize savedPlaygroundURL=_savedPlaygroundURL;
@property(readonly) DVTFilePath *migrationBuildFolder; // @synthesize migrationBuildFolder=_migrationBuildFolder;
@property BOOL remindMe; // @synthesize remindMe=_remindMe;
@property unsigned long long currentConversionStage; // @synthesize currentConversionStage=_currentConversionStage;
@property long long numberOfIncompatibilityErrors; // @synthesize numberOfIncompatibilityErrors=_numIncompatibilityErrors;
@property(readonly, copy) NSArray *targets; // @synthesize targets=_targets;
@property(copy) NSArray *migrationBuildOptions; // @synthesize migrationBuildOptions=_migrationBuildOptions;
- (void).cxx_destruct;
- (void)endPerformingContextTask;
- (void)beginPerformingContextTask;
- (void)reopenPlaygroundIfNecessary;
- (void)setWorkspaceTabController:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSMutableArray *mutableSelectedTargets; // @dynamic mutableSelectedTargets;
@property(copy) NSArray *selectedTargets; // @dynamic selectedTargets;

@end

