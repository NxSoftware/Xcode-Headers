//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IBAutolayoutFoundation/IBAutolayoutInfoProvider-Protocol.h>
#import <IBAutolayoutFoundation/IBBinaryArchiving-Protocol.h>

@class IBMutableIdentityDictionary, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString;

@interface IBSparseAutolayoutInfo : NSObject <IBAutolayoutInfoProvider, IBBinaryArchiving>
{
    IBMutableIdentityDictionary *_parentByObjectMap;
    IBMutableIdentityDictionary *_childrenByObjectMap;
    NSMutableDictionary *_priorityStrongerThanInternalWeakSizeConstraintsByViewMap;
    NSMutableDictionary *_propertiesByDomainThenObjectMap;
    NSMutableSet *_objectsWithAnyViewPropertiesSet;
    NSMutableArray *_arbitrationUnits;
    BOOL _generatesPrototypingConstraints;
    Class _autolayoutFrameDecisionDriverClass;
    long long _userInterfaceLayoutDirection;
    Class _symbolicLayoutConstantClass;
    Class _layoutConstantClass;
    Class _autolayoutEngineClass;
    Class _arbitrationUnitClass;
}

+ (id)sparseInfoByTransformingObjectsInSparseInfo:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
@property(nonatomic) BOOL generatesPrototypingConstraints; // @synthesize generatesPrototypingConstraints=_generatesPrototypingConstraints;
@property(readonly, nonatomic) Class arbitrationUnitClass; // @synthesize arbitrationUnitClass=_arbitrationUnitClass;
@property(readonly, nonatomic) Class autolayoutEngineClass; // @synthesize autolayoutEngineClass=_autolayoutEngineClass;
@property(readonly, nonatomic) Class layoutConstantClass; // @synthesize layoutConstantClass=_layoutConstantClass;
@property(readonly, nonatomic) Class symbolicLayoutConstantClass; // @synthesize symbolicLayoutConstantClass=_symbolicLayoutConstantClass;
@property(readonly, nonatomic) long long userInterfaceLayoutDirection; // @synthesize userInterfaceLayoutDirection=_userInterfaceLayoutDirection;
@property(readonly, nonatomic) Class autolayoutFrameDecisionDriverClass; // @synthesize autolayoutFrameDecisionDriverClass=_autolayoutFrameDecisionDriverClass;
- (void).cxx_destruct;
- (id)sparseAutolayoutInfoForArbitrationUnit:(id)arg1 objectTransformationBlock:(CDUnknownBlockType)arg2;
- (id)arbitrationUnitRootForObject:(id)arg1;
- (id)arbitrationUnitForObject:(id)arg1;
- (id)allArbitrationUnits;
- (void)registerArbitrationUnit:(id)arg1;
- (void)setPriorityForPlaceholderAmbiguousSubviewVerticalConstraints:(double)arg1 forView:(id)arg2;
- (double)priorityForPlaceholderAmbiguousSubviewVerticalConstraintsForView:(id)arg1;
- (void)setPriorityForPlaceholderAmbiguousSubviewHorizontalConstraints:(double)arg1 forView:(id)arg2;
- (double)priorityForPlaceholderAmbiguousSubviewHorizontalConstraintsForView:(id)arg1;
- (void)setPriorityForPlaceholderUninitializedSubviewVerticalConstraints:(double)arg1 forView:(id)arg2;
- (double)priorityForPlaceholderUninitializedSubviewVerticalConstraintsForView:(id)arg1;
- (void)setPriorityForPlaceholderUninitializedSubviewHorizontalConstraints:(double)arg1 forView:(id)arg2;
- (double)priorityForPlaceholderUninitializedSubviewHorizontalConstraintsForView:(id)arg1;
- (void)setView:(id)arg1 shouldInstallPlaceholderSizeConstraintsOnSubviewInsteadOfReceiver:(BOOL)arg2;
- (BOOL)viewShouldInstallPlaceholderSizeConstraintsOnSubviewInsteadOfReceiver:(id)arg1;
- (void)setView:(id)arg1 shouldGeneratePlaceHolderSizeConstraintsWhenAmbiguous:(BOOL)arg2;
- (BOOL)viewShouldGeneratePlaceholderSizeConstraintsWhenAmbiguous:(id)arg1;
- (void)setView:(id)arg1 shouldGeneratePlaceholderSizeConstraintsForUninitializedSubviews:(BOOL)arg2;
- (BOOL)viewShouldGeneratePlaceholderSizeConstraintsForUninitializedSubviews:(id)arg1;
- (void)setView:(id)arg1 shouldGeneratePlaceholderPositionConstraintsForUninitializedSubviews:(BOOL)arg2;
- (BOOL)viewShouldGeneratePlaceholderPositionConstraintsForUninitializedSubviews:(id)arg1;
- (void)setView:(id)arg1 hasAnyAmbiguity:(BOOL)arg2;
- (BOOL)viewHasAnyAmbiguity:(id)arg1;
- (void)setView:(id)arg1 hasCandidateReferencingConstraints:(BOOL)arg2;
- (BOOL)viewHasCandidateReferencingConstraints:(id)arg1;
- (void)setView:(id)arg1 canHaveUninitializedAutolayoutAmbiguityStatus:(BOOL)arg2;
- (BOOL)viewCanHaveUninitializedAutolayoutAmbiguityStatus:(id)arg1;
- (void)setView:(id)arg1 hasUninitializedAutolayoutStatus:(BOOL)arg2;
- (BOOL)viewHasUninitializedAutolayoutStatus:(id)arg1;
- (void)setView:(id)arg1 isVerticallyResizable:(BOOL)arg2;
- (BOOL)viewIsVerticallyResizable:(id)arg1;
- (void)setView:(id)arg1 isHorizontallyResizable:(BOOL)arg2;
- (BOOL)viewIsHorizontallyResizable:(id)arg1;
- (void)setView:(id)arg1 prefersToVerticallyResizeWithContainer:(BOOL)arg2;
- (BOOL)viewPrefersToVerticallyResizeWithContainer:(id)arg1;
- (void)setView:(id)arg1 prefersToHorizontallyResizeWithContainer:(BOOL)arg2;
- (BOOL)viewPrefersToHorizontallyResizeWithContainer:(id)arg1;
- (void)setView:(id)arg1 prefersMarginRelativeConstraints:(BOOL)arg2;
- (BOOL)viewPrefersMarginRelativeConstraints:(id)arg1;
- (void)setPriorityStrongerThanInternalWeakSizeConstraints:(double)arg1 forCompressingView:(id)arg2 inLayoutEngineForOrientation:(unsigned long long)arg3;
- (double)priorityStrongerThanInternalWeakSizeConstraintsForCompressingView:(id)arg1 inLayoutEngineForOrientation:(unsigned long long)arg2;
- (void)setOrientationsWithInternalConstraintsThatWeaklyDefineViewSize:(unsigned long long)arg1 forView:(id)arg2;
- (unsigned long long)orientationsWithInternalConstraintsThatWeaklyDefineViewSizeForView:(id)arg1;
- (void)setCustomSubviewLayoutStrategy:(unsigned long long)arg1 forView:(id)arg2;
- (unsigned long long)customSubviewLayoutStrategyForView:(id)arg1;
- (void)setInsetToDesignableContentArea:(CDStruct_c519178c)arg1 forView:(id)arg2;
- (CDStruct_c519178c)insetToDesignableContentAreaForView:(id)arg1;
- (void)setView:(id)arg1 derivesDesignTimeDefaultIntrinsicContentSize:(BOOL)arg2;
- (BOOL)viewDerivesDesignTimeDefaultIntrinsicContentSize:(id)arg1;
- (void)setView:(id)arg1 derivesInternalConstraintsBasedUponInitialFrameSize:(BOOL)arg2;
- (BOOL)viewDerivesInternalConstraintsBasedUponInitialFrameSize:(id)arg1;
- (void)setViewWithSuperviewOwnedLayout:(id)arg1 allowsSizingConstraints:(BOOL)arg2;
- (BOOL)viewWithSuperviewOwnedLayoutAllowsSizingConstraints:(id)arg1;
- (void)setView:(id)arg1 shouldUseConstraintsInsteadOfAutoresizing:(BOOL)arg2;
- (BOOL)viewShouldUseConstraintsInsteadOfAutoresizing:(id)arg1;
- (void)setDesignableContentView:(id)arg1 forView:(id)arg2;
- (id)designableContentViewForView:(id)arg1;
- (void)setContainerWidgetType:(id)arg1 forView:(id)arg2;
- (id)containerWidgetTypeForView:(id)arg1;
- (void)setWidgetType:(id)arg1 forView:(id)arg2;
- (id)widgetTypeForView:(id)arg1;
- (id)layoutRuleWidgetTypePrefix;
- (id)objectsFromAncestor:(id)arg1 toObject:(id)arg2;
- (id)topLevelObjectForObject:(id)arg1;
- (id)topLevelObjects;
- (id)orderedChildrenOfObject:(id)arg1;
- (id)childrenOfObject:(id)arg1;
- (id)parentOfObject:(id)arg1;
- (id)parentOfObjectOrNSNull:(id)arg1;
- (BOOL)containsObject:(id)arg1;
@property(readonly, copy) NSString *debugDescription;
- (void)trackObjectAsView:(id)arg1;
- (BOOL)objectIsView:(id)arg1;
- (id)objects;
- (void)addObject:(id)arg1 toParent:(id)arg2;
- (id)sparseInfoOfClass:(Class)arg1 byTransformingObjectsUsingBlock:(CDUnknownBlockType)arg2;
- (id)sparseInfoByTransformingObjectsUsingBlock:(CDUnknownBlockType)arg1;
- (void)encodeWithBinaryArchiver:(id)arg1;
- (id)initWithBinaryUnarchiver:(id)arg1;
- (id)initWithUserInterfaceLayoutDirection:(long long)arg1 layoutConstantClass:(Class)arg2 symbolicLayoutConstantClass:(Class)arg3 arbitrationUnitClass:(Class)arg4 autolayoutEngineClass:(Class)arg5 autolayoutFrameDecisionDriverClass:(Class)arg6;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

