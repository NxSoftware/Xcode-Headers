//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DVTDispatchLock, NSMutableDictionary;

@interface DVTITunesConnectAuthenticationContextStore : NSObject
{
    NSMutableDictionary *_usernameToContext;
    DVTDispatchLock *_lock;
}

+ (id)defaultStore;
- (void).cxx_destruct;
- (void)setContext:(id)arg1 forUsername:(id)arg2;
- (id)contextForUsername:(id)arg1;

@end

