//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSURLSessionDelegate.h"

@class NSDictionary, NSMutableURLRequest, NSString, XCSHTTPCredential, XCSService, XCSUser;

@interface XCSHTTPRequest : NSObject <NSURLSessionDelegate>
{
    BOOL _URLNeedsUpdate;
    NSString *_UUID;
    NSMutableURLRequest *_request;
    XCSService *_service;
    XCSUser *_user;
    unsigned long long _verb;
    NSString *_base;
    NSDictionary *_body;
    XCSHTTPCredential *_httpCredential;
    unsigned long long _retryCount;
}

+ (BOOL)_validateService:(id)arg1 user:(id)arg2 verb:(unsigned long long)arg3 base:(id)arg4 bodyData:(id)arg5 validationErrors:(id *)arg6;
+ (BOOL)_validateService:(id)arg1 user:(id)arg2 verb:(unsigned long long)arg3 base:(id)arg4 body:(id)arg5 validationErrors:(id *)arg6;
+ (BOOL)_validateUser:(id)arg1 request:(id)arg2 validationErrors:(id *)arg3;
+ (id)stringWithHTTPVerb:(unsigned long long)arg1;
+ (id)requestWithService:(id)arg1 user:(id)arg2 verb:(unsigned long long)arg3 base:(id)arg4 bodyData:(id)arg5 credential:(id)arg6 error:(id *)arg7;
+ (id)requestWithService:(id)arg1 user:(id)arg2 verb:(unsigned long long)arg3 base:(id)arg4 body:(id)arg5 credential:(id)arg6 error:(id *)arg7;
+ (id)requestWithService:(id)arg1 user:(id)arg2 verb:(unsigned long long)arg3 base:(id)arg4 bodyData:(id)arg5 error:(id *)arg6;
+ (id)requestWithService:(id)arg1 user:(id)arg2 verb:(unsigned long long)arg3 base:(id)arg4 body:(id)arg5 error:(id *)arg6;
+ (void)initialize;
@property BOOL URLNeedsUpdate; // @synthesize URLNeedsUpdate=_URLNeedsUpdate;
@property(nonatomic) unsigned long long retryCount; // @synthesize retryCount=_retryCount;
@property(retain, nonatomic) XCSHTTPCredential *httpCredential; // @synthesize httpCredential=_httpCredential;
@property(readonly, nonatomic) NSDictionary *body; // @synthesize body=_body;
@property(retain, nonatomic) NSString *base; // @synthesize base=_base;
@property(nonatomic) unsigned long long verb; // @synthesize verb=_verb;
@property(retain, nonatomic) XCSUser *user; // @synthesize user=_user;
@property(retain, nonatomic) XCSService *service; // @synthesize service=_service;
@property(retain, nonatomic) NSMutableURLRequest *request; // @synthesize request=_request;
@property(retain, nonatomic) NSString *UUID; // @synthesize UUID=_UUID;
- (void).cxx_destruct;
- (id)identityRefUsingKeychainPath:(id)arg1 password:(id)arg2 error:(id *)arg3;
- (id)httpCredentialWithError:(id *)arg1;
- (void)URLSession:(id)arg1 task:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)performRequestWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)addHeader:(id)arg1 value:(id)arg2;
@property(readonly, copy) NSString *description;
- (id)initWithUser:(id)arg1 request:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

