//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <IDEFoundation/IDEUpgradeBlueprintContext.h>

#import <Xcode3UI/Xcode3UpgradeContext-Protocol.h>

@class NSString, Xcode3BuildSettingsContext, Xcode3Target;

@interface Xcode3UpgradeTargetContext : IDEUpgradeBlueprintContext <Xcode3UpgradeContext>
{
    Xcode3BuildSettingsContext *_buildSettings;
}

@property(readonly) Xcode3BuildSettingsContext *buildSettings; // @synthesize buildSettings=_buildSettings;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
@property(readonly) Xcode3Target *target;
- (id)initWithBlueprint:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

