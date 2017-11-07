//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <DVTKit/DVTTutorialController.h>

@class DVTDeveloperAccount, DVTDevice, NSArray, NSString;

@interface DVTOnboardingTutorialController : DVTTutorialController
{
    NSArray *_developerTeams;
    DVTDevice *_selectedDeviceForSetup;
    DVTDeveloperAccount *_accountForSetup;
    NSString *_teamID;
}

@property(retain, nonatomic) NSString *teamID; // @synthesize teamID=_teamID;
@property(retain, nonatomic) DVTDeveloperAccount *accountForSetup; // @synthesize accountForSetup=_accountForSetup;
@property(nonatomic) __weak DVTDevice *selectedDeviceForSetup; // @synthesize selectedDeviceForSetup=_selectedDeviceForSetup;
- (void).cxx_destruct;
- (id)developerTeamsForAccount;
- (id)_devicesForPlatforms:(id)arg1;
- (id)pageController:(id)arg1 viewControllerForIdentifier:(id)arg2;
- (id)identifierForPageController;
- (void)restartTutorial;
- (void)nextPage;
- (BOOL)currentPageShouldEnableNextButton;
- (id)identifiersForPagesInStoryboard;
- (id)devices;
- (id)init;

@end

