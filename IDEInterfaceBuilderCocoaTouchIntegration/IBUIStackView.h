//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <IDEInterfaceBuilderCocoaTouchIntegration/IBUIView.h>

#import <IDEInterfaceBuilderCocoaTouchIntegration/IBDocumentArchiving-Protocol.h>
#import <IDEInterfaceBuilderCocoaTouchIntegration/IBStackView-Protocol.h>

@class NSNumber, NSString;

@interface IBUIStackView : IBUIView <IBStackView, IBDocumentArchiving>
{
    BOOL _baselineRelativeArrangement;
    long long _axis;
    long long _distribution;
    long long _alignment;
    NSNumber *_spacing;
}

+ (void)registerMarshallingRecordHandlers;
+ (int)ibLibraryInclusionStatusForTargetRuntime:(id)arg1 andDocumentClass:(Class)arg2 assetIdentifier:(id)arg3;
+ (id)ibDefaultImageForInstance:(id)arg1 targetRuntime:(id)arg2;
+ (id)keyPathsForValuesAffectingIbIsStackingWithVerticalAxisWithEmptyConfigurationOnly;
+ (id)keyPathsForValuesAffectingIbIsStackingWithHorizontalAxisWithEmptyConfigurationOnly;
+ (id)keyPathsForValuesAffectingIbIsStackingWithVerticalAxisWithMultipleConfigurations;
+ (id)keyPathsForValuesAffectingIbIsStackingWithHorizontalAxisWithMultipleConfigurations;
+ (void)ibDidInstantiateView:(id)arg1 forAsset:(id)arg2 role:(long long)arg3;
+ (id)ibInstantiateViewForRole:(long long)arg1 withTargetRuntime:(id)arg2 documentClass:(Class)arg3 assetIdentifier:(id)arg4;
@property(nonatomic, getter=isBaselineRelativeArrangement) BOOL baselineRelativeArrangement; // @synthesize baselineRelativeArrangement=_baselineRelativeArrangement;
@property(retain, nonatomic) NSNumber *spacing; // @synthesize spacing=_spacing;
@property(nonatomic) long long alignment; // @synthesize alignment=_alignment;
@property(nonatomic) long long distribution; // @synthesize distribution=_distribution;
@property(nonatomic) long long axis; // @synthesize axis=_axis;
- (void).cxx_destruct;
- (void)unarchiveBaselineRelativeArrangement:(id)arg1;
- (void)archiveBaselineRelativeArrangement:(id)arg1;
- (void)unarchiveSpacing:(id)arg1;
- (void)archiveSpacing:(id)arg1;
- (void)unarchiveAlignment:(id)arg1;
- (void)archiveAlignment:(id)arg1;
- (void)unarchiveDistribution:(id)arg1;
- (void)archiveDistribution:(id)arg1;
- (void)unarchiveAxis:(id)arg1;
- (void)archiveAxis:(id)arg1;
- (void)archive:(id)arg1 enumeration:(id)arg2 forArchiveKey:(id)arg3 propertyPath:(id)arg4 defaultValue:(int)arg5;
- (id)localExtraMarshalledAttributesKeyPaths;
- (void)drawRect:(struct CGRect)arg1;
- (id)ibDesignableContentView;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 targetRuntime:(id)arg2;
- (double)ibPriorityForPlaceholderUninitializedSubviewVerticalConstraints;
- (double)ibPriorityForPlaceholderUninitializedSubviewHorizontalConstraints;
- (BOOL)ibShouldInstallPlaceholderSizeConstraintsOnSubviewInsteadOfReceiver;
- (BOOL)ibShouldGeneratePlaceholderPositionConstraintsForUninitializedSubviews;
- (id)ibCompiledKeyPathForDesignTimeConfigurableKeyPath:(id)arg1;
- (id)ibCompiledValueForKeyPath:(id)arg1 withPropertyStorage:(id)arg2 inConfiguration:(id)arg3 context:(id)arg4;
- (void)setIbShadowedAlignment:(long long)arg1;
@property(nonatomic) long long orientation;
- (void)ibInsertView:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)setIbArrangedSubviews:(id)arg1;
- (id)ibUnarchiveValueForAttribute:(id)arg1 inConfiguration:(id)arg2 withDocumentUnarchiver:(id)arg3;
- (void)ibArchiveEvaluatedValue:(id)arg1 forAttribute:(id)arg2 inConfiguration:(id)arg3 withDocumentArchiver:(id)arg4;
- (id)ibLocalPerConfigurationAttributeKeyPaths;
- (void)ibDowngradeAnySystemSpacingToFixedConstant;
- (void)ibPrepareToBackwardsDeployToOSVersion:(id)arg1 inDocument:(id)arg2;
- (void)ibPopulateAdditionalTargetOSVersions:(id)arg1 forCompilingDocument:(id)arg2;
- (void)ibPopulateRequiredDocumentCapabilities:(id)arg1 document:(id)arg2;
- (BOOL)usesStandardSpacing;
- (BOOL)ibHasSquashedAnyAnyFrame:(struct CGRect)arg1;
- (id)ibWidgetType;
- (id)ibTypeNameForDefaultLabel;
- (void)ibWarnings:(id)arg1 forDocument:(id)arg2 withComputationContext:(id)arg3;
- (long long)ibManagedContainerBehavior;
- (BOOL)ibIsUserSizable;
- (BOOL)ibIsChildViewUserSizable:(id)arg1;
- (BOOL)ibAllowResizeBasedOnIntrinsicContentSizeForChild:(id)arg1;
- (BOOL)ibIsChildViewUserMovable:(id)arg1;
- (BOOL)ibShouldEnsureChildViewHasTranslatesAutoresizingMaskIntoConstraintsInCanvas:(id)arg1;
- (void)ibMapCopyOfReceiver:(id)arg1 intoLayoutEngine:(id)arg2;
- (struct CGRect)ibDropInsetLayoutBoundsForSubviews;
- (Class)ibEditorClass;
- (BOOL)ibIsStackingWithVerticalAxisWithEmptyConfigurationOnly;
- (BOOL)ibIsStackingWithHorizontalAxisWithEmptyConfigurationOnly;
- (BOOL)ibIsStackingWithVerticalAxisWithMultipleConfigurations;
- (BOOL)ibIsStackingWithHorizontalAxisWithMultipleConfigurations;
- (BOOL)ibHasNonEmptyAxisConfiguration;
- (id)ibLocalAttributeKeyPaths;
- (void)unarchiveWithDocumentUnarchiver:(id)arg1;
- (void)archiveWithDocumentArchiver:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

