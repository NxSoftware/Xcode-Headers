//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Xcode3UI/Xcode3UpgradeProjectTask.h>

@class NSString;

@interface Xcode3UpgradeSwiftOptimization : Xcode3UpgradeProjectTask
{
    int _upgradeKind;
    NSString *_configurationName;
}

+ (id)analyzeInContext:(id)arg1;
@property int upgradeKind; // @synthesize upgradeKind=_upgradeKind;
@property(copy) NSString *configurationName; // @synthesize configurationName=_configurationName;
- (void).cxx_destruct;
- (BOOL)upgrade;
- (id)initWithTitle:(id)arg1 subtitle:(id)arg2 context:(id)arg3 configurationName:(id)arg4 upgradeKind:(int)arg5;

@end

