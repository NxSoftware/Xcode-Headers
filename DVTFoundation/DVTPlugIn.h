//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DVTFoundation/DVTPropertyListEncoding-Protocol.h>

@class DVTPlugInManager, NSArray, NSBundle, NSDictionary, NSMutableArray, NSMutableDictionary, NSMutableSet, NSSet, NSString;

@interface DVTPlugIn : NSObject <DVTPropertyListEncoding>
{
    DVTPlugInManager *_plugInManager;
    NSString *_identifier;
    NSString *_version;
    NSString *_name;
    NSMutableSet *_extensions;
    NSMutableDictionary *_extensionsByIdentifier;
    NSMutableSet *_extensionPoints;
    NSMutableDictionary *_extensionPointsByIdentifier;
    NSMutableArray *_activationRules;
    NSMutableSet *_requiredPlugIns;
    NSString *_bundlePath;
    NSBundle *_bundle;
    NSDictionary *_bundleRawInfoDictionary;
    NSString *_path;
    NSString *_principalClassName;
    id _principalInstance;
    BOOL _preload;
    BOOL _isLoaded;
    BOOL _isLoading;
}

@property(readonly) NSDictionary *_extensionPointsByIdentifier; // @synthesize _extensionPointsByIdentifier;
@property(readonly) NSDictionary *_extensionsByIdentifier; // @synthesize _extensionsByIdentifier;
@property(readonly, getter=isLoading) BOOL loading; // @synthesize loading=_isLoading;
@property(readonly, getter=isLoaded) BOOL loaded; // @synthesize loaded=_isLoaded;
@property(readonly) BOOL preload; // @synthesize preload=_preload;
@property(readonly) id principalInstance; // @synthesize principalInstance=_principalInstance;
@property(readonly, copy) NSString *path; // @synthesize path=_path;
@property(readonly, copy) NSSet *requiredPlugIns; // @synthesize requiredPlugIns=_requiredPlugIns;
@property(readonly, copy) NSArray *activationRules; // @synthesize activationRules=_activationRules;
@property(readonly, copy) NSSet *extensionPoints; // @synthesize extensionPoints=_extensionPoints;
@property(readonly, copy) NSSet *extensions; // @synthesize extensions=_extensions;
@property(readonly, copy) NSString *name; // @synthesize name=_name;
@property(readonly, copy) NSString *version; // @synthesize version=_version;
@property(readonly, copy) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly) DVTPlugInManager *plugInManager; // @synthesize plugInManager=_plugInManager;
- (void).cxx_destruct;
- (BOOL)load:(id *)arg1;
- (void)_instantiatePrincipalClass;
@property(readonly, getter=isLoadable) BOOL loadable;
@property(readonly) NSBundle *bundle;
@property(readonly, copy) NSString *description;
- (void)encodeIntoPropertyList:(id)arg1;
- (void)awakeWithPropertyList:(id)arg1;
- (id)initWithPropertyList:(id)arg1 owner:(id)arg2;
- (void)_configureToUsePath:(id)arg1 andBundle:(id)arg2 rawInfoPlist:(id)arg3;
- (id)initWithPlugInData:(id)arg1 plugInManager:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

