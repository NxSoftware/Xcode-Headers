//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DVTSourceControlAccount, NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface _TtC29DVTSourceControlHostedAccount15ServicesContext : NSObject
{
    // Error parsing type: , name: account
    // Error parsing type: , name: executor
    // Error parsing type: , name: session
    // Error parsing type: , name: suppressAuthenticationFailure
    // Error parsing type: , name: context
}

- (CDUnknownBlockType).cxx_destruct;
- (id)init;
@property(nonatomic) __weak id context; // @synthesize context;
@property(nonatomic) BOOL suppressAuthenticationFailure; // @synthesize suppressAuthenticationFailure;
@property(nonatomic, readonly) BOOL isCancelled;
- (void)cancel;
- (id)initWithAccount:(id)arg1;
@property(nonatomic, readonly) NSDictionary *body;
@property(nonatomic, readonly) NSDictionary *headerProperties;
@property(nonatomic, readonly) NSDictionary *parameters;
@property(nonatomic, readonly) long long pageLimit;
@property(nonatomic, readonly) long long resultsPerPage;
@property(nonatomic, readonly) NSString *endpoint;
@property(nonatomic, retain) DVTSourceControlAccount *account; // @synthesize account;

@end

