//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <IDEKit/IDEViewController.h>

#import <Xcode3UI/IDECapsuleListViewDataSource-Protocol.h>

@class DVTObservingToken, DVTStackView_ML, IDECapsuleListView, IDEProvisioningSettingsTargetEditorViewControllersManager, IDETestTargetSelectorViewController, NSString, NSView, Xcode3TargetEditor, Xcode3TargetEditorCapsuleViewController;

@interface Xcode3UnitTestTargetEditor : IDEViewController <IDECapsuleListViewDataSource>
{
    Xcode3TargetEditor *_targetViewController;
    IDECapsuleListView *_capsuleListView;
    Xcode3TargetEditorCapsuleViewController *_testTargetCapsuleViewController;
    DVTStackView_ML *_testTargetCapsuleStackView;
    NSView *_testTargetCapsuleBottomPadding;
    IDETestTargetSelectorViewController *_testTargetSelector;
    IDEProvisioningSettingsTargetEditorViewControllersManager *_provisioningSettingsTargetEditorViewControllersManager;
    DVTObservingToken *_provisioningSettingsTargetEditorViewControllersObserver;
}

@property(retain, nonatomic) DVTObservingToken *provisioningSettingsTargetEditorViewControllersObserver; // @synthesize provisioningSettingsTargetEditorViewControllersObserver=_provisioningSettingsTargetEditorViewControllersObserver;
@property(retain, nonatomic) IDEProvisioningSettingsTargetEditorViewControllersManager *provisioningSettingsTargetEditorViewControllersManager; // @synthesize provisioningSettingsTargetEditorViewControllersManager=_provisioningSettingsTargetEditorViewControllersManager;
@property(retain) IDETestTargetSelectorViewController *testTargetSelector; // @synthesize testTargetSelector=_testTargetSelector;
@property(retain) NSView *testTargetCapsuleBottomPadding; // @synthesize testTargetCapsuleBottomPadding=_testTargetCapsuleBottomPadding;
@property(retain) DVTStackView_ML *testTargetCapsuleStackView; // @synthesize testTargetCapsuleStackView=_testTargetCapsuleStackView;
@property(retain) Xcode3TargetEditorCapsuleViewController *testTargetCapsuleViewController; // @synthesize testTargetCapsuleViewController=_testTargetCapsuleViewController;
@property(retain) IDECapsuleListView *capsuleListView; // @synthesize capsuleListView=_capsuleListView;
@property(retain, nonatomic) Xcode3TargetEditor *targetViewController; // @synthesize targetViewController=_targetViewController;
- (void).cxx_destruct;
- (void)primitiveInvalidate;
- (id)capsuleListView:(id)arg1 viewControllerForRow:(long long)arg2;
- (long long)numberOfObjectsInCapsuleListView:(id)arg1;
- (void)startObservations;
- (id)subviewControllers;
@property(readonly) Xcode3TargetEditor *targetEditor;
- (void)loadView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

