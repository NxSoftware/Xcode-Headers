//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSString;

@interface XCSKeychain : NSObject
{
    NSData *_password;
    NSString *_path;
    NSString *_sharedSecretPath;
}

@property(readonly) NSString *sharedSecretPath; // @synthesize sharedSecretPath=_sharedSecretPath;
@property(readonly) NSString *path; // @synthesize path=_path;
- (void).cxx_destruct;
- (BOOL)deleteWithError:(id *)arg1;
- (BOOL)createIfNeededWithAllowedApplications:(id)arg1 error:(id *)arg2;
@property(readonly) NSData *password; // @synthesize password=_password;
- (id)initWithPath:(id)arg1 password:(id)arg2;
- (id)initWithPath:(id)arg1 sharedSecretPath:(id)arg2;
- (id)initWithPath:(id)arg1;

@end

