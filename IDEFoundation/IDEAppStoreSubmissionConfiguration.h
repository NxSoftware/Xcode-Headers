//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DVTLogAspect, NSArray, NSDictionary;

@interface IDEAppStoreSubmissionConfiguration : NSObject
{
    NSDictionary *_platformToSubmissionPreferences;
    NSDictionary *_bitcodeSupportLevelToPlatformPreferences;
    DVTLogAspect *_logAspect;
    NSArray *_platformsDictionaries;
}

+ (id)platformToSubmissionPreferencesFromPlatformsDictionaries:(id)arg1 logAspect:(id)arg2 error:(id *)arg3;
+ (id)submissionPreferenceFromConfigurationResponsePlatformDictionariesToMerge:(id)arg1 error:(id *)arg2;
@property(retain, nonatomic) NSArray *platformsDictionaries; // @synthesize platformsDictionaries=_platformsDictionaries;
@property(retain, nonatomic) DVTLogAspect *logAspect; // @synthesize logAspect=_logAspect;
@property(retain, nonatomic) NSDictionary *bitcodeSupportLevelToPlatformPreferences; // @synthesize bitcodeSupportLevelToPlatformPreferences=_bitcodeSupportLevelToPlatformPreferences;
@property(retain, nonatomic) NSDictionary *platformToSubmissionPreferences; // @synthesize platformToSubmissionPreferences=_platformToSubmissionPreferences;
- (void).cxx_destruct;
- (id)platformsForBitcodeSupportLevel:(long long)arg1;
- (id)submissionPreferenceForPlatform:(id)arg1;
- (id)configurationByReplacingSubmissionPreference:(id)arg1 forPlatform:(id)arg2;
- (id)initWithConfigurationPlatformsDictionaries:(id)arg1 logAspect:(id)arg2 error:(id *)arg3;

@end

