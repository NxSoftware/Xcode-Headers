//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <IDEFoundation/NSObject-Protocol.h>

@class DVTSourceControlRemoteRepository, NSDictionary, NSString;

@protocol DVTSourceControlFingerprintManager <NSObject>
- (NSString *)existingFingerprintForRepository:(DVTSourceControlRemoteRepository *)arg1;
- (void)addKnownHost:(NSString *)arg1 fingerprint:(NSString *)arg2;
- (void)loadKnownHostsFromDictionary:(NSDictionary *)arg1;
- (NSString *)existingFingerprintForHost:(NSString *)arg1;
@end

