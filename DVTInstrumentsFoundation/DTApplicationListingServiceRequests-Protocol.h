//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <DVTInstrumentsFoundation/DTXAllowedRPC-Protocol.h>

@class NSArray, NSDictionary, NSString;

@protocol DTApplicationListingServiceRequests <DTXAllowedRPC>
- (void)unregisterUpdateToken:(NSString *)arg1;
- (NSArray *)installedApplicationsMatching:(NSDictionary *)arg1 registerUpdateToken:(NSString *)arg2;
@end

