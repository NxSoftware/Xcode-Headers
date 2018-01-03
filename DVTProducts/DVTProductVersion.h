//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DVTProducts/DVTInvalidation-Protocol.h>
#import <DVTProducts/DVTServicesJSONSerialization-Protocol.h>
#import <DVTProducts/NSCopying-Protocol.h>

@class DVTCrashPointAppStoreSource, DVTCrashPointLocalSource, DVTProductCategory, DVTProductVersionBinaryInfos, DVTProductVersionIdentifier, DVTStackBacktrace, NSArray, NSDate, NSSet, NSString, NSURL;

@interface DVTProductVersion : NSObject <DVTServicesJSONSerialization, DVTInvalidation, NSCopying>
{
    NSString *_name;
    DVTProductVersionIdentifier *_productVersionIdentifier;
    NSString *_platformSDKIdentifier;
    NSURL *_imageURL;
    NSURL *_cacheImageURL;
    NSDate *_creationDate;
    NSArray *_childProducts;
    NSString *_adamId;
    NSSet *_supportedDeviceTypes;
    NSSet *_supportedOSVersions;
    DVTProductVersionBinaryInfos *_binaryInfos;
    DVTCrashPointAppStoreSource *_appStoreCrashPointSource;
    DVTCrashPointLocalSource *_localCrashPointSource;
    NSArray *_archives;
    unsigned long long _appStoreStatus;
}

+ (id)objectFromJSONRepresentation:(id)arg1 error:(id *)arg2;
+ (id)productVersionFromArchive:(id)arg1 withError:(id *)arg2;
+ (BOOL)isValidProductVersionFromArchive:(id)arg1 withError:(id *)arg2;
+ (id)productVersionByMerging:(id)arg1;
+ (id)mostRecentVersion:(id)arg1;
+ (void)initialize;
@property unsigned long long appStoreStatus; // @synthesize appStoreStatus=_appStoreStatus;
@property(retain) NSArray *archives; // @synthesize archives=_archives;
@property(retain) DVTCrashPointLocalSource *localCrashPointSource; // @synthesize localCrashPointSource=_localCrashPointSource;
@property(retain) DVTCrashPointAppStoreSource *appStoreCrashPointSource; // @synthesize appStoreCrashPointSource=_appStoreCrashPointSource;
@property(retain) DVTProductVersionBinaryInfos *binaryInfos; // @synthesize binaryInfos=_binaryInfos;
@property(retain) NSSet *supportedOSVersions; // @synthesize supportedOSVersions=_supportedOSVersions;
@property(retain) NSSet *supportedDeviceTypes; // @synthesize supportedDeviceTypes=_supportedDeviceTypes;
@property(copy) NSString *adamId; // @synthesize adamId=_adamId;
@property(retain) NSArray *childProducts; // @synthesize childProducts=_childProducts;
@property(retain) NSDate *creationDate; // @synthesize creationDate=_creationDate;
@property(retain) NSURL *cacheImageURL; // @synthesize cacheImageURL=_cacheImageURL;
@property(retain) NSURL *imageURL; // @synthesize imageURL=_imageURL;
@property(retain) NSString *platformSDKIdentifier; // @synthesize platformSDKIdentifier=_platformSDKIdentifier;
@property(readonly) DVTProductVersionIdentifier *productVersionIdentifier; // @synthesize productVersionIdentifier=_productVersionIdentifier;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (id)JSONRepresentation;
@property(readonly, copy) NSString *description;
@property(readonly, getter=isAvailableForSale) BOOL availableForSale;
@property(readonly, getter=isAvailableForPrerelease) BOOL availableForPrerelease;
@property(readonly) NSArray *flatChildProducts;
- (void)primitiveInvalidate;
- (void)setAppStoreCrashPointSource:(id)arg1 productManager:(id)arg2;
- (id)cachePathWithProductDirectory:(id)arg1;
- (id)olderVersion:(id)arg1;
- (id)newerVersion:(id)arg1;
@property(readonly) DVTProductCategory *productCategory;
@property(readonly) NSString *name; // @synthesize name=_name;
@property(readonly) NSString *buildNumber;
@property(readonly) NSString *version;
@property(readonly) NSString *bundleIdentifier;
- (id)initWithProductVersionIdentifier:(id)arg1 name:(id)arg2 childProducts:(id)arg3;
- (id)init;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

