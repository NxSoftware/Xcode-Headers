//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEFoundation/IDESourceControlTree.h>

#import <IDEFoundation/NSURLConnectionDelegate-Protocol.h>

@class DVTSourceControlAuthenticationStrategy, NSString, NSURL;
@protocol DVTSourceControlAccount;

@interface IDESourceControlRepository : IDESourceControlTree <NSURLConnectionDelegate>
{
    NSURL *_URL;
    BOOL _authenticated;
    BOOL _shouldRetryAuthentication;
    BOOL _representsGitSVNBridge;
    BOOL _representsXcodeServiceHostedRepository;
    BOOL _enabled;
    NSString *_remoteName;
    NSString *_root;
    BOOL _passwordIsBeingLoaded;
    BOOL _ignoreKeychain;
    id <DVTSourceControlAccount> _account;
}

+ (id)keyPathsForValuesAffectingConnectionAddress;
@property BOOL ignoreKeychain; // @synthesize ignoreKeychain=_ignoreKeychain;
@property(retain) id <DVTSourceControlAccount> account; // @synthesize account=_account;
@property(readonly) NSString *root; // @synthesize root=_root;
@property BOOL representsGitSVNBridge; // @synthesize representsGitSVNBridge=_representsGitSVNBridge;
@property BOOL shouldRetryAuthentication; // @synthesize shouldRetryAuthentication=_shouldRetryAuthentication;
@property(nonatomic) BOOL authenticated; // @synthesize authenticated=_authenticated;
- (void).cxx_destruct;
- (id)children;
@property(readonly) BOOL isRemoteDistributedRepository;
- (id)ideModelObjectTypeIdentifier;
@property(copy) NSString *remoteName;
- (BOOL)isEqual:(id)arg1;
@property(retain) DVTSourceControlAuthenticationStrategy *authenticationStrategy;
@property(retain) NSURL *URL; // @synthesize URL=_URL;
- (void)setLocation:(id)arg1;
- (void)setSourceControlExtension:(id)arg1;
- (void)setSourceControlExtension:(id)arg1 updateUserDefaults:(BOOL)arg2;
@property BOOL representsXcodeServiceHostedRepository; // @synthesize representsXcodeServiceHostedRepository=_representsXcodeServiceHostedRepository;
- (void)setEnabled:(BOOL)arg1;
- (BOOL)enabled;
- (id)dictionaryRepresentation;
- (id)initWithDictionaryRepresentation:(id)arg1 sourceControlManager:(id)arg2 error:(id *)arg3;
- (id)initWithDictionary:(id)arg1 sourceControlExtension:(id)arg2 sourceControlManager:(id)arg3;
- (id)initWithLocation:(id)arg1 sourceControlManager:(id)arg2;
- (void)primitiveInvalidate;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

