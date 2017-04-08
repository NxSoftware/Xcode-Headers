//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IBDocumentArchiving.h"
#import "NSCoding.h"

@class IBNSViewController, NSCustomTouchBarItem, NSLayoutConstraint, NSString;

@interface IBNSTouchBarItem : NSObject <IBDocumentArchiving, NSCoding>
{
    BOOL _encodeAsRuntimeInstance;
    NSCustomTouchBarItem *_runtimeTouchBarItem;
    float _visibilityPriority;
    IBNSViewController *_viewController;
    NSString *_identifier;
    NSString *_customizationLabel;
    NSLayoutConstraint *_designTimeWidthConstraint;
    NSLayoutConstraint *_designTimeHeightConstraint;
    struct CGSize _designTimeSize;
}

+ (id)instantiateWithDocumentUnarchiver:(id)arg1;
+ (id)keyPathsForValuesAffectingIbIsInspectedPrincipalItem;
+ (id)ibDefaultImageForInstance:(id)arg1 targetRuntime:(id)arg2;
+ (id)ibInstantiateForRole:(long long)arg1 withTargetRuntime:(id)arg2 documentClass:(Class)arg3 assetIdentifier:(id)arg4;
@property(retain, nonatomic) NSLayoutConstraint *designTimeHeightConstraint; // @synthesize designTimeHeightConstraint=_designTimeHeightConstraint;
@property(retain, nonatomic) NSLayoutConstraint *designTimeWidthConstraint; // @synthesize designTimeWidthConstraint=_designTimeWidthConstraint;
@property struct CGSize designTimeSize; // @synthesize designTimeSize=_designTimeSize;
@property(retain) NSString *customizationLabel; // @synthesize customizationLabel=_customizationLabel;
@property float visibilityPriority; // @synthesize visibilityPriority=_visibilityPriority;
@property(retain) NSString *identifier; // @synthesize identifier=_identifier;
@property(retain) IBNSViewController *viewController; // @synthesize viewController=_viewController;
- (void).cxx_destruct;
- (BOOL)isSpace;
- (id)childTouchBar;
- (id)runtimeTouchBarItem;
- (id)placeholderIdentifier;
- (void)updateDesignTimeConstraints;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (Class)classForDocumentArchiver:(id)arg1;
- (Class)classForCoder;
- (void)unarchiveWithDocumentUnarchiver:(id)arg1;
- (void)archiveWithDocumentArchiver:(id)arg1;
- (void)ibPrepareToBackwardsDeployToOSVersion:(id)arg1 inDocument:(id)arg2;
@property BOOL ibIsInspectedPrincipalItem;
- (BOOL)child:(id)arg1 canHostTouchBarInDocument:(id)arg2;
- (BOOL)ibShouldChildViewControllerSeparateItsViewDuringCompilation:(id)arg1;
- (BOOL)ibShouldChildViewControllerAllowRemovalOfView:(id)arg1;
- (BOOL)ibShouldChildViewControllerAllowViewResize;
- (BOOL)ibShouldChildViewControllerAllowEditWithSingleClick:(id)arg1;
- (BOOL)ibInspectedCustomizationLabelIsVisible;
- (BOOL)ibInspectedIdentifierIsVisible;
- (BOOL)ibIsChildArbitrationUnitRoot:(id)arg1;
- (BOOL)ibCanRemoveChildren:(id)arg1;
- (BOOL)ibDescendantViewHasCustomLayoutButAllowsExplicitSizeConstraints:(id)arg1;
- (BOOL)ibDescendantAutolayoutItem:(id)arg1 hasOwnedSizeLayoutInDocument:(id)arg2;
- (id)ibHitTestingView;
- (void)ibSetupTriggerForSegueTemplate:(id)arg1 inCompilationUnit:(id)arg2;
- (id)ibSegueTriggers;
- (id)ibDefaultSegueTrigger;
- (BOOL)ibChildView:(id)arg1 shouldUseConstraintsInsteadOfAutoresizingWhenAddedToDocument:(id)arg2;
- (void)drawTouchBarPlaceholderInRect:(struct CGRect)arg1;
- (BOOL)touchBarItemDrawsPlaceholder;
- (id)ibMutuallyExclusiveItemsFromItems:(id)arg1;
- (void)ibPrepareCocoaDocumentForCompiling:(id)arg1 withContext:(id)arg2;
- (void)ibPopulateChildRelationOrder:(id)arg1;
- (void)ibPopulateWithLabelAffectingObjects:(id)arg1;
- (id)ibTypeNameForDefaultLabel;
- (id)ibTouchBarItemDefaultDragImage;
- (id)ibTouchBarItemDefaultDragImageName;
- (id)ibTouchBarItemDefaultImage;
- (id)ibPasteboardTypes;
- (id)ibLocalAttributeKeyPaths;
- (id)ibLocalChildToOneRelationshipsKeyPaths;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

