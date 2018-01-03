//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEInterfaceBuilderCocoaTouchIntegration/IBDocumentArchiving-Protocol.h>
#import <IDEInterfaceBuilderCocoaTouchIntegration/NSCoding-Protocol.h>

@class IBCocoaTouchTargetRuntime, NSString;

@interface IBUIGestureRecognizer : NSObject <IBDocumentArchiving, NSCoding>
{
    BOOL _enabled;
    BOOL _cancelsTouchesInView;
    BOOL _delaysTouchesBegan;
    BOOL _delaysTouchesEnded;
    unsigned long long _allowedPressTypes;
    IBCocoaTouchTargetRuntime *_targetRuntime;
}

+ (void)registerMarshallingRecordHandlers;
+ (id)instantiateWithDocumentUnarchiver:(id)arg1;
+ (id)ibInstantiateForRole:(long long)arg1 withTargetRuntime:(id)arg2 documentClass:(Class)arg3 assetIdentifier:(id)arg4;
@property(retain) IBCocoaTouchTargetRuntime *targetRuntime; // @synthesize targetRuntime=_targetRuntime;
@property unsigned long long allowedPressTypes; // @synthesize allowedPressTypes=_allowedPressTypes;
@property BOOL delaysTouchesEnded; // @synthesize delaysTouchesEnded=_delaysTouchesEnded;
@property BOOL delaysTouchesBegan; // @synthesize delaysTouchesBegan=_delaysTouchesBegan;
@property BOOL cancelsTouchesInView; // @synthesize cancelsTouchesInView=_cancelsTouchesInView;
@property(getter=isEnabled) BOOL enabled; // @synthesize enabled=_enabled;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTargetRuntime:(id)arg1;
- (void)unarchiveWithDocumentUnarchiver:(id)arg1;
- (void)archiveWithDocumentArchiver:(id)arg1;
- (BOOL)showAllowedPressTypes;
- (id)ibSegueTriggers;
- (id)ibDefaultSegueTrigger;
- (void)ibSetupTriggerForSegueTemplate:(id)arg1 inCompilationUnit:(id)arg2;
- (void)ibWarnings:(id)arg1 forDocument:(id)arg2 withComputationContext:(id)arg3;
- (id)associatedView;
- (Class)classToTakeInitialMarshalledKeysFrom:(id)arg1;
- (id)runtimeClassNameForContext:(id)arg1 returningOptionalFallbackClassName:(id *)arg2;
- (id)ibPasteboardTypes;
- (id)ibLocalAttributeKeyPaths;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

