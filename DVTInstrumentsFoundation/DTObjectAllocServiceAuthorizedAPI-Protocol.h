//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <DVTInstrumentsFoundation/DTXAllowedRPC-Protocol.h>

@class NSDictionary, NSNumber;

@protocol DTObjectAllocServiceAuthorizedAPI <DTXAllowedRPC>
- (void)stopCollection;
- (void)startCollectionWithPid:(int)arg1;
- (NSNumber *)attachToPid:(NSNumber *)arg1 eventsMask:(NSNumber *)arg2;
- (NSDictionary *)preparedEnvironmentForLaunch:(NSDictionary *)arg1 eventsMask:(NSNumber *)arg2;
@end

