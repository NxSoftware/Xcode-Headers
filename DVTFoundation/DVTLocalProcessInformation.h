//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <DVTFoundation/DVTProcessInformation.h>

@class NSArray, NSString;

@interface DVTLocalProcessInformation : DVTProcessInformation
{
    NSString *_realApplicationName;
    NSString *_requestedApplicationName;
    NSString *_firstApplicationArgument;
    NSArray *_allApplicationArguments;
}

+ (id)_blacklistedProcesses;
+ (id)_currentProcessIDsAsNumbers;
+ (id)currentProcessInformationsUnfiltered;
+ (id)currentProcessInformations;
+ (id)_processInformationsFilteredBy:(CDUnknownBlockType)arg1;
+ (id)_archNameForExecutableArchitecture:(int)arg1;
@property(copy, nonatomic) NSString *firstApplicationArgument; // @synthesize firstApplicationArgument=_firstApplicationArgument;
@property(copy, nonatomic) NSString *requestedApplicationName; // @synthesize requestedApplicationName=_requestedApplicationName;
@property(copy, nonatomic) NSString *realApplicationName; // @synthesize realApplicationName=_realApplicationName;
- (void).cxx_destruct;
- (id)_procTableName;
- (BOOL)_isLaunchCFMApp;
- (id)_calculatePreferredArchitecture;
- (id)_calculateProcessURL;
- (id)_calculateDisplayName;
- (void)_initProcessInformationFetchingAllArguments:(BOOL)arg1;
@property(readonly, nonatomic) NSArray *allApplicationArguments; // @synthesize allApplicationArguments=_allApplicationArguments;
- (id)preferredArchitecture;
- (id)processURL;
- (id)displayName;

@end

