//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DVTPlatform, NSSet, NSString;

@interface DVTProductCategory : NSObject
{
    BOOL _wantsRoundedIcons;
    BOOL _crashPointInspectableShouldShowDeviceTypes;
    BOOL _wantsOnDiskPlatformDisambiguation;
    NSString *_identifier;
    NSString *_archiveDescription;
    long long _sortOrder;
    long long _deprecatedIdentifier;
    NSString *_supportedOSVersionStringFormat;
    NSString *_crashPointInspectableOSVersionDescriptor;
    NSSet *_overridingDeviceTypes;
    NSString *_userDescriptionWhenNoPlatformExists;
}

+ (id)productCategoryForIdentifier:(id)arg1 fallingBackOnDeprecatedIdentifier:(id)arg2 outError:(id *)arg3;
+ (id)productCategoryForDeprecatedIdentifier:(id)arg1;
+ (id)productCategoryForUnknownIdentifier;
+ (id)productCategoryForIdentifier:(id)arg1;
+ (id)productCategoryForPlatformSDKIdentifier:(id)arg1;
+ (id)productCategoryForITunesSoftwareApplicationType:(int)arg1 usingSession:(id)arg2 error:(id *)arg3;
+ (id)productCategories;
@property(nonatomic) BOOL wantsOnDiskPlatformDisambiguation; // @synthesize wantsOnDiskPlatformDisambiguation=_wantsOnDiskPlatformDisambiguation;
@property(retain, nonatomic) NSString *userDescriptionWhenNoPlatformExists; // @synthesize userDescriptionWhenNoPlatformExists=_userDescriptionWhenNoPlatformExists;
@property(readonly) NSSet *overridingDeviceTypes; // @synthesize overridingDeviceTypes=_overridingDeviceTypes;
@property(readonly) BOOL crashPointInspectableShouldShowDeviceTypes; // @synthesize crashPointInspectableShouldShowDeviceTypes=_crashPointInspectableShouldShowDeviceTypes;
@property(readonly) NSString *crashPointInspectableOSVersionDescriptor; // @synthesize crashPointInspectableOSVersionDescriptor=_crashPointInspectableOSVersionDescriptor;
@property(readonly) NSString *supportedOSVersionStringFormat; // @synthesize supportedOSVersionStringFormat=_supportedOSVersionStringFormat;
@property(readonly) BOOL wantsRoundedIcons; // @synthesize wantsRoundedIcons=_wantsRoundedIcons;
@property(readonly) long long deprecatedIdentifier; // @synthesize deprecatedIdentifier=_deprecatedIdentifier;
@property(readonly) long long sortOrder; // @synthesize sortOrder=_sortOrder;
@property(readonly) NSString *archiveDescription; // @synthesize archiveDescription=_archiveDescription;
@property(readonly) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (long long)compare:(id)arg1;
- (id)description;
@property(readonly) NSString *platformDisambiguationString;
@property(readonly) DVTPlatform *platform;
- (id)platformForCategoryIdentifier:(id)arg1;
@property(readonly) NSString *userDescription;
- (id)initWithIdentifier:(id)arg1 userDescriptionWhenNoPlatformExists:(id)arg2 archiveDescription:(id)arg3 sortOrder:(long long)arg4 deprecatedIdentifier:(long long)arg5 wantsRoundedIcons:(BOOL)arg6 supportedOSVersionStringFormat:(id)arg7 crashPointInspectableOSVersionDescriptor:(id)arg8 overridingDeviceTypes:(id)arg9 wantsOnDiskPlatformDisambiguation:(BOOL)arg10 crashPointInspectableShouldShowDeviceTypes:(BOOL)arg11;
- (id)platformDisambiguationStringWithPrefixString:(id)arg1;

@end

