//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <IDEFoundation/IDEProjectItemModel.h>

@class NSMutableDictionary;
@protocol IDEFlightChecking;

@interface Xcode3SandboxItemModel : IDEProjectItemModel
{
    id <IDEFlightChecking> _entitlementsFlightCheck;
    NSMutableDictionary *_entitlements;
    NSMutableDictionary *_filesystemPermissions;
}

+ (id)keyPathsForValuesAffectingValueForKey:(id)arg1;
+ (id)filesystemPermissionsIndexedByName;
+ (id)filesystemPermissionNames;
+ (id)filesystemKeys;
+ (id)sandboxKeys;
@property(retain) NSMutableDictionary *filesystemPermissions; // @synthesize filesystemPermissions=_filesystemPermissions;
@property(retain) NSMutableDictionary *entitlements; // @synthesize entitlements=_entitlements;
- (void).cxx_destruct;
- (BOOL)isEnabledUsingEducatedGuess;
- (id)flightChecks;
- (id)entitlementsFlightCheck;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (id)valueForUndefinedKey:(id)arg1;
- (void)gameCenterStateChanged:(id)arg1;
- (void)targetCoordinatorsChanged:(id)arg1;
- (void)readCurrentState;
- (void)primitiveInvalidate;
- (id)initWithCapabilitiesContext:(id)arg1 item:(id)arg2;

@end

