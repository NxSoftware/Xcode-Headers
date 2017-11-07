//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DVTLogAspect, NSArray, NSDate, NSNumber, NSString, SFCertificateData;

@interface DVTSigningCertificate : NSObject
{
    NSNumber *_isTrusted;
    SFCertificateData *_certificateData;
    NSNumber *_isValidForCodeSigning;
    DVTLogAspect *_logAspect;
    NSString *_certificateKind;
    NSString *_trimmedName;
    NSString *_commonName;
    NSString *_portalTeamID;
    NSString *_portalTeamName;
    NSString *_portalMemberID;
    NSString *_portalTeamMemberID;
    NSDate *_issueDate;
    NSDate *_expirationDate;
    NSString *_sha1Hash;
    NSString *_serialNumber;
    id _underlyingType;
    NSArray *_keychainSearchList;
}

+ (id)serialNumberForCerificate:(struct OpaqueSecCertificateRef *)arg1;
@property(readonly) NSArray *keychainSearchList; // @synthesize keychainSearchList=_keychainSearchList;
@property(readonly) id underlyingType; // @synthesize underlyingType=_underlyingType;
@property(readonly) DVTLogAspect *logAspect; // @synthesize logAspect=_logAspect;
- (void).cxx_destruct;
- (BOOL)deleteFromKeychain:(id *)arg1;
- (id)p12DataWithPassword:(id)arg1 error:(id *)arg2;
- (id)_valueInSubjectNameSectionFromCertificate:(struct OpaqueSecCertificateRef *)arg1 forOID:(id)arg2;
- (id)_dateFromCertificate:(struct OpaqueSecCertificateRef *)arg1 forOID:(id)arg2;
- (id)certificateData;
- (id)defaultDesignatedRequirementsForIdentifier:(id)arg1;
- (id)defaultDesignatedRequirements;
@property(readonly) NSString *serialNumber; // @synthesize serialNumber=_serialNumber;
@property(readonly) NSString *sha1Hash; // @synthesize sha1Hash=_sha1Hash;
@property(readonly, getter=isForServer) BOOL forServer;
@property(readonly, getter=isExpired) BOOL expired;
@property(readonly) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
@property(readonly) NSDate *issueDate; // @synthesize issueDate=_issueDate;
- (BOOL)isValidForCodeSigning;
- (void)_installIntermediateCertificates;
- (BOOL)isIdentityOnKeychains:(id)arg1;
@property(readonly, getter=isIdentity) BOOL identity;
@property(readonly) NSString *portalMemberID; // @synthesize portalMemberID=_portalMemberID;
@property(readonly) NSString *portalTeamName; // @synthesize portalTeamName=_portalTeamName;
@property(readonly) NSString *portalTeamID; // @synthesize portalTeamID=_portalTeamID;
- (BOOL)isFromPortal;
@property(readonly) NSString *portalTeamMemberID; // @synthesize portalTeamMemberID=_portalTeamMemberID;
@property(readonly) NSString *commonName; // @synthesize commonName=_commonName;
@property(readonly) NSString *trimmedName; // @synthesize trimmedName=_trimmedName;
@property(readonly) NSString *certificateKind; // @synthesize certificateKind=_certificateKind;
- (long long)compare:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (struct OpaqueSecCertificateRef *)certificateRef;
- (id)description;
- (id)initWithUnderlyingType:(id)arg1 logAspect:(id)arg2;
- (id)initWithUnderlyingType:(id)arg1 keychainSearchList:(id)arg2 logAspect:(id)arg3;

@end

