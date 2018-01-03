//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DVTFuture, DVTPlatform, DVTPromise, IDEProvisioningTeamManager, NSArray, NSDictionary, NSMutableDictionary, NSString;
@protocol IDEProvisioningBasicTeam;

@interface IDETemplateTester : NSObject
{
    BOOL _crossPlatformOnly;
    NSString *_outputPath;
    DVTPlatform *_platform;
    NSArray *_requiredOptions;
    NSDictionary *_nonPermutedOptionValues;
    NSMutableDictionary *_usedTemplateNamesByPlatform;
    unsigned long long _testProjectCounter;
    IDEProvisioningTeamManager *_teamManager;
    DVTFuture *_teamsLoadingFuture;
    DVTPromise *_teamsLoadingPromise;
    id <IDEProvisioningBasicTeam> _team;
}

+ (id)platformForString:(id)arg1;
@property(retain) id <IDEProvisioningBasicTeam> team; // @synthesize team=_team;
@property(retain) DVTPromise *teamsLoadingPromise; // @synthesize teamsLoadingPromise=_teamsLoadingPromise;
@property(retain) DVTFuture *teamsLoadingFuture; // @synthesize teamsLoadingFuture=_teamsLoadingFuture;
@property(retain) IDEProvisioningTeamManager *teamManager; // @synthesize teamManager=_teamManager;
@property unsigned long long testProjectCounter; // @synthesize testProjectCounter=_testProjectCounter;
@property(retain) NSMutableDictionary *usedTemplateNamesByPlatform; // @synthesize usedTemplateNamesByPlatform=_usedTemplateNamesByPlatform;
@property(copy) NSDictionary *nonPermutedOptionValues; // @synthesize nonPermutedOptionValues=_nonPermutedOptionValues;
@property(copy) NSArray *requiredOptions; // @synthesize requiredOptions=_requiredOptions;
@property BOOL crossPlatformOnly; // @synthesize crossPlatformOnly=_crossPlatformOnly;
@property(retain) DVTPlatform *platform; // @synthesize platform=_platform;
@property(copy) NSString *outputPath; // @synthesize outputPath=_outputPath;
- (void).cxx_destruct;
- (id)_templateNamed:(id)arg1 forPlatform:(id)arg2;
- (void)runTemplateTests;
- (BOOL)runCreateNewProjectWithTemplateNamed:(id)arg1 platform:(id)arg2 options:(id)arg3 error:(id *)arg4;
- (void)runCreateNewProjectWithTemplateNamed:(id)arg1 platform:(id)arg2 options:(id)arg3;
- (void)doProjectTemplate:(id)arg1;
- (id)platformFolderName;
- (id)platformFolderNameForPlatform:(id)arg1;
- (void)permuteOptions:(id)arg1 inProjectTemplate:(id)arg2 withPlatformName:(id)arg3 withFolderName:(id)arg4;
- (void)createSingleProjectFromTemplate:(id)arg1 withOptionValues:(id)arg2 atPath:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)uniqueTemplateNameForName:(id)arg1 platformName:(id)arg2;
- (id)init;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)initWithOutputPath:(id)arg1 teamID:(id)arg2;

@end

