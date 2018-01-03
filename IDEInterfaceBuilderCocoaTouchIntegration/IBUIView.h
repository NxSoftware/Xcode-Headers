//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEInterfaceBuilderKit/IBRemoteView.h>

#import <IDEInterfaceBuilderCocoaTouchIntegration/IBDocumentArchiving-Protocol.h>
#import <IDEInterfaceBuilderCocoaTouchIntegration/IBIDEUIViewControllerAutolayoutGuideDelegate-Protocol.h>
#import <IDEInterfaceBuilderCocoaTouchIntegration/IBSceneUpdateRequestConfiguring-Protocol.h>
#import <IDEInterfaceBuilderCocoaTouchIntegration/IBUIInstantiatedView-Protocol.h>
#import <IDEInterfaceBuilderCocoaTouchIntegration/IBUISimulatedMetricsExtendedEdgeProvider-Protocol.h>
#import <IDEInterfaceBuilderCocoaTouchIntegration/IBUISimulatedMetricsIntegratedObject-Protocol.h>
#import <IDEInterfaceBuilderCocoaTouchIntegration/IBUISimulatedMetricsObject-Protocol.h>
#import <IDEInterfaceBuilderCocoaTouchIntegration/IBUIViewAutolayoutGuideDelegate-Protocol.h>
#import <IDEInterfaceBuilderCocoaTouchIntegration/IBUIViewControllerAutolayoutGuideDelegate-Protocol.h>

@class IBCocoaTouchTargetRuntime, IBDirectionalEdgeInsetsWrapper, IBEdgeInsetsWrapper, IBUIAccessibilityConfiguration, IBUIEditorMetrics, IBUISimulatedBarMetrics, IBUISimulatedMetricsContainer, IBUISimulatedOrientationMetrics, IBUISimulatedSizeMetrics, IBUISimulatedStatusBarMetrics, IBUIStoryboardPreviewingSegueTemplateStorage, IBUIViewAutolayoutGuide, IBUIViewController, NSArray, NSColor, NSDictionary, NSNumber, NSString, NSValue;

@interface IBUIView : IBRemoteView <IBDocumentArchiving, IBUIInstantiatedView, IBUISimulatedMetricsExtendedEdgeProvider, IBUISimulatedMetricsIntegratedObject, IBIDEUIViewControllerAutolayoutGuideDelegate, IBUIViewControllerAutolayoutGuideDelegate, IBUIViewAutolayoutGuideDelegate, IBUISimulatedMetricsObject, IBSceneUpdateRequestConfiguring>
{
    CDStruct_c519178c _ibInsetForRuntimeToggle;
    NSColor *_backgroundColorAsRenderedByDevice;
    long long _tag;
    BOOL _needsLayout;
    BOOL _needsGeometry;
    IBUIEditorMetrics *_cachedEditorMetrics;
    NSArray *_cachedBaselines;
    NSValue *_cachedFrameworkLayoutInset;
    NSValue *_cachedIntrinsicContentSize;
    NSNumber *_cachedBaselineOffsetFromBottom;
    NSNumber *_cachedFirstBaselineOffsetFromTop;
    NSValue *_cachedLayoutMargins;
    NSNumber *_cachedBackgroundAlphaComponent;
    struct CGSize _previousFrameSize;
    NSArray *_cachedGeometryInfos;
    NSDictionary *_cachedGeometryForPreviousFrameSize;
    BOOL _autoresizesSubviewsForDevice;
    BOOL _clearsContextBeforeDrawing;
    BOOL _clipsToBounds;
    BOOL _opaqueForDevice;
    BOOL _multipleTouchEnabled;
    BOOL _userInteractionEnabled;
    BOOL _preservesSuperviewLayoutMargins;
    BOOL _layoutMarginsFollowReadableWidth;
    BOOL _insetsLayoutMarginsFromSafeArea;
    int _contentMode;
    IBUISimulatedBarMetrics *_simulatedBottomBarMetrics;
    IBUISimulatedBarMetrics *_simulatedTopBarMetrics;
    IBUISimulatedStatusBarMetrics *_simulatedStatusBarMetrics;
    IBUISimulatedOrientationMetrics *_simulatedOrientationMetrics;
    IBUISimulatedSizeMetrics *_simulatedDestinationMetrics;
    IBCocoaTouchTargetRuntime *_targetRuntime;
    NSString *_restorationIdentifier;
    NSColor *_explicitTintColor;
    IBUISimulatedMetricsContainer *_inheritedSimulatedMetrics;
    NSColor *_backgroundColor;
    double _alpha;
    long long _semanticContentAttribute;
    IBEdgeInsetsWrapper *_explicitLayoutMargins;
    IBDirectionalEdgeInsetsWrapper *_explicitDirectionalLayoutMargins;
    IBUIAccessibilityConfiguration *_accessibilityConfiguration;
    NSArray *_gestureRecognizers;
    IBUIViewAutolayoutGuide *_safeAreaLayoutGuide;
    unsigned long long _simulatedAppContext;
    IBUIViewController *_viewController;
    IBUIStoryboardPreviewingSegueTemplateStorage *_previewingSegueTemplateStorage;
    NSArray *_ibViewControllerLayoutGuides;
    struct CGRect _contentStretch;
}

+ (void)registerMarshallingRecordHandlers;
+ (id)keyPathsForValuesAffectingIbLayoutMargins;
+ (id)keyPathsForValuesAffectingEffectiveTintColor;
+ (id)keyPathsForValuesAffectingInheritedTintColor;
+ (BOOL)shouldArchiveTintColorWithUIViewProperties;
+ (BOOL)ibSupportsCocoaTouchAccessibility;
+ (id)instantiateWithDocumentUnarchiver:(id)arg1;
+ (id)keyPathsForValuesAffectingInspectedContentStretch_size_height;
+ (id)keyPathsForValuesAffectingInspectedContentStretch_size_width;
+ (id)keyPathsForValuesAffectingInspectedContentStretch_origin_y;
+ (id)keyPathsForValuesAffectingInspectedContentStretch_origin_x;
+ (unsigned long long)ibDefaultAutoresizingMaskForViewsUsingConstraints;
+ (id)keyPathsForValuesAffectingIbInspectedDeltaHeightForRuntimeToggle;
+ (id)keyPathsForValuesAffectingIbInspectedDeltaYForRuntimeToggle;
+ (id)keyPathsForValuesAffectingIbInspectedDeltaWidthForRuntimeToggle;
+ (id)keyPathsForValuesAffectingIbInspectedDeltaXForRuntimeToggle;
+ (id)keyPathsForValuesAffectingIbInspectedDefaultTintColor;
+ (void)ibPopulateAdditionalInspectors:(id)arg1 forCategory:(id)arg2;
+ (id)ibLayoutMetrics;
+ (id)keyPathsForValuesAffectingIbInspectedExplicitLayoutMarginsBehavior;
+ (id)keyPathsForValuesAffectingIbInspectedAutoresizesSubviewsForDevice;
+ (id)keyPathsForValuesAffectingIbInspectedUseSafeAreaLayoutGuide;
+ (id)ibSimulatedMetricsKeyPathsAffectingEditorView;
+ (void)ibDidInstantiateView:(id)arg1 forAsset:(id)arg2 role:(long long)arg3;
+ (void)ibDidInstantiateForObject:(id)arg1 forAsset:(id)arg2 role:(long long)arg3;
+ (id)ibInstantiateForRole:(long long)arg1 withTargetRuntime:(id)arg2 documentClass:(Class)arg3 assetIdentifier:(id)arg4;
+ (id)ibInstantiateViewForRole:(long long)arg1 withTargetRuntime:(id)arg2 documentClass:(Class)arg3 assetIdentifier:(id)arg4;
+ (long long)ibInstantiationSizeBehavior;
@property(copy, nonatomic) NSArray *ibViewControllerLayoutGuides; // @synthesize ibViewControllerLayoutGuides=_ibViewControllerLayoutGuides;
@property(retain, nonatomic) IBUIStoryboardPreviewingSegueTemplateStorage *previewingSegueTemplateStorage; // @synthesize previewingSegueTemplateStorage=_previewingSegueTemplateStorage;
@property(nonatomic) __weak IBUIViewController *viewController; // @synthesize viewController=_viewController;
@property(nonatomic) unsigned long long simulatedAppContext; // @synthesize simulatedAppContext=_simulatedAppContext;
@property(retain, nonatomic) IBUIViewAutolayoutGuide *safeAreaLayoutGuide; // @synthesize safeAreaLayoutGuide=_safeAreaLayoutGuide;
@property(retain, nonatomic) NSArray *gestureRecognizers; // @synthesize gestureRecognizers=_gestureRecognizers;
@property(retain, nonatomic) IBUIAccessibilityConfiguration *accessibilityConfiguration; // @synthesize accessibilityConfiguration=_accessibilityConfiguration;
@property(nonatomic) struct CGRect contentStretch; // @synthesize contentStretch=_contentStretch;
@property(nonatomic) BOOL insetsLayoutMarginsFromSafeArea; // @synthesize insetsLayoutMarginsFromSafeArea=_insetsLayoutMarginsFromSafeArea;
@property(nonatomic) BOOL layoutMarginsFollowReadableWidth; // @synthesize layoutMarginsFollowReadableWidth=_layoutMarginsFollowReadableWidth;
@property(nonatomic) BOOL preservesSuperviewLayoutMargins; // @synthesize preservesSuperviewLayoutMargins=_preservesSuperviewLayoutMargins;
@property(retain, nonatomic) IBDirectionalEdgeInsetsWrapper *explicitDirectionalLayoutMargins; // @synthesize explicitDirectionalLayoutMargins=_explicitDirectionalLayoutMargins;
@property(retain, nonatomic) IBEdgeInsetsWrapper *explicitLayoutMargins; // @synthesize explicitLayoutMargins=_explicitLayoutMargins;
@property(nonatomic, getter=isUserInteractionEnabled) BOOL userInteractionEnabled; // @synthesize userInteractionEnabled=_userInteractionEnabled;
@property(nonatomic, getter=isMultipleTouchEnabled) BOOL multipleTouchEnabled; // @synthesize multipleTouchEnabled=_multipleTouchEnabled;
@property(nonatomic, getter=isOpaqueForDevice) BOOL opaqueForDevice; // @synthesize opaqueForDevice=_opaqueForDevice;
@property(nonatomic) long long semanticContentAttribute; // @synthesize semanticContentAttribute=_semanticContentAttribute;
@property(nonatomic) int contentMode; // @synthesize contentMode=_contentMode;
@property(nonatomic) BOOL clipsToBounds; // @synthesize clipsToBounds=_clipsToBounds;
@property(nonatomic) BOOL clearsContextBeforeDrawing; // @synthesize clearsContextBeforeDrawing=_clearsContextBeforeDrawing;
@property(nonatomic) BOOL autoresizesSubviewsForDevice; // @synthesize autoresizesSubviewsForDevice=_autoresizesSubviewsForDevice;
@property(nonatomic) double alpha; // @synthesize alpha=_alpha;
@property(retain, nonatomic) NSColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(retain, nonatomic) IBUISimulatedMetricsContainer *inheritedSimulatedMetrics; // @synthesize inheritedSimulatedMetrics=_inheritedSimulatedMetrics;
@property(copy, nonatomic) NSColor *explicitTintColor; // @synthesize explicitTintColor=_explicitTintColor;
@property(copy) NSString *restorationIdentifier; // @synthesize restorationIdentifier=_restorationIdentifier;
@property(readonly, nonatomic) IBCocoaTouchTargetRuntime *targetRuntime; // @synthesize targetRuntime=_targetRuntime;
@property(copy) IBUISimulatedSizeMetrics *simulatedDestinationMetrics; // @synthesize simulatedDestinationMetrics=_simulatedDestinationMetrics;
@property(copy) IBUISimulatedOrientationMetrics *simulatedOrientationMetrics; // @synthesize simulatedOrientationMetrics=_simulatedOrientationMetrics;
@property(copy) IBUISimulatedStatusBarMetrics *simulatedStatusBarMetrics; // @synthesize simulatedStatusBarMetrics=_simulatedStatusBarMetrics;
@property(copy) IBUISimulatedBarMetrics *simulatedTopBarMetrics; // @synthesize simulatedTopBarMetrics=_simulatedTopBarMetrics;
@property(copy) IBUISimulatedBarMetrics *simulatedBottomBarMetrics; // @synthesize simulatedBottomBarMetrics=_simulatedBottomBarMetrics;
- (void).cxx_destruct;
- (void)_addEditorMetricsRequestToProcessingRequestGroup:(id)arg1;
- (void)configureIncrementalSceneUpdateRequest:(id)arg1;
- (void)configureFullSceneUpdateRequest:(id)arg1;
- (void)ibDocumentDidChangeUserDefinedRuntimeAttributesInNonUndoableWay;
- (void)setIbExternalUserDefinedRuntimeAttributes:(id)arg1;
- (void)liveViewsBundleDidFinishBuilding:(id)arg1 error:(id)arg2;
- (void)setLiveViewsBundle:(id)arg1;
- (id)ibEffectiveParentItemForReferencingConstraintTraversalOfViewLayoutGuide:(id)arg1;
- (id)ibContainingItemForViewLayoutGuide:(id)arg1;
- (id)ibEffectiveParentItemForReferencingConstraintTraversalOfAutolayoutGuide:(id)arg1;
- (struct CGRect)ibFrameForAutolayoutGuide:(id)arg1;
- (id)ibContainingItemForAutolayoutGuide:(id)arg1;
- (struct CGSize)intrinsicFrameSizeForRuntime:(id)arg1;
- (void)ibInvalidatePlaceholderBackground;
- (void)requestGeometryIfNeeded;
- (struct NSDirectionalEdgeInsets)defaultDirectionalLayoutMargins;
- (struct NSEdgeInsets)defaultLayoutMargins;
- (BOOL)canHaveLayoutInsetOrIntrinsicContentSizeOrBaseline;
- (void)populateGeometryMarshallingContext:(id)arg1;
- (void)configurePlaceholderDrawingAttributes:(id)arg1;
- (BOOL)shouldDrawAsPlaceholder;
- (id)defaultBackgroundColor;
- (void)drawBackground;
- (BOOL)drawsBackground;
- (void)drawRect:(struct CGRect)arg1;
- (BOOL)isFlipped;
- (id)configurableKeyPathForMarshalledDesignTimeToManyRelationship:(id)arg1;
- (id)userDefinedRuntimeAttributesToMarshallWithContext:(id)arg1;
- (BOOL)ibWantsPlaceholderContainingViewControllerWhenMarshallingWithContext:(id)arg1;
- (id)localExtraMarshalledAttributesKeyPaths;
- (id)localExtraMarshalledToOneRelationshipKeyPaths;
- (id)localExtraMarshalledToManyRelationshipKeyPaths;
- (Class)classToTakeInitialMarshalledKeysFrom:(id)arg1;
- (id)runtimeClassNameForContext:(id)arg1 returningOptionalFallbackClassName:(id *)arg2;
- (void)viewWillDraw;
- (void)layoutSubviews;
- (void)layoutSubviewsIfNeeded;
- (void)invalidateSubviewLayout;
- (void)ibCocoaTouchToolFontsDidChange;
- (void)restoreCachedGeometry:(id)arg1;
- (id)cachedGeometry;
- (void)invalidateCachedGeometry;
- (id)ibEffectivePreservesSuperviewLayoutMarginsForCompiling;
- (id)ibEffectivePreservesSuperviewLayoutMarginsForDesignTime;
@property(readonly, nonatomic) long long ibExplicitLayoutMarginsBehavior;
- (struct NSEdgeInsets)ibLayoutMargins;
- (BOOL)ibSupportsLayoutMargins;
- (double)ibShadowedFirstBaselineOffsetFromTop;
- (BOOL)ibSupportsFirstBaseline;
- (double)baselineOffsetFromBottom;
- (struct CGSize)intrinsicContentSize;
- (struct CGRect)ibLayoutFrameworkBounds;
- (CDStruct_c519178c)ibFrameworkLayoutInset;
- (void)cancelSubviewLayoutInvalidation;
- (BOOL)subviewLayoutIsInvalid;
- (void)invalidateCachedImageAndGeometry;
- (id)marshalledRepresentationForRendering;
- (id)marshallingContextForRendering;
- (id)awakeAfterUsingCoder:(id)arg1;
- (void)setTargetRuntime:(id)arg1;
- (BOOL)usesHonestUIEra;
- (void)setFrameSize:(struct CGSize)arg1;
- (void)updateCachedGeometryForNewFrameSize:(struct CGSize)arg1;
- (struct CGRect)statusBarFrame;
- (struct CGRect)internalStatusBarFrame;
- (id)viewForStatusBarFrameCalculation;
- (id)rootIBUIViewAncestor;
- (id)superIBUIView;
@property(readonly, nonatomic) BOOL simulatedMetricsExtendedLayoutIncludesStatusBars;
@property(readonly, nonatomic) BOOL simulatedMetricsExtendedLayoutIncludesOpaqueBars;
@property(readonly, nonatomic) long long simulatedMetricsExtendedEdges;
- (id)effectiveOrientationMetrics;
- (id)simulatedMetricsContainerForSizing;
- (struct CGSize)effectiveFreeformSize;
- (id)effectiveSimulatedMetrics;
- (id)editorMetrics;
- (BOOL)canPresentSimulatedMetrics;
- (id)effectiveSimulatedMetricsCalculationPipeline;
- (id)simulatedMetricsForPipeline;
@property long long tag;
- (void)setHidden:(BOOL)arg1;
- (id)backgroundColorAsRenderedByDevice;
@property(readonly) NSColor *effectiveTintColor;
@property(readonly) NSColor *inheritedTintColor;
- (void)inheritedTintColorDidChange;
- (void)inheritedTintColorWillChange;
- (void)enumerateIBUIViewSubviews:(CDUnknownBlockType)arg1;
- (BOOL)isOpaque;
- (double)backgroundColorDeviceAlpha;
- (BOOL)prefersCachedImageBasedDrawing;
- (BOOL)compositesViewHierarchyInRemoteTool;
- (void)inheritedScrollViewExtendedEdgeInsetsDidChange;
- (void)setIbShadowedSubviews:(id)arg1;
@property(readonly) NSArray *ibEffectiveViewLayoutGuides;
- (void)unarchiveSafeAreaLayoutGuide:(id)arg1;
- (void)archiveSafeAreaLayoutGuide:(id)arg1;
- (void)unarchiveInsetsLayoutMarginsFromSafeArea:(id)arg1;
- (void)archiveInsetsLayoutMarginsFromSafeArea:(id)arg1;
- (void)unarchiveLayoutMarginsFollowReadableWidth:(id)arg1;
- (void)archiveLayoutMarginsFollowReadableWidth:(id)arg1;
- (void)ibArchiveHidden:(id)arg1;
- (void)unarchivePreservesSuperviewLayoutMargins:(id)arg1;
- (void)archivePreservesSuperviewLayoutMargins:(id)arg1;
- (void)unarchiveExplicitDirectionalLayoutMargins:(id)arg1;
- (void)archiveExplicitDirectionalLayoutMargins:(id)arg1;
- (void)unarchiveExplicitLayoutMargins:(id)arg1;
- (void)archiveExplicitLayoutMargins:(id)arg1;
- (id)explicitEvaluatedExplicitDirectionalLayoutMarginsInConfiguration:(id)arg1 defaultValue:(id)arg2;
- (id)explicitEvaluatedExplicitLayoutMarginsInConfiguration:(id)arg1 defaultValue:(id)arg2;
- (BOOL)ibShouldArchiveAutolayoutPropertiesWithNSViewProperties;
- (id)legacyArchivingDefaultValueForSimulatedMetricKeyPath:(id)arg1;
- (void)decodeSimulatedMetrics:(id)arg1;
- (void)encodeSimulatedMetrics:(id)arg1;
- (void)unarchiveSimulatedMetrics:(id)arg1;
- (void)archiveSimulatedMetrics:(id)arg1;
- (void)unarchiveBackgroundColor:(id)arg1;
- (void)archiveBackgroundColor:(id)arg1;
- (void)decodeBackgroundColor:(id)arg1;
- (void)encodeBackgroundColor:(id)arg1;
- (void)decodeTintColor:(id)arg1;
- (void)encodeTintColor:(id)arg1;
- (void)decodeTintColorWithUIViewProperties:(id)arg1;
- (void)encodeTintColorWithUIViewProperties:(id)arg1;
- (void)decodeExplicitDirectionalLayoutMargins:(id)arg1;
- (void)encodeExplicitDirectionalLayoutMargins:(id)arg1;
- (void)decodeExplicitLayoutMargins:(id)arg1;
- (void)encodeExplicitLayoutMargins:(id)arg1;
- (void)ibDecodeCachedGeometryFromPasteboard:(id)arg1;
- (void)ibEncodeCachedGeometryOntoPasteboard:(id)arg1;
- (void)populateCachedGeometryInfos:(id)arg1;
- (void)ibSwizzled_whenResizingUseEngineFrame:(char *)arg1 useAutoresizingMask:(char *)arg2;
- (id)cachedGeometryInfos;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 targetRuntime:(id)arg2;
- (unsigned long long)ibDefaultAccessibilityTraits;
- (BOOL)ibIsAccessibilityElementByDefault;
- (void)takeFrameSizeFromDefaultMetrics;
- (id)effectiveSimulatedMetricsForTargetRuntimeConversion;
- (id)barMetrics;
- (Class)barMetricsClass;
- (void)unarchiveWithDocumentUnarchiver:(id)arg1;
- (void)archiveWithDocumentArchiver:(id)arg1;
- (BOOL)ibIsInspectorApplicable:(id)arg1 forCategory:(id)arg2;
- (id)ibDocumentationPropertyInfosForKeyPath:(id)arg1;
- (void)setInspectedContentStretch_size_height:(double)arg1;
- (double)inspectedContentStretch_size_height;
- (void)setInspectedContentStretch_size_width:(double)arg1;
- (double)inspectedContentStretch_size_width;
- (void)setInspectedContentStretch_origin_y:(double)arg1;
- (double)inspectedContentStretch_origin_y;
- (void)setInspectedContentStretch_origin_x:(double)arg1;
- (double)inspectedContentStretch_origin_x;
- (void)ibDidInstantiateView;
- (id)ibUnderlyingViewInstance;
- (void)ibAddPreviewingSegueTemplateStorage:(id)arg1 forSegue:(id)arg2;
- (void)ibEnumerateIncrementallyMarshalledKeyPathsForChangeToKeyPath:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)ibConfigureSceneUpdateRequest:(id)arg1;
- (id)ibMarshallingContextForRendering;
- (id)ibMarshalledRepresentationForRendering;
- (void)ibPreparePreviewInstance:(id)arg1 context:(id)arg2;
- (id)ibDesignTimeDefaultIntrinsicContentSizeForSelfSizingContainers;
- (BOOL)ibWantsLayoutGuides;
- (id)ibPreferredItemForContainerConstraintFromDescendant:(id)arg1 attribute:(unsigned long long)arg2;
- (id)ibDefaultImageForAutolayoutGuide:(id)arg1;
- (id)ibDefaultLabelForAutolayoutGuide:(id)arg1;
- (id)ibChildItemsEligibleForNearestNeighborConstraints;
- (void)ibWillArbitrateInDocument:(id)arg1;
- (BOOL)ibWrapperViewForEditorCanvasFrameIsAffectedByChangeToProperty:(id)arg1;
- (id)ibWrapperViewForEditorCanvasFrame:(id)arg1;
- (id)ibLocalFontDescriptionKeyPaths;
- (CDUnknownBlockType)ibConvertDefaultFont:(id)arg1;
- (id)ibFontForFontManager;
@property(nonatomic) double ibInspectedDeltaHeightForRuntimeToggle;
@property(nonatomic) double ibInspectedDeltaYForRuntimeToggle;
@property(nonatomic) double ibInspectedDeltaWidthForRuntimeToggle;
@property(nonatomic) double ibInspectedDeltaXForRuntimeToggle;
- (CDStruct_c519178c)possiblyInvertedIbInsetForRuntimeToggle;
- (void)setPossiblyInvertedIbInsetForRuntimeToggle:(CDStruct_c519178c)arg1;
@property(nonatomic) CDStruct_c519178c ibInsetForRuntimeToggle;
- (void)ibPrepareToBackwardsDeployToOSVersion:(id)arg1 inDocument:(id)arg2;
- (void)ibPopulateAdditionalTargetOSVersions:(id)arg1 forCompilingDocument:(id)arg2;
- (void)didChangeTargetRuntimeInDocument:(id)arg1 withContext:(id)arg2;
- (void)willChangeTargetRuntimeInDocument:(id)arg1 withContext:(id)arg2;
- (void)resizeIfNeededInDocument:(id)arg1 withContext:(id)arg2;
- (BOOL)shouldResizeWithParent:(id)arg1 hasOwningViewController:(BOOL)arg2;
- (id)ibEditorClass;
- (BOOL)ibCanBeSourceOfForceTouchSegue;
- (BOOL)ibSupportsNilBackgroundColor;
- (void)refreshSimulatedMetricsContentSize;
- (void)applyMetrics:(id)arg1 toKeyPath:(id)arg2;
- (void)setFrameSizeForApplyingSimulatedMetrics:(struct CGSize)arg1;
- (void)ibPerformInspectorInstigatedSimulatedMetricsMutationBlock:(CDUnknownBlockType)arg1;
@property(copy) IBUISimulatedSizeMetrics *ibInspectedSimulatedDestinationMetrics;
@property(copy) IBUISimulatedBarMetrics *ibInspectedSimulatedBottomBarMetrics;
@property(copy) IBUISimulatedBarMetrics *ibInspectedSimulatedTopBarMetrics;
@property(copy) IBUISimulatedStatusBarMetrics *ibInspectedSimulatedStatusBarMetrics;
- (void)ibUpdateInheritedSimulatedMetrics:(id)arg1;
- (BOOL)ibSupportsSimulatedMetrics;
- (id)ibInspectedDefaultTintColor;
- (BOOL)ibHasAnyCandidateConstraintsWithViewControllerAutolayoutGuideType:(long long)arg1;
- (BOOL)ibHasAnyCandidateConstraintsWithViewAutolayoutGuideType:(long long)arg1;
- (_Bool)ibHasSafeAreaRelativeMarginsOnNonEmptyConfigurations;
- (void)ibWarnings:(id)arg1 forDocument:(id)arg2 withComputationContext:(id)arg3;
- (BOOL)ibShouldReportDuplicateRestorationIdentifierWarningWithContext:(id)arg1;
- (BOOL)ibHasDuplicateRestorationIdentifierWithContext:(id)arg1;
- (id)ibRestorationIdentifierCountsForDescendantViews;
- (BOOL)ibIgnoreMissingPositioningConstraintsForLocalizationWarnings;
- (BOOL)isBaselineAtIndex:(long long)arg1 inMotionWithKnob:(CDUnion_42e99c75)arg2;
- (id)ibAcceptContentsOfPasteboard:(id)arg1 inDocument:(id)arg2 insertionContext:(id)arg3;
- (BOOL)ibWantsAddContentToExistCollectionForOriginatedOutletCollection:(id)arg1;
- (BOOL)ibCanAcceptContentsOfPasteboard:(id)arg1 inDocument:(id)arg2 targetChildRelation:(id *)arg3;
- (BOOL)ibSupportsInsertionIntoBarButtonItems;
- (id)ibPasteboardImageForRenderingDestination:(id)arg1;
- (id)ibViewFromPasteboardImage:(id)arg1;
- (BOOL)ibAcceptsPasteboardImageResourcesAsViews;
- (id)ibPasteboardTypes;
- (BOOL)ibIsVerticallyResizable;
- (BOOL)ibIsHorizontallyResizable;
- (struct CGSize)ibMaximumSize;
- (struct CGSize)ibMaximumSizeForTargetRuntime:(id)arg1;
- (struct CGSize)ibMinimumSize;
- (struct CGSize)ibMinimumSizeForTargetRuntime:(id)arg1;
- (struct CGSize)ibEffectiveSimulatedMetricsContentSize;
- (id)ibEffectiveConfigurationFromConfiguration:(id)arg1;
- (BOOL)ibEffectiveHasSimulatedMetricsAffectingFixedSize;
- (struct CGSize)ibPreferredSize;
- (BOOL)ibOverridesFrameworkMetricsForPreferredSize;
- (BOOL)ibPrefersToBeSizedToFitAfterEditingTitle;
- (struct CGRect)ibInlineTextEditingRectForKeyPath:(id)arg1;
- (BOOL)ibIsValidTraitStorageListContainer;
- (id)ibCompiledCandidatesForToManyChildRelationshipKeyPath:(id)arg1 withPropertyStorage:(id)arg2 context:(id)arg3;
- (id)ibCompiledValueForKeyPath:(id)arg1 withPropertyStorage:(id)arg2 inConfiguration:(id)arg3 context:(id)arg4;
- (id)ibCompiledConfigurationsWithExplicitValuesForKeyPath:(id)arg1 withPropertyStorage:(id)arg2 context:(id)arg3;
- (void)ibPopulateCompiledPerConfigurationToManyRelationshipOrder:(id)arg1;
- (id)ibDesignTimeConfigurableKeyPathForCompiledKeyPath:(id)arg1;
- (id)ibCompiledKeyPathForDesignTimeConfigurableKeyPath:(id)arg1;
- (id)ibUnarchiveValueForAttribute:(id)arg1 inConfiguration:(id)arg2 withDocumentUnarchiver:(id)arg3;
- (void)ibArchiveEvaluatedValue:(id)arg1 forAttribute:(id)arg2 inConfiguration:(id)arg3 withDocumentArchiver:(id)arg4;
- (id)ibLocalPerConfigurationAttributeKeyPaths;
- (BOOL)ibShouldConsiderHitTestingForChild:(id)arg1;
- (void)ibPopulateChildBackToFrontRelationOrder:(id)arg1;
- (struct CGRect)ibRectForChild:(id)arg1 inFrameController:(id)arg2;
- (void)ibEnumerateLayoutGuidesForDrawingWithBlock:(CDUnknownBlockType)arg1;
- (void)ibDidExtractObjects:(id)arg1 fromPasteboard:(id)arg2 intoDocument:(id)arg3 context:(id)arg4;
- (BOOL)ibCanRemoveChildren:(id)arg1;
- (BOOL)ibCanBeReferencedByConstraintWithContainingView:(id)arg1;
- (void)ibOptimisticallyDropRecomputableEditorState;
- (id)ibEditorCanvasFrameControllerForDocument:(id)arg1;
- (id)ibSimulatedMetricsContainerForEditorView;
- (BOOL)ibWantsBoundsIndicatorDuringTracking;
- (id)ibDesignableContentView;
- (struct CGRect)ibSquashedXcode7InitialFrameFromAddingToNonAnyAny;
- (BOOL)ibHasSquashedAnyAnyFrame:(struct CGRect)arg1;
- (id)ibTextKeyPathForDefaultInlineStringEditing;
- (id)ibFieldEditorConfigurationForTextKeyPath:(id)arg1;
- (id)viewControllerOrProxyObjectViewControllerConnectedToReceiverViaViewOutlet;
- (BOOL)ibPrefersFlippedFrameCoordinates;
- (BOOL)ibCanBeCollectionViewBackgroundView;
- (BOOL)ibCanBeTableViewBracketingView;
- (void)setIbInspectedAutoresizesSubviewsForDevice:(BOOL)arg1;
- (void)setIbInspectedExplicitLayoutMarginsBehavior:(long long)arg1;
- (long long)ibInspectedExplicitLayoutMarginsBehavior;
- (BOOL)ibInspectedAutoresizesSubviewsForDevice;
- (double)ibEffectiveFrameScaleFactor;
- (void)setIbInspectedFrame:(struct CGRect)arg1;
- (void)ibResumeAutoResizingSubviews:(id)arg1;
- (id)ibStopAutoResizingSubviewsWhileGrowingFromKnob:(CDUnion_42e99c75)arg1 inDocument:(id)arg2;
- (BOOL)ibRequiresLayoutInfoInCocoaTouchToolDuringCompilationOfDocument:(id)arg1;
- (void)ibPopulateCompilationMarshallingContext:(id)arg1 forDocument:(id)arg2;
- (void)ibSizeToFitViewController:(id)arg1 context:(id)arg2;
- (void)ibCustomizeForInsertionIntoIBUITableView:(id)arg1 withObjects:(id)arg2 fromLibraryOrDifferentTargetRuntime:(BOOL)arg3 andInsertionContext:(id)arg4;
- (void)ibCustomizeForInsertionIntoIBUIViewController:(id)arg1 withObjects:(id)arg2 fromLibraryOrDifferentTargetRuntime:(BOOL)arg3 andInsertionContext:(id)arg4;
- (BOOL)ibSizesToFillViewControllers;
- (void)ibCustomizeForInsertionIntoIBUIToolbar:(id)arg1 withObjects:(id)arg2 fromLibraryOrDifferentTargetRuntime:(BOOL)arg3 andInsertionContext:(id)arg4;
- (void)ibCustomizeForInsertionIntoIBUINavigationItem:(id)arg1 withObjects:(id)arg2 fromLibraryOrDifferentTargetRuntime:(BOOL)arg3 andInsertionContext:(id)arg4;
- (void)ibTakeValue:(id)arg1 forInspectedConfigurableProperty:(id)arg2 inConfiguration:(id)arg3;
- (id)ibValueForInspectedConfigurableProperty:(id)arg1 inConfiguration:(id)arg2;
- (void)ibRemoveChildren:(id)arg1;
- (void)ibPopulateChildRelationOrder:(id)arg1;
- (id)ibLocalSearchableNumericAttributeKeyPaths;
- (BOOL)ibWantsSceneMaskOrBezel;
- (id)layoutGuideForAttribute:(unsigned long long)arg1;
- (void)ibConvertConstraintsToSafeAreaLayoutGuide:(BOOL)arg1 forDocument:(id)arg2;
- (void)setEnableSafeAreaLayoutGuide:(BOOL)arg1 document:(id)arg2;
- (BOOL)ibInspectedSupportsSafeAreaLayoutGuide;
- (BOOL)ibInspectedUseSafeAreaLayoutGuide;
- (void)setIbInspectedUseSafeAreaLayoutGuide:(BOOL)arg1;
- (void)ibVerifySimulatedMetricsWithDocument:(id)arg1;
- (struct CGRect)ibFrameForLayoutFrame:(struct CGRect)arg1;
- (BOOL)ibHasSimulatedMetricsAffectingFixedSize;
- (BOOL)ibHasSimulatedMetrics;
- (BOOL)ibHasSimulatedSizeMetrics;
- (BOOL)ibHasSimulatedSizeMetricsAffectingFixedSize;
- (BOOL)ibHasSimulatedBarMetrics;
- (BOOL)ibSupportsInferredMetrics;
- (BOOL)ibPresentsSimulatedMetrics;
- (BOOL)ibPresentsSimulatedMetricsInDocument:(id)arg1;
- (void)ibSynchronouslyForceSceneUpdateWithFallbackMetrics:(id)arg1 requestConfigurationBlock:(CDUnknownBlockType)arg2;
- (void)ibDidAddToDocument:(id)arg1 phase:(unsigned long long)arg2;
- (id)ibMetricsChainObjectRepresentationKeyPathForInvalidationKeyPath:(id)arg1;
- (id)ibLocalPropertiesForInheritableMetricsInvalidation;
- (id)ibLocalAttributeKeyPaths;
- (id)ibLocalChildToOneRelationshipsKeyPaths;
- (id)ibLocalChildToManyRelationshipsKeyPaths;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

