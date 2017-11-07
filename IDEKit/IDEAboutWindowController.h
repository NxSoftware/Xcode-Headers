//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSWindowController.h>

#import <IDEKit/NSWindowRestoration-Protocol.h>

@class DVTFilePath, NSString, NSTextField;

@interface IDEAboutWindowController : NSWindowController <NSWindowRestoration>
{
    NSTextField *_appNameLabel;
    NSTextField *_copyrightMultilineLabel;
    NSTextField *_versionAndBuildLabel;
    NSTextField *_revisionMultilineLabel;
    NSTextField *_toolchainLabel;
    DVTFilePath *_filePathToAcknowledgments;
}

+ (void)restoreWindowWithIdentifier:(id)arg1 state:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (id)sharedAboutWindowController;
- (void).cxx_destruct;
- (void)showLicenseAgreement:(id)arg1;
- (void)showAcknowledgments:(id)arg1;
- (void)openAboutWindow:(id)arg1;
- (void)windowWillClose:(id)arg1;
- (void)windowDidLoad;
- (id)_versionString;
- (id)_toolchainString;
- (id)_copyrightAndTrademarkString;
- (id)_revisionString;
@property(readonly) DVTFilePath *filePathToLicenseAgreement;
@property(readonly) DVTFilePath *filePathToAcknowledgments;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

