//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <DVTSourceControlHostedAccount/DVTSourceControlHostedAccount.ServicesContext.h>

@class NSDictionary, NSString;

@interface DVTSourceControlHostedAccount.GitHubSearchReposRequest : DVTSourceControlHostedAccount.ServicesContext
{
    // Error parsing type: , name: query
}

- (CDUnknownBlockType).cxx_destruct;
- (id)initWithAccount:(id)arg1;
- (id)initWithAccount:(id)arg1 query:(id)arg2;
@property(nonatomic, readonly) NSDictionary *parameters;
@property(nonatomic, readonly) long long pageLimit;
@property(nonatomic, readonly) long long resultsPerPage;
@property(nonatomic, readonly) NSString *endpoint;

@end

