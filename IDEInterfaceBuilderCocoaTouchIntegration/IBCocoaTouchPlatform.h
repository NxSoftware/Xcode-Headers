//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IBPlatform.h"

@interface IBCocoaTouchPlatform : IBPlatform
{
}

+ (BOOL)supportsFocusEngine;
+ (BOOL)supportsAllowedPressTypes;
+ (BOOL)supportsSceneUpdates;
+ (id)targetRuntimes;
+ (Class)idiomClass;
+ (id)targetRuntimeWithIdentifier:(id)arg1;
- (BOOL)isTextStyleHidden:(id)arg1;
- (BOOL)shouldUIVisualEffectViewAllowExtraDarkBlurEffectStyle;
- (long long)defaultUIVisualEffectViewBlurEffectStyle;
- (int)defaultUITableViewCellSeparatorStyle;
- (double)defaultUITableViewSectionHeaderFooterHeightForStyle:(int)arg1;
- (double)defaultUITableViewRowHeightForCellStyle:(int)arg1;
- (BOOL)defaultUICollectionViewPrefetchingEnabled;
- (id)defaultBackgroundColorForUIViewClass:(Class)arg1;
- (id)defaultUILabelFont;
- (id)defaultFontForUIButtonType:(int)arg1;
- (unsigned long long)preferredActionEventTypeForUIButton;
- (id)minimumLayoutSizeForWidget:(id)arg1;
- (BOOL)supportsBlackBarsForSimulationMetrics;
- (BOOL)isTabBarOnTop;
- (BOOL)supportsNavigationBarWithPrompts;
- (BOOL)supportsPresentationSizeMetrics;
- (BOOL)supportsBottomBarMetrics;
- (BOOL)supportsStatusBarMetrics;
- (BOOL)acceptsPasteboardContentsFromPlatform:(id)arg1;
- (Class)renderingProcessingRequestClass;
- (BOOL)validateBuildEnvironment:(id *)arg1;
- (Class)documentDesignablesDispatcherClass;
- (BOOL)supportsLaunchScreen;
- (unsigned long long)applicableTraits;
- (id)configurationForTraitCollection:(id)arg1;
- (id)traitCollectionForConfiguration:(id)arg1;
- (id)systemNamesToGenericColorsMapResourceNameForTargetRuntime:(id)arg1;
- (id)runtimeConfigurableConstraintConstantKeyPath;
- (id)archiveKeyForUsesConfigurations;
- (Class)previewGeniusResultsItemGroupClass;
- (BOOL)supportPerConfigurationProperties;
- (id)validateVersion:(id)arg1 forCompilingDocument:(id)arg2;
- (id)infoPlistDesignatedEntryPointIdentifierKey;
- (id)infoPlistPackageVersionKey;
- (id)infoPlistReferencedBundleIdentifierKey;
- (id)infoPlistReferencedStoryboardNameKey;
- (id)infoPlistReferencedControllerIdentifierKey;
- (id)infoPlistViewControllerIdentifierToExternalStoryboardReferenceMapKey;
- (id)infoPlistViewControllerIdentifierToNibNameMapKey;
- (id)xibPackageContentFileNames;
- (id)storyboardPackageContentFileNames;
- (id)typeIdentifierForPreservingContentsWhenWritingDocument;
- (id)xibHybridPackageType;
- (id)xibHybridPackageEditableDocumentFilename;
- (id)xibPreferredFileType;
- (Class)userDefinedRuntimeAttributesPlaceholderClass;
- (void)fontsObserverInvalidated;
- (void)notifyObjectsFontsDidChange:(id)arg1;
- (void)unregisterCustomFontsWithURLs:(id)arg1;
- (void)registerCustomFontsWithURLs:(id)arg1;
- (Class)resourceManagerClass;
- (void)populateGlobalEntryPointIndicators:(id)arg1 withTargetRuntime:(id)arg2;
- (void)updateDefaultSimulatedMetricsAfterChangingTargetRuntimeForDocument:(id)arg1;
- (Class)externalPrimarySceneObjectClass;
- (Class)simulatedMetricsContainerClass;
- (id)segueTemplateToControllerKeyPath;
- (id)defaultStoryboardSegueClassName;
- (id)sanitizedVersion:(id)arg1 forDocumentDependency:(id)arg2;
- (void)documentDidUpgradeDevelopmentTarget:(id)arg1;
- (id)messageForUpgradingFromXcode4;
- (Class)autolayoutFrameDecisionDriverClass;
- (Class)arbitrationUnitClass;
- (long long)autolayoutMinSystemVersion;
- (BOOL)connectToSourceCodeShouldReleaseInstanceVariables;
- (BOOL)connectToSourceCodeShouldInsertNonAtomicProperties;
- (Class)fallbackSegueClassForUnknownSegueKind;
- (id)addCustomObjectOfExternalClass:(id)arg1 toParent:(id)arg2 inDocument:(id)arg3;
- (Class)actionConnectionClass;
- (long long)defaultStorageTypeForMRROutlets;
- (id)firstOSVersionWithWeakReferences;
- (id)bonusedClassNamesForGeniusOrdering;
- (id)penalizedClassNamesForGeniusOrdering;
- (id)xibFirstResponderMemberID;
- (id)xibFilesOwnerMemberID;
- (void)document:(id)arg1 didChangeTargetRuntimeWithContext:(id)arg2;
- (void)document:(id)arg1 willChangeTargetRuntimeWithContext:(id)arg2;
- (void)finishChangingTargetRuntimeForDocument:(id)arg1;
- (long long)allSystemsTarget;
- (id)defaultTargetRuntimeForArchiving;
- (id)defaultTargetRuntime;
- (Class)targetRuntimeClass;
- (id)targetRuntimeWithArchiveIdentifier:(id)arg1 variantIdentifier:(id)arg2;
- (BOOL)shouldOpenDocument:(id)arg1 error:(id *)arg2;
- (id)systemDocumentDependency;
- (id)interfaceBuilderDocumentDependency;
- (id)deploymentVersionBuildSetting;
- (id)buildSystemPlatformIdentifier;
- (id)buildSystemPlatformName;
- (Class)documentPlatformAdapterClass;
- (id)identifier;

@end

