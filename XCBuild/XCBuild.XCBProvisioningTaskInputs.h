//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSString;

@interface XCBuild.XCBProvisioningTaskInputs : NSObject
{
    // Error parsing type: , name: identityHash
    // Error parsing type: , name: identityName
    // Error parsing type: , name: profileName
    // Error parsing type: , name: profileUUID
    // Error parsing type: , name: profilePath
    // Error parsing type: , name: designatedRequirements
    // Error parsing type: , name: mergedEntitlements
    // Error parsing type: , name: provisionableExpandedEntitlements
    // Error parsing type: , name: appIdentifierPrefix
    // Error parsing type: , name: teamIdentifierPrefix
    // Error parsing type: , name: errors
    // Error parsing type: , name: warnings
}

- (CDUnknownBlockType).cxx_destruct;
- (id)initWithIdentityHash:(id)arg1 identityName:(id)arg2 profileName:(id)arg3 profileUUID:(id)arg4 profilePath:(id)arg5 designatedRequirements:(id)arg6 mergedEntitlements:(id)arg7 provisionableExpandedEntitlements:(id)arg8 appIdentifierPrefix:(id)arg9 teamIdentifierPrefix:(id)arg10 errors:(id)arg11 warnings:(id)arg12;
- (id)init;
@property(nonatomic, readonly) NSArray *warnings; // @synthesize warnings;
@property(nonatomic, readonly) NSArray *errors; // @synthesize errors;
@property(nonatomic, readonly) NSString *teamIdentifierPrefix; // @synthesize teamIdentifierPrefix;
@property(nonatomic, readonly) NSString *appIdentifierPrefix; // @synthesize appIdentifierPrefix;
@property(nonatomic, readonly) NSDictionary *provisionableExpandedEntitlements; // @synthesize provisionableExpandedEntitlements;
@property(nonatomic, readonly) NSDictionary *mergedEntitlements; // @synthesize mergedEntitlements;
@property(nonatomic, readonly) NSString *designatedRequirements; // @synthesize designatedRequirements;
@property(nonatomic, readonly) NSString *profilePath; // @synthesize profilePath;
@property(nonatomic, readonly) NSString *profileUUID; // @synthesize profileUUID;
@property(nonatomic, readonly) NSString *profileName; // @synthesize profileName;
@property(nonatomic, readonly) NSString *identityName; // @synthesize identityName;
@property(nonatomic, readonly) NSString *identityHash; // @synthesize identityHash;

@end

