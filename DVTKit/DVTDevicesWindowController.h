//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSWindowController.h>

#import <DVTKit/NSMenuDelegate-Protocol.h>
#import <DVTKit/NSToolbarDelegate-Protocol.h>
#import <DVTKit/NSWindowDelegate-Protocol.h>

@class DVTDeviceProvisioningProfilesSheetController, DVTOnboardingTutorialController, NSSet, NSString, NSWindow;

@interface DVTDevicesWindowController : NSWindowController <NSToolbarDelegate, NSMenuDelegate, NSWindowDelegate>
{
    DVTDeviceProvisioningProfilesSheetController *_provisioningProfilesSheet;
    NSWindow *_tutorialWindow;
    DVTOnboardingTutorialController *_tutorialController;
}

+ (id)sharedDevicesWindowController;
@property(retain) DVTOnboardingTutorialController *tutorialController; // @synthesize tutorialController=_tutorialController;
@property(retain) NSWindow *tutorialWindow; // @synthesize tutorialWindow=_tutorialWindow;
- (void).cxx_destruct;
- (void)changeMode:(long long)arg1;
- (id)toolbar:(id)arg1 itemForItemIdentifier:(id)arg2 willBeInsertedIntoToolbar:(BOOL)arg3;
- (id)toolbarDefaultItemIdentifiers:(id)arg1;
- (void)showProvisioningProfiles:(id)arg1;
@property(readonly) NSSet *supportedFileDataTypeIdentifiers;
- (id)_provisioningProfileTypeIdentifers;
- (void)beginOnboardingTutorialSheet;
- (BOOL)openFileURL:(id)arg1 withFileType:(id)arg2 error:(id *)arg3;
- (void)windowWillClose:(id)arg1;
- (void)showWindow:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

