//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DVTPortal/NSCopying-Protocol.h>

@class NSString;

@interface DVTPortalContainer : NSObject <NSCopying>
{
    NSString *_identifier;
    NSString *_portalIdentifier;
    NSString *_name;
}

+ (id)_errorForEmptyStringContainerIdentifier;
+ (id)_errorForPermissionsFailure;
+ (id)_errorAssociationSupportDoesNotExistForContainerType:(id)arg1;
+ (id)containerType;
+ (id)_associateContainerIdentifiers:(id)arg1 withAppID:(id)arg2 team:(id)arg3 program:(id)arg4;
+ (id)_addContainerServiceWithTeam:(id)arg1 program:(id)arg2 identifier:(id)arg3 name:(id)arg4;
+ (id)_listContainerServiceWithTeam:(id)arg1 program:(id)arg2;
+ (id)sanitizedNameFromIdentifier:(id)arg1;
+ (id)createContainerWithSession:(id)arg1 team:(id)arg2 program:(id)arg3 identifier:(id)arg4 error:(id *)arg5;
+ (id)containersWithSession:(id)arg1 team:(id)arg2 program:(id)arg3 error:(id *)arg4;
+ (id)_addContainerServiceWithTeam:(id)arg1 program:(id)arg2 identifier:(id)arg3 name:(id)arg4 containerType:(id)arg5;
+ (id)_associateContainerServiceWithPortalIdentifiers:(id)arg1 withAppID:(id)arg2 team:(id)arg3 program:(id)arg4 containerType:(id)arg5 error:(id *)arg6;
+ (BOOL)_associateContainerIdentifiersWithAppIDWithSession:(id)arg1 portalIdentifiers:(id)arg2 withAppId:(id)arg3 team:(id)arg4 program:(id)arg5 containerType:(id)arg6 error:(id *)arg7;
+ (id)_createContainersWithIdentifiers:(id)arg1 containerType:(id)arg2 session:(id)arg3 team:(id)arg4 program:(id)arg5 error:(id *)arg6;
+ (id)_findOrCreateContainersWithIdentifiers:(id)arg1 containers:(id)arg2 containerType:(id)arg3 session:(id)arg4 team:(id)arg5 program:(id)arg6 error:(id *)arg7;
+ (id)_createContainerWithSession:(id)arg1 team:(id)arg2 program:(id)arg3 identifier:(id)arg4 containerType:(id)arg5 error:(id *)arg6;
+ (id)_listContainersServiceWithTeam:(id)arg1 program:(id)arg2 containerType:(id)arg3;
+ (id)containersWithSession:(id)arg1 team:(id)arg2 program:(id)arg3 containerType:(id)arg4 error:(id *)arg5;
@property(readonly) NSString *name; // @synthesize name=_name;
@property(readonly) NSString *portalIdentifier; // @synthesize portalIdentifier=_portalIdentifier;
@property(retain) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (BOOL)isEqual:(id)arg1;

@end

