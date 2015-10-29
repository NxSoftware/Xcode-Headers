//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IDEInterfaceBuilderCocoaTouchIntegration/IBUIView.h>

#import "IBDocumentArchiving.h"
#import "IBStackView.h"
#import "NSCoding.h"

@class NSString;

@interface IBUIStackView : IBUIView <IBStackView, NSCoding, IBDocumentArchiving>
{
    long long _cachedAxis;
    long long _cachedDistribution;
    long long _cachedAlignment;
    double _cachedSpacing;
    BOOL _cachedBaselineRelativeArrangement;
}

+ (void)registerMarshallingRecordHandlers;
+ (int)ibLibraryInclusionStatusForTargetRuntime:(id)arg1 andDocumentClass:(Class)arg2 assetIdentifier:(id)arg3;
+ (id)ibDefaultImageForInstance:(id)arg1 targetRuntime:(id)arg2;
+ (BOOL)ibIsAutoLayoutSelfManagedContainer;
+ (id)keyPathsForValuesAffectingIbIsStackingWithVerticalAxisWithEmptyConfigurationOnly;
+ (id)keyPathsForValuesAffectingIbIsStackingWithHorizontalAxisWithEmptyConfigurationOnly;
+ (id)keyPathsForValuesAffectingIbIsStackingWithVerticalAxisWithMultipleConfigurations;
+ (id)keyPathsForValuesAffectingIbIsStackingWithHorizontalAxisWithMultipleConfigurations;
+ (void)ibDidInstantiateView:(id)arg1 forAsset:(id)arg2 role:(long long)arg3;
+ (id)ibInstantiateViewForRole:(long long)arg1 withTargetRuntime:(id)arg2 documentClass:(Class)arg3 assetIdentifier:(id)arg4;
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
@property(nonatomic, getter=isBaselineRelativeArrangement) BOOL baselineRelativeArrangement;
@property(nonatomic) double spacing;
@property(nonatomic) long long alignment;
@property(nonatomic) long long distribution;
@property(nonatomic) long long axis;
- (id)ibDesignableContentView;
- (id)initWithFrame:(struct CGRect)arg1 targetRuntime:(id)arg2;
- (double)ibPriorityForPlaceholderUninitializedSubviewVerticalConstraints;
- (double)ibPriorityForPlaceholderUninitializedSubviewHorizontalConstraints;
- (BOOL)ibShouldInstallPlaceholderSizeConstraintsOnSubviewInsteadOfReceiver;
- (BOOL)ibShouldGeneratePlaceholderPositionConstraintsForUninitializedSubviews;
- (void)setIbShadowedAlignment:(long long)arg1;
@property(nonatomic) long long orientation;
- (void)ibInsertView:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)setIbArrangedSubviews:(id)arg1;
- (id)ibUnarchiveValueForAttribute:(id)arg1 inConfiguration:(id)arg2 withDocumentUnarchiver:(id)arg3;
- (void)ibArchiveEvaluatedValue:(id)arg1 forAttribute:(id)arg2 inConfiguration:(id)arg3 withDocumentArchiver:(id)arg4;
- (id)ibLocalPerConfigurationAttributeKeyPaths;
- (id)ibWidgetType;
- (id)ibTypeNameForDefaultLabel;
- (void)ibWarnings:(id)arg1 forDocument:(id)arg2 withComputationContext:(id)arg3;
- (BOOL)ibIsUserSizable;
- (BOOL)ibIsChildViewUserSizable:(id)arg1;
- (BOOL)ibAllowResizeBasedOnIntrinsicContentSizeForChild:(id)arg1;
- (BOOL)ibIsChildViewUserMovable:(id)arg1;
- (BOOL)ibShouldEnsureChildViewHasTranslatesAutoresizingMaskIntoConstraintsInCanvas:(id)arg1;
- (BOOL)ibPropogatedTranslatesAutoresizingConstraintsOfChildView:(id)arg1 forCopyOfChildView:(id)arg2;
- (void)ibMapCopyOfReceiver:(id)arg1 intoLayoutEngine:(id)arg2;
- (struct CGRect)ibDropInsetLayoutBoundsForSubviews;
- (Class)ibEditorClass;
- (BOOL)ibIsStackingWithVerticalAxisWithEmptyConfigurationOnly;
- (BOOL)ibIsStackingWithHorizontalAxisWithEmptyConfigurationOnly;
- (BOOL)ibIsStackingWithVerticalAxisWithMultipleConfigurations;
- (BOOL)ibIsStackingWithHorizontalAxisWithMultipleConfigurations;
- (BOOL)ibHasNonEmptyAxisConfiguration;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)unarchiveWithDocumentUnarchiver:(id)arg1;
- (void)archiveWithDocumentArchiver:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

