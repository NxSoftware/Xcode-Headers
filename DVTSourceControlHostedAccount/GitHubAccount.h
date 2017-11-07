//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <DVTSourceControl/DVTSourceControlAccount.h>

@class DVTSourceControlBasicAuthenticationStrategy, DVTSourceControlSSHKeysAuthenticationStrategy, NSString, NSURL;

@interface GitHubAccount : DVTSourceControlAccount
{
    // Error parsing type: , name: otpKeychainIdentifier
    // Error parsing type: , name: cloneType
    // Error parsing type: , name: username
    // Error parsing type: , name: sshKeysAuthenticationStrategy
    // Error parsing type: , name: basicAuthenticationStrategy
    // Error parsing type: , name: _hostURL
}

+ (BOOL)supportsSecureCoding;
+ (id)DEFAULT_ACCOUNT_NAME;
+ (id)DEFAULT_PASSWORD_RESET_URL;
+ (id)DEFAULT_URL;
+ (id)DEFAULT_HOST;
- (CDUnknownBlockType).cxx_destruct;
- (id)init;
- (id)initWithName:(id)arg1 hostURL:(id)arg2 authenticationStrategy:(id)arg3;
- (id)cloneURLFor:(id)arg1;
- (BOOL)isEqual:(id)arg1;
@property(nonatomic, readonly) BOOL onDefaultHost;
@property(nonatomic, readonly) BOOL isEnterpriseAccount;
- (id)authenticationStrategyForURL:(id)arg1;
- (id)initWithUsername:(id)arg1 hostURL:(id)arg2 otpKeychainIdentifier:(id)arg3 cloneType:(long long)arg4;
- (id)initWithUsername:(id)arg1 hostURL:(id)arg2 authenticationStrategy:(id)arg3;
- (id)initWithUsername:(id)arg1 hostURL:(id)arg2 otpKeychainIdentifier:(id)arg3;
- (id)initWithUsername:(id)arg1 hostURL:(id)arg2;
- (id)initWithDictionary:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(nonatomic, readonly) NSURL *apiEndpoint;
@property(nonatomic, readonly) NSURL *hostURL;
@property(nonatomic, readonly) NSString *description;
@property(nonatomic, retain) DVTSourceControlBasicAuthenticationStrategy *basicAuthenticationStrategy; // @synthesize basicAuthenticationStrategy;
@property(nonatomic, retain) DVTSourceControlSSHKeysAuthenticationStrategy *sshKeysAuthenticationStrategy; // @synthesize sshKeysAuthenticationStrategy;
@property(nonatomic, readonly) NSString *sshUsername;
@property(nonatomic, copy) NSString *username; // @synthesize username;
@property(nonatomic, readonly) NSString *accountTypeDisplayName;
@property(nonatomic) long long cloneType; // @synthesize cloneType;
@property(nonatomic, copy) NSString *otpKeychainIdentifier; // @synthesize otpKeychainIdentifier;
- (id)dictionaryRepresentation;

@end

