//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEFoundation/IDEProjectItemModel.h>

@class NSArray;

@interface Xcode3SafariKeychainItemModel : IDEProjectItemModel
{
    NSArray *_domains;
}

@property(copy, nonatomic) NSArray *domains; // @synthesize domains=_domains;
- (void).cxx_destruct;
- (BOOL)isEnabledUsingEducatedGuess;
- (id)flightChecks;
- (id)instantiateEntitlementsFlightCheck;
- (id)defaultDomains;
- (id)defaultDomain;
- (void)_setDomains:(id)arg1 postAssignmentBlock:(CDUnknownBlockType)arg2;
- (void)modelWasDisabled;
- (void)modelWasEnabledWithContext:(id)arg1;
- (void)targetCoordinatorsChanged:(id)arg1;
- (void)readValuesFromEntitlements;
- (id)initWithCapabilitiesContext:(id)arg1 item:(id)arg2;

@end

