//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <GPUTools/NSCoding-Protocol.h>

@class DYGPUToolsVersionInfo, NSArray, NSString;

@interface DYDeviceInfo : NSObject <NSCoding>
{
    int _platform;
    unsigned int _nativePointerSize;
    unsigned long long _runtimeIdentifier;
    NSString *_permanentIdentifier;
    NSString *_name;
    NSString *_productType;
    NSString *_version;
    NSString *_build;
    NSString *_metalVersion;
    DYGPUToolsVersionInfo *_gputoolsVersionInfo;
    NSArray *_supportedGraphicsAPIInfos;
    CDStruct_e4c1f684 _mainScreenDescriptor;
}

+ (unsigned int)defaultNativePointerSize;
@property(retain, nonatomic) NSArray *supportedGraphicsAPIInfos; // @synthesize supportedGraphicsAPIInfos=_supportedGraphicsAPIInfos;
@property(nonatomic) CDStruct_e4c1f684 mainScreenDescriptor; // @synthesize mainScreenDescriptor=_mainScreenDescriptor;
@property(retain, nonatomic) DYGPUToolsVersionInfo *gputoolsVersionInfo; // @synthesize gputoolsVersionInfo=_gputoolsVersionInfo;
@property(nonatomic) unsigned int nativePointerSize; // @synthesize nativePointerSize=_nativePointerSize;
@property(retain, nonatomic) NSString *metalVersion; // @synthesize metalVersion=_metalVersion;
@property(retain, nonatomic) NSString *build; // @synthesize build=_build;
@property(retain, nonatomic) NSString *version; // @synthesize version=_version;
@property(retain, nonatomic) NSString *productType; // @synthesize productType=_productType;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *permanentIdentifier; // @synthesize permanentIdentifier=_permanentIdentifier;
@property(nonatomic) unsigned long long runtimeIdentifier; // @synthesize runtimeIdentifier=_runtimeIdentifier;
@property(nonatomic) int platform; // @synthesize platform=_platform;
- (BOOL)supportsCapabilitiesOfGraphicsAPI:(id)arg1 allowedClass:(Class)arg2;
- (BOOL)versionIsOlderThan:(id)arg1;
@property(readonly, nonatomic) BOOL isEmbeddedPlatform;
@property(readonly, nonatomic) BOOL sharedPermanentIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (id)debugDescription;
- (id)description;
- (id)_platformName;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;

@end

