//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GitHubAccount, _TtC29DVTSourceControlHostedAccount10GitHubRepo;

@interface IDEKit.RepoSearchResult : NSObject
{
    // Error parsing type: , name: representedObject
    // Error parsing type: , name: account
    // Error parsing type: , name: isStarred
}

- (CDUnknownBlockType).cxx_destruct;
- (id)init;
- (id)initWithRepo:(id)arg1 account:(id)arg2 isStarred:(BOOL)arg3;
@property(nonatomic) BOOL isStarred; // @synthesize isStarred;
@property(nonatomic, retain) GitHubAccount *account; // @synthesize account;
@property(nonatomic, retain) _TtC29DVTSourceControlHostedAccount10GitHubRepo *representedObject; // @synthesize representedObject;
- (BOOL)isEqual:(id)arg1;

@end

