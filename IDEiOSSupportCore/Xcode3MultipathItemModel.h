//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEFoundation/IDEProjectItemModel.h>

@protocol IDEFlightChecking;

@interface Xcode3MultipathItemModel : IDEProjectItemModel
{
    id <IDEFlightChecking> _entitlementsFlightCheck;
}

@property(retain, nonatomic) id <IDEFlightChecking> entitlementsFlightCheck; // @synthesize entitlementsFlightCheck=_entitlementsFlightCheck;
- (void).cxx_destruct;
- (BOOL)isEnabledUsingEducatedGuess;
- (id)flightChecks;

@end

