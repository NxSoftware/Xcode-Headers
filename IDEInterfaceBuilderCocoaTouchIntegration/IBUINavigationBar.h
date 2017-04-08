//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IDEInterfaceBuilderCocoaTouchIntegration/IBUIView.h>

#import "IBDocumentArchiving.h"
#import "IBUIEditorDecoratableView.h"

@class IBUITextAttributes, NSArray, NSColor, NSDictionary, NSImage, NSMutableArray, NSString, NSValue;

@interface IBUINavigationBar : IBUIView <IBDocumentArchiving, IBUIEditorDecoratableView>
{
    NSMutableArray *_items;
    NSValue *_cachedTitleViewFrame;
    NSDictionary *_cachedLeftItemFrames;
    NSDictionary *_cachedRightItemFrames;
    NSDictionary *_cachedBarButtonItemImages;
    NSDictionary *_cachedLeftItemsTitleRects;
    NSDictionary *_cachedRightItemsTitleRects;
    BOOL _translucent;
    BOOL _forcesPrompt;
    long long _barStyle;
    IBUITextAttributes *_titleTextAttributes;
    NSImage *_shadowImage;
    NSImage *_backIndicatorImage;
    NSImage *_backIndicatorTransitionMaskImage;
    NSColor *_barTintColor;
}

+ (void)registerMarshallingRecordHandlers;
+ (id)keyPathsForValuesAffectingIbPrompted;
+ (BOOL)shouldArchiveTintColorWithUIViewProperties;
+ (id)keyPathsForValuesAffectingIbInspectedTitleTextShadowVerticalOffset;
+ (id)keyPathsForValuesAffectingIbInspectedTitleTextShadowHorizontalOffset;
+ (id)keyPathsForValuesAffectingIbInspectedHasTitleTextShadowOffset;
+ (id)keyPathsForValuesAffectingIbInspectedTitleTextShadowColor;
+ (id)keyPathsForValuesAffectingIbInspectedTitleTextColor;
+ (id)keyPathsForValuesAffectingIbInspectedTitleFontDescription;
+ (id)keyPathsForValuesAffectingIbInspectedTitleTextAttributes;
+ (id)ibObservedPropertiesForInheritableMetricsInvalidation;
+ (long long)ibInstantiationSizeBehavior;
+ (id)ibInstantiateViewForRole:(long long)arg1 withTargetRuntime:(id)arg2 documentClass:(Class)arg3 assetIdentifier:(id)arg4;
@property(nonatomic) BOOL forcesPrompt; // @synthesize forcesPrompt=_forcesPrompt;
@property(copy, nonatomic) NSColor *barTintColor; // @synthesize barTintColor=_barTintColor;
@property(retain, nonatomic) NSImage *backIndicatorTransitionMaskImage; // @synthesize backIndicatorTransitionMaskImage=_backIndicatorTransitionMaskImage;
@property(retain, nonatomic) NSImage *backIndicatorImage; // @synthesize backIndicatorImage=_backIndicatorImage;
@property(retain, nonatomic) NSImage *shadowImage; // @synthesize shadowImage=_shadowImage;
@property(copy, nonatomic) IBUITextAttributes *titleTextAttributes; // @synthesize titleTextAttributes=_titleTextAttributes;
@property(nonatomic, getter=isTranslucent) BOOL translucent; // @synthesize translucent=_translucent;
@property(nonatomic) long long barStyle; // @synthesize barStyle=_barStyle;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)imageOfBarButtonItem:(id)arg1;
- (id)barButtonItemImages;
- (void)_setCachedItemImagesFromBarItemImagesArray:(id)arg1;
- (struct CGRect)titleViewFrame;
- (struct CGRect)titleRectForButtonBarItem:(id)arg1;
- (id)allBarButtonItems;
- (struct CGRect)frameForButtonBarItem:(id)arg1;
- (id)titleFont;
- (id)promptFont;
- (struct CGRect)promptRect;
- (struct CGRect)titleRect;
- (id)currentNavigationItem;
@property(retain, nonatomic) NSArray *items;
- (void)addNavigationBarItem:(id)arg1;
- (void)removeNavigationBarItem:(id)arg1;
- (id)title;
- (id)prompt;
- (BOOL)isPrompted;
- (void)populateCachedGeometryInfos:(id)arg1;
- (void)enumerateCachedImageKeyPaths:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 targetRuntime:(id)arg2;
- (void)unarchiveWithDocumentUnarchiver:(id)arg1;
- (void)archiveWithDocumentArchiver:(id)arg1;
- (BOOL)ibWantsPlaceholderContainingViewController;
- (void)ibWarnings:(id)arg1 forDocument:(id)arg2 withComputationContext:(id)arg3;
- (void)setIbInspectedTitleTextShadowVerticalOffset:(double)arg1;
- (double)ibInspectedTitleTextShadowVerticalOffset;
- (void)setIbInspectedTitleTextShadowHorizontalOffset:(double)arg1;
- (double)ibInspectedTitleTextShadowHorizontalOffset;
- (void)setIbInspectedHasTitleTextShadowOffset:(BOOL)arg1;
- (BOOL)ibInspectedHasTitleTextShadowOffset;
- (void)setIbInspectedTitleTextShadowColor:(id)arg1;
- (id)ibInspectedTitleTextShadowColor;
- (void)setIbInspectedTitleTextColor:(id)arg1;
- (id)ibInspectedTitleTextColor;
- (void)setIbInspectedTitleFontDescription:(id)arg1;
- (id)ibInspectedTitleFontDescription;
- (void)setIbInspectedTitleTextAttributes:(id)arg1;
- (id)ibInspectedTitleTextAttributes;
- (id)ibUnarchiveValueForAttribute:(id)arg1 inConfiguration:(id)arg2 withDocumentUnarchiver:(id)arg3;
- (void)ibArchiveEvaluatedValue:(id)arg1 forAttribute:(id)arg2 inConfiguration:(id)arg3 withDocumentArchiver:(id)arg4;
- (id)ibLocalPerConfigurationAttributeKeyPaths;
- (void)editorView:(id)arg1 drawDecoratorInRect:(struct CGRect)arg2 overlayView:(id)arg3;
- (BOOL)ibShouldChildBeIncludedInArbitrationUnitWithParent:(id)arg1;
- (BOOL)ibCanBeCollectionViewBackgroundView;
- (BOOL)ibCanBeTableViewBracketingView;
- (id)ibWidgetType;
- (void)ibPopulateChildRelationOrder:(id)arg1;
- (id)ibAcceptContentsOfPasteboard:(id)arg1 inDocument:(id)arg2 insertionContext:(id)arg3;
- (BOOL)ibCanAcceptContentsOfPasteboard:(id)arg1 inDocument:(id)arg2 targetChildRelation:(id *)arg3;
- (void)ibRemoveChildren:(id)arg1;
- (struct CGRect)ibRectForChild:(id)arg1 inFrameController:(id)arg2;
- (BOOL)ibIsChildInitiallySelectable:(id)arg1;
- (void)ibCustomizeForInsertionIntoIBUIView:(id)arg1 withObjects:(id)arg2 fromLibraryOrDifferentTargetRuntime:(BOOL)arg3 andInsertionContext:(id)arg4;
- (id)ibLocalAttributeKeyPaths;
- (id)ibLocalChildToManyRelationshipsKeyPaths;
- (Class)barMetricsClass;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

