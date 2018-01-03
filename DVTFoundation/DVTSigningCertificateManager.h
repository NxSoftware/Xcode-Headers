//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DVTFoundation/DVTInvalidation-Protocol.h>
#import <DVTFoundation/DVTSigningCertificateSourceDelegate-Protocol.h>

@class DVTDispatchLock, DVTSigningCertificateSource, DVTStackBacktrace, NSMutableSet, NSSet, NSString;

@interface DVTSigningCertificateManager : NSObject <DVTSigningCertificateSourceDelegate, DVTInvalidation>
{
    DVTDispatchLock *_certificateLock;
    NSMutableSet *_signingCertificates;
    BOOL _areCertificatesLoaded;
    DVTSigningCertificateSource *_certificateSource;
}

+ (id)defaultCertificateManager;
+ (void)initialize;
@property(retain) DVTSigningCertificateSource *certificateSource; // @synthesize certificateSource=_certificateSource;
@property BOOL areCertificatesLoaded; // @synthesize areCertificatesLoaded=_areCertificatesLoaded;
- (void).cxx_destruct;
- (void)_delayedPostCertificatesChangedNotification;
- (void)forceFullSyncWithCallback:(CDUnknownBlockType)arg1;
- (void)forceFullSync;
- (void)signingCertificateSourceShouldDoFullResetFromSigningCertificates:(id)arg1;
- (void)signingCertificateSourcePrivateKeyStatusForCertificatesMayHaveChanged:(id)arg1;
- (void)signingCertificateSource:(id)arg1 didRemoveCertificate:(id)arg2;
- (void)signingCertificateSource:(id)arg1 didAddCertificate:(id)arg2;
- (id)signingCertificateFromDataObject:(id)arg1;
- (BOOL)isCertificateAnIdentity:(id)arg1;
- (BOOL)installCertificate:(id)arg1 privateKey:(struct OpaqueSecKeyRef *)arg2 keyName:(id)arg3 error:(id *)arg4;
- (id)keychainSearchList;
@property(readonly) NSSet *signingCertificates;
- (id)logAspect;
@property(readonly, copy) NSString *description;
- (void)primitiveInvalidate;
- (id)initWithCertificateSource:(id)arg1;
- (id)init;
- (BOOL)_legacy_installPrivateKey:(struct OpaqueSecKeyRef *)arg1 privateKeyName:(id)arg2 error:(id *)arg3;
- (BOOL)_legacy_installCertificate:(id)arg1 error:(id *)arg2;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

