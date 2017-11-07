//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface XCSKeychainSupportiOS : NSObject
{
    NSString *_serviceName;
    NSString *_username;
    NSString *_password;
}

@property(copy) NSString *password; // @synthesize password=_password;
@property(copy) NSString *username; // @synthesize username=_username;
@property(copy) NSString *serviceName; // @synthesize serviceName=_serviceName;
- (void).cxx_destruct;
- (BOOL)removeFromKeychainWithError:(id *)arg1;
- (BOOL)saveToKeychainWithError:(id *)arg1;
- (BOOL)reloadFromKeychainWithError:(id *)arg1;
- (id)keychainIdentifier;
- (id)initWithServiceName:(id)arg1;

@end

