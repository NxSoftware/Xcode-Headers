//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSString, NSURL, _TtC29DVTSourceControlHostedAccount11GitHubOwner;

@interface DVTSourceControlHostedAccount.GitHubRepo : NSObject
{
    // Error parsing type: , name: name
    // Error parsing type: , name: fullName
    // Error parsing type: , name: owner
    // Error parsing type: , name: url
    // Error parsing type: , name: httpCloneURL
    // Error parsing type: , name: sshCloneURL
    // Error parsing type: , name: watchersCount
    // Error parsing type: , name: stargazersCount
    // Error parsing type: , name: language
    // Error parsing type: , name: homepage
    // Error parsing type: , name: desc
    // Error parsing type: , name: fork
    // Error parsing type: , name: forkCount
    // Error parsing type: , name: lastPushDate
    // Error parsing type: , name: createdDate
    // Error parsing type: , name: lastUpdatedDate
}

- (CDUnknownBlockType).cxx_destruct;
- (id)init;
@property(nonatomic, readonly) NSString *description;
- (BOOL)isEqual:(id)arg1;
@property(nonatomic, readonly) NSDate *lastUpdatedDate; // @synthesize lastUpdatedDate;
@property(nonatomic, readonly) NSDate *createdDate; // @synthesize createdDate;
@property(nonatomic, readonly) NSDate *lastPushDate; // @synthesize lastPushDate;
@property(nonatomic, readonly) unsigned int forkCount; // @synthesize forkCount;
@property(nonatomic, readonly) BOOL fork; // @synthesize fork;
@property(nonatomic, readonly) NSString *desc; // @synthesize desc;
@property(nonatomic, readonly) NSString *homepage; // @synthesize homepage;
@property(nonatomic, readonly) NSString *language; // @synthesize language;
@property(nonatomic) unsigned int stargazersCount; // @synthesize stargazersCount;
@property(nonatomic, readonly) unsigned int watchersCount; // @synthesize watchersCount;
@property(nonatomic, readonly) NSURL *sshCloneURL; // @synthesize sshCloneURL;
@property(nonatomic, readonly) NSURL *httpCloneURL; // @synthesize httpCloneURL;
@property(nonatomic, readonly) NSURL *url; // @synthesize url;
@property(nonatomic, readonly) _TtC29DVTSourceControlHostedAccount11GitHubOwner *owner; // @synthesize owner;
@property(nonatomic, readonly) NSString *fullName; // @synthesize fullName;
@property(nonatomic, readonly) NSString *name; // @synthesize name;

@end

