//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <XCSUI/XCSLocalObject-Protocol.h>

@class NSArray, NSString;
@protocol XCSLocalServiceProtocol;

@protocol XCSLocalBotProtocol <XCSLocalObject>
@property(readonly, nonatomic) long long progressValue;
@property(readonly, nonatomic) NSString *subtitle;
@property(readonly, nonatomic) NSString *title;
@property(readonly, nonatomic) id <XCSLocalServiceProtocol> underlyingService;
- (NSArray *)fetchedIntegrations;
- (NSString *)identifier;
@end

