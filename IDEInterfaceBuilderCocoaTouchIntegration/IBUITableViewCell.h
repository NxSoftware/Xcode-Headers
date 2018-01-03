//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEInterfaceBuilderCocoaTouchIntegration/IBUIView.h>

#import <IDEInterfaceBuilderCocoaTouchIntegration/IBDocumentArchiving-Protocol.h>

@class IBUIImageView, IBUILabel, IBUIStoryboardPreviewingSegueTemplateStorage, IBUITableView, IBUITableViewSection, NSDictionary, NSMutableSet, NSNumber, NSString, NSValue;

@interface IBUITableViewCell : IBUIView <IBDocumentArchiving>
{
    NSDictionary *_cachedLayoutFrames;
    BOOL _isCachedLayoutFramesDirty;
    BOOL _isUpdatingSubviewAttributes;
    BOOL _isLayingOutSubviews;
    BOOL _suppressFutherSubviewObservation;
    NSMutableSet *_observedSubviews;
    NSValue *_separatorInset;
    BOOL _showsReorderControl;
    BOOL _hidesAccessoryWhenEditing;
    BOOL _shouldIndentWhileEditing;
    int _selectionStyle;
    int _accessoryType;
    int _editingAccessoryType;
    int _focusStyle;
    NSNumber *_style;
    long long _indentationLevel;
    double _indentationWidth;
    NSString *_reuseIdentifier;
    NSNumber *_rowHeight;
    IBUIView *_contentView;
    IBUIImageView *_imageView;
    IBUILabel *_textLabel;
    IBUILabel *_detailTextLabel;
    IBUITableViewSection *_section;
    IBUIStoryboardPreviewingSegueTemplateStorage *_accessoryActionPreviewingSegueTemplateStorage;
}

+ (id)ibKeyPathsForContentViewSubviews;
+ (long long)ibDevelopmentTargetForDocumentContentView;
+ (id)ibKeyPathForDocumentContentView;
+ (void)registerMarshallingRecordHandlers;
+ (BOOL)ibSupportsCocoaTouchAccessibility;
+ (id)keyPathsForValuesAffectingIbInspectedDefaultRowHeight;
+ (id)keyPathsForValuesAffectingIbArchivedDesignableContentView;
+ (id)keyPathsForValuesAffectingIbDesignableContentView;
+ (id)keyPathsForValuesAffectingIbInspectedStyle;
+ (id)keyPathsForValuesAffectingIbInspectedSeparatorInsetsMaxX;
+ (id)keyPathsForValuesAffectingIbInspectedSeparatorInsetsMinX;
+ (id)keyPathsForValuesAffectingIbInspectedSeparatorInsetType;
+ (id)keyPathsForValuesAffectingIbInspectedSeparatorInset;
+ (id)keyPathsForValuesAffectingDetailTextLabel;
+ (id)keyPathsForValuesAffectingTextLabel;
+ (id)keyPathsForValuesAffectingImage;
+ (id)keyPathsForValuesAffectingIbInspectedImage;
+ (void)ibDidInstantiateView:(id)arg1 forAsset:(id)arg2 role:(long long)arg3;
+ (long long)ibInstantiationSizeBehavior;
+ (id)ibInstantiateViewForRole:(long long)arg1 withTargetRuntime:(id)arg2 documentClass:(Class)arg3 assetIdentifier:(id)arg4;
@property(retain, nonatomic) IBUIStoryboardPreviewingSegueTemplateStorage *accessoryActionPreviewingSegueTemplateStorage; // @synthesize accessoryActionPreviewingSegueTemplateStorage=_accessoryActionPreviewingSegueTemplateStorage;
@property __weak IBUITableViewSection *section; // @synthesize section=_section;
@property(retain, nonatomic) IBUILabel *detailTextLabel; // @synthesize detailTextLabel=_detailTextLabel;
@property(retain, nonatomic) IBUILabel *textLabel; // @synthesize textLabel=_textLabel;
@property(retain, nonatomic) IBUIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) IBUIView *contentView; // @synthesize contentView=_contentView;
@property(copy, nonatomic) NSValue *separatorInset; // @synthesize separatorInset=_separatorInset;
@property(copy, nonatomic) NSNumber *rowHeight; // @synthesize rowHeight=_rowHeight;
@property(copy, nonatomic) NSString *reuseIdentifier; // @synthesize reuseIdentifier=_reuseIdentifier;
@property(nonatomic) BOOL shouldIndentWhileEditing; // @synthesize shouldIndentWhileEditing=_shouldIndentWhileEditing;
@property(nonatomic) double indentationWidth; // @synthesize indentationWidth=_indentationWidth;
@property(nonatomic) long long indentationLevel; // @synthesize indentationLevel=_indentationLevel;
@property(nonatomic) BOOL hidesAccessoryWhenEditing; // @synthesize hidesAccessoryWhenEditing=_hidesAccessoryWhenEditing;
@property(nonatomic) int focusStyle; // @synthesize focusStyle=_focusStyle;
@property(nonatomic) int editingAccessoryType; // @synthesize editingAccessoryType=_editingAccessoryType;
@property(nonatomic) int accessoryType; // @synthesize accessoryType=_accessoryType;
@property(nonatomic) BOOL showsReorderControl; // @synthesize showsReorderControl=_showsReorderControl;
@property(nonatomic) int selectionStyle; // @synthesize selectionStyle=_selectionStyle;
@property(retain, nonatomic) NSNumber *style; // @synthesize style=_style;
- (void).cxx_destruct;
- (void)decodeSeparatorInset:(id)arg1;
- (void)encodeSeparatorInset:(id)arg1;
- (void)updateSubviewAttributes;
- (void)updateSubviewAttributesForSubviewAtKeyPath:(id)arg1;
- (id)ibVerifyContentViewCurrentContentView;
- (void)setIbVerifyContentViewCurrentContentView:(id)arg1;
- (id)instantiationKeyPathForMarshalledRelatedObject:(id)arg1;
- (id)localExtraMarshalledAttributesKeyPaths;
- (id)localExtraMarshalledToOneRelationshipKeyPaths;
- (id)localExtraMarshalledToManyRelationshipKeyPaths;
- (int)positionInSection;
@property(readonly) IBUITableView *tableView;
- (void)invalidateCachedImage;
- (void)requestCachedImageIfNeeded;
- (void)drawRect:(struct CGRect)arg1;
- (BOOL)doesContainingTableViewHandleDrawing;
- (struct CGRect)imageViewFrame;
- (struct CGRect)detailTextLabelFrame;
- (struct CGRect)textLabelFrame;
- (struct CGRect)contentViewFrame;
- (struct CGRect)frameForSubviewForKeyPath:(id)arg1;
- (id)layoutFrames;
- (void)setCachedLayoutFrames:(id)arg1;
- (void)populateGeometryMarshallingContext:(id)arg1;
- (void)populateCachedGeometryInfos:(id)arg1;
- (void)layoutSubviews;
- (void)verifyContentView:(id)arg1;
- (id)defaultBackgroundColor;
- (void)verifyFramesInSyncForViewsForAutoresizingMasks;
- (id)ibEffectiveContentViewToUseForDocument:(id)arg1;
- (void)verifyContentView;
- (BOOL)isUsingDocumentContentView;
- (void)stopObservingSubview:(id)arg1;
- (void)startObservingSubview:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)tableViewDidChangeSeparatorStyle;
- (void)tableViewDidChangeStyle;
- (BOOL)styleCanHaveImageView:(id)arg1;
- (BOOL)styleCanHaveDetailTextLabel:(id)arg1;
- (BOOL)styleCanHaveTextLabel:(id)arg1;
- (BOOL)isCustomStyle;
- (BOOL)isCustomStyle:(id)arg1;
- (void)setBackgroundColor:(id)arg1;
- (id)awakeAfterUsingCoder:(id)arg1;
- (void)preventFurtherObservationOfSubviews;
- (void)stopObservingAllViews;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 targetRuntime:(id)arg2;
- (unsigned long long)ibDefaultAccessibilityTraits;
- (BOOL)ibIsAccessibilityElementByDefault;
- (void)unarchiveWithDocumentUnarchiver:(id)arg1;
- (void)archiveWithDocumentArchiver:(id)arg1;
- (void)ibAddPreviewingSegueTemplateStorage:(id)arg1 forSegue:(id)arg2;
- (id)ibPrefersMarginRelativeConstraintsToChildItem:(id)arg1;
- (id)ibViewForAncestorViewEdgeMovementQuestionsOfSubview:(id)arg1;
- (BOOL)ibChildView:(id)arg1 shouldUseConstraintsInsteadOfAutoresizingWhenAddedToDocument:(id)arg2;
- (id)ibEffectivePreservesSuperviewLayoutMarginsForDesignTime;
- (BOOL)ibCanChildChangeCustomClassName:(id)arg1;
- (BOOL)ibCanRemoveChildren:(id)arg1;
- (BOOL)ibIsChildViewSizable:(id)arg1;
- (BOOL)ibIsChildViewMovable:(id)arg1;
- (BOOL)ibIsChildViewUserSizable:(id)arg1;
- (BOOL)ibIsChildViewUserMovable:(id)arg1;
- (BOOL)ibIsChildInitiallySelectable:(id)arg1;
- (BOOL)ibIsChildBuiltInCellComponent:(id)arg1;
- (BOOL)ibIsSizable;
- (BOOL)ibIsMovable;
- (void)ibDidBecomeSourceOfSegue:(id)arg1;
- (void)ibWarnings:(id)arg1 forDocument:(id)arg2 withComputationContext:(id)arg3;
- (void)ibSetupTriggerForSegueTemplate:(id)arg1 inCompilationUnit:(id)arg2;
- (id)ibSegueTriggers;
- (id)ibDefaultSegueTrigger;
- (id)ibBeginDesigningInDocument:(id)arg1;
- (id)captureReuseIdentifierMapForTableView:(id)arg1 computationContext:(id)arg2;
- (double)ibInspectedDefaultRowHeight;
- (BOOL)ibCanAcceptContentsOfPasteboard:(id)arg1 inDocument:(id)arg2 targetChildRelation:(id *)arg3;
- (void)setIbArchivedDesignableContentView:(id)arg1 unarchiver:(id)arg2;
- (id)ibArchivedDesignableContentView;
- (id)ibDesignableContentView;
- (id)ibPasteboardTypes;
- (BOOL)ibCanIncrementallyMarshalKeyPath:(id)arg1;
- (Class)ibTrackerClass;
- (id)ibQualifyingInfoForDefaultLabel;
@property(retain) NSNumber *ibInspectedStyle;
- (void)setIbInspectedSeparatorInsetsMaxX:(double)arg1;
- (double)ibInspectedSeparatorInsetsMaxX;
- (void)setIbInspectedSeparatorInsetsMinX:(double)arg1;
- (double)ibInspectedSeparatorInsetsMinX;
@property(nonatomic) long long ibInspectedSeparatorInsetType;
@property(nonatomic) CDStruct_c519178c ibInspectedSeparatorInset;
- (void)ibFinishChangingInspectedStyle;
- (void)ibPrepareToChangeInspectedStyle:(id)arg1;
- (void)ibRemoveInspectedImageView;
- (void)ibSetupInspectedImageView;
- (void)ibClearContentView;
- (id)ibInspectedImage;
- (void)setIbInspectedImage:(id)arg1;
- (id)ibEditorClass;
- (id)ibLocalAttributeKeyPaths;
- (id)ibLocalNonChildToOneRelationshipsKeyPaths;
- (id)ibLocalChildToOneRelationshipsKeyPaths;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

