//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GitHubAccount, NSArray, NSString;

__attribute__((visibility("hidden")))
@interface _TtC6IDEKit24AccountSearchResultGroup : NSObject
{
    // Error parsing type: , name: account
    // Error parsing type: , name: repositorySearchResults
}

- (CDUnknownBlockType).cxx_destruct;
- (id)init;
- (BOOL)isEqual:(id)arg1;
@property(nonatomic, readonly) NSString *name;
@property(nonatomic, readonly) NSString *description;
- (id)initWithAccount:(id)arg1;
@property(nonatomic, copy) NSArray *repositorySearchResults; // @synthesize repositorySearchResults;
@property(nonatomic, retain) GitHubAccount *account; // @synthesize account;

@end

