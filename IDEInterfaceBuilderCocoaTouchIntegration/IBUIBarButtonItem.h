//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <IDEInterfaceBuilderCocoaTouchIntegration/IBUIBarItem.h>

#import <IDEInterfaceBuilderCocoaTouchIntegration/IBDocumentArchiving-Protocol.h>
#import <IDEInterfaceBuilderCocoaTouchIntegration/NSCopying-Protocol.h>

@class IBUINavigationItem, IBUIToolbar, IBUIView, NSColor, NSNumber, NSString;

@interface IBUIBarButtonItem : IBUIBarItem <IBDocumentArchiving, NSCopying>
{
    BOOL _springLoaded;
    int _style;
    IBUINavigationItem *_navigationItem;
    IBUIToolbar *_toolbar;
    double _width;
    IBUIView *_customView;
    NSNumber *_systemItemIdentifier;
    NSColor *_tintColor;
    struct CGRect _customViewFrameInEnclosingBar;
}

+ (void)registerMarshallingRecordHandlers;
+ (id)flexibleSpaceImageWithSize:(struct CGSize)arg1;
+ (id)fixedSpaceImageWithSize:(struct CGSize)arg1;
+ (id)keyPathsForValuesAffectingIbInspectedFlexibleFixedSpaceOptionTitles;
+ (id)keyPathsForValuesAffectingIbInspectedFlexibleFixedSpaceOptionValues;
+ (id)ibDefaultImageForInstance:(id)arg1 targetRuntime:(id)arg2;
+ (id)ibInstantiateForRole:(long long)arg1 withTargetRuntime:(id)arg2 documentClass:(Class)arg3 assetIdentifier:(id)arg4;
@property(nonatomic, getter=isSpringLoaded) BOOL springLoaded; // @synthesize springLoaded=_springLoaded;
@property(readonly, nonatomic) struct CGRect customViewFrameInEnclosingBar; // @synthesize customViewFrameInEnclosingBar=_customViewFrameInEnclosingBar;
@property(copy, nonatomic) NSColor *tintColor; // @synthesize tintColor=_tintColor;
@property(copy, nonatomic) NSNumber *systemItemIdentifier; // @synthesize systemItemIdentifier=_systemItemIdentifier;
@property(retain, nonatomic) IBUIView *customView; // @synthesize customView=_customView;
@property(nonatomic) int style; // @synthesize style=_style;
@property(nonatomic) double width; // @synthesize width=_width;
@property(nonatomic) __weak IBUIToolbar *toolbar; // @synthesize toolbar=_toolbar;
@property(nonatomic) __weak IBUINavigationItem *navigationItem; // @synthesize navigationItem=_navigationItem;
- (void).cxx_destruct;
- (void)configureIncrementalSceneUpdateRequest:(id)arg1;
- (void)configureFullSceneUpdateRequest:(id)arg1;
- (void)encodeSystemItemIdentifier:(id)arg1;
- (void)decodeSystemItemIdentifier:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)valueForKey:(id)arg1;
- (BOOL)isFlexibleSpace;
- (BOOL)isFixedSpace;
- (BOOL)isSystemItem;
- (void)setCustomViewFrameInEnclosingBar:(struct CGRect)arg1;
- (id)titleFont;
- (struct CGRect)titleRect;
- (void)setTitle:(id)arg1;
- (struct CGRect)frame;
- (id)barView;
- (id)navigationBar;
- (void)removeFromBarView;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)unarchiveWithDocumentUnarchiver:(id)arg1;
- (void)archiveWithDocumentArchiver:(id)arg1;
- (BOOL)ibIsChildArbitrationUnitRoot:(id)arg1;
- (BOOL)shouldAcceptImages;
- (void)ibSetupTriggerForSegueTemplate:(id)arg1 inCompilationUnit:(id)arg2;
- (id)ibUnarchiveValueForAttribute:(id)arg1 inConfiguration:(id)arg2 withDocumentUnarchiver:(id)arg3;
- (void)ibArchiveEvaluatedValue:(id)arg1 forAttribute:(id)arg2 inConfiguration:(id)arg3 withDocumentArchiver:(id)arg4;
- (id)ibLocalPerConfigurationAttributeKeyPaths;
- (void)ibWarnings:(id)arg1 forDocument:(id)arg2 withComputationContext:(id)arg3;
- (BOOL)isItemSizable;
- (BOOL)ibIsChildInitiallySelectable:(id)arg1;
- (BOOL)ibIsChildViewUserMovable:(id)arg1;
- (BOOL)ibCanRemoveChildren:(id)arg1;
- (id)ibSegueTriggers;
- (id)ibInspectedFlexibleFixedSpaceOptionTitles;
- (id)ibInspectedFlexibleFixedSpaceOptionValues;
- (id)ibDefaultSegueTrigger;
- (void)ibPopulateChildRelationOrder:(id)arg1;
- (id)ibPasteboardTypes;
- (id)ibQualifyingInfoForDefaultLabel;
- (BOOL)ibCanIncrementallyMarshalKeyPath:(id)arg1;
- (BOOL)ibShouldInvalidateInheritableMetricsForChangeToProperty:(id)arg1 fromValue:(id)arg2 inDocument:(id)arg3;
- (id)ibLocalLocalizableGeometryAttributeKeyPaths;
- (id)ibEditorClass;
- (id)ibLocalAttributeKeyPaths;
- (id)ibLocalChildToOneRelationshipsKeyPaths;
- (id)ibDocumentationPropertyInfosForKeyPath:(id)arg1;
- (void)setIbInspectedSystemItemIdentifier:(id)arg1;
- (id)ibInspectedSystemItemIdentifier;
- (void)setIbInspectedLandscapeImage:(id)arg1;
- (void)setIbInspectedImage:(id)arg1;
- (void)setIbInspectedTitle:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

