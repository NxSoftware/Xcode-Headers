//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <IDEInterfaceBuilderCocoaTouchIntegration/IBUIControl.h>

#import <IDEInterfaceBuilderCocoaTouchIntegration/IBDocumentArchiving-Protocol.h>
#import <IDEInterfaceBuilderCocoaTouchIntegration/IBUIFontedObject-Protocol.h>

@class IBUIButtonStateAttribtues, IBUIFontDescription, NSAttributedString, NSColor, NSImage, NSString;

@interface IBUIButton : IBUIControl <IBDocumentArchiving, IBUIFontedObject>
{
    struct {
        CDStruct_c519178c content;
        CDStruct_c519178c title;
        CDStruct_c519178c image;
    } _edgeInsets;
    IBUIButtonStateAttribtues *_stateAttributes;
    BOOL _reversesTitleShadowWhenHighlighted;
    BOOL _showsTouchWhenHighlighted;
    BOOL _adjustsImageWhenHighlighted;
    BOOL _adjustsImageWhenDisabled;
    BOOL _hasAttributedTitle;
    BOOL _adjustsImageSizeForAccessibilityContentSizeCategory;
    BOOL _springLoaded;
    int _lineBreakMode;
    IBUIFontDescription *_fontDescription;
    long long _buttonType;
    struct CGSize _titleShadowOffset;
}

+ (void)registerMarshallingRecordHandlers;
+ (id)defaultLegacyHighlightedTitleColor;
+ (id)defaultLegacyNormalTitleColor;
+ (id)keyPathsForValuesAffectingEffectiveFontDescription;
+ (id)keyPathsForValuesAffectingDefaultFontDescription;
+ (id)defaultFontDescriptionForTargetRuntime:(id)arg1 buttonType:(long long)arg2;
+ (BOOL)buttonTypeSupportsCustomTintColor:(long long)arg1;
+ (BOOL)buttonTypeSupportsCustomTitleShadowColor:(long long)arg1;
+ (BOOL)buttonTypeSupportsCustomTitleColor:(long long)arg1;
+ (BOOL)buttonTypeSupportsCustomBackgroundImage:(long long)arg1;
+ (BOOL)buttonTypeSupportsCustomImage:(long long)arg1;
+ (BOOL)buttonTypeSupportsCustomAttributedTitle:(long long)arg1;
+ (BOOL)buttonTypeSupportsCustomTitle:(long long)arg1;
+ (BOOL)shouldArchiveTintColorWithUIViewProperties;
+ (BOOL)ibSupportsCocoaTouchAccessibility;
+ (id)keyPathsForValuesAffectingIbInspectedImageEdgeInsets;
+ (id)keyPathsForValuesAffectingIbInspectedTitleEdgeInsets;
+ (id)keyPathsForValuesAffectingIbInspectedContentEdgeInsets;
+ (id)keyPathsForValuesAffectingIbInspectedHasAttributedTitle;
+ (id)keyPathsForValuesAffectingDefaultFocusedTitleColor;
+ (id)keyPathsForValuesAffectingDefaultSelectedTitleColor;
+ (id)keyPathsForValuesAffectingDefaultDisabledTitleColor;
+ (id)keyPathsForValuesAffectingDefaultHighlightedTitleColor;
+ (id)keyPathsForValuesAffectingDefaultNormalTitleColor;
+ (id)keyPathsForValuesAffectingIbInspectedButtonType;
+ (id)keyPathsForValuesAffectingIbInspectedDisabledTitleShadowColor;
+ (id)keyPathsForValuesAffectingIbInspectedFocusedTitleShadowColor;
+ (id)keyPathsForValuesAffectingIbInspectedSelectedTitleShadowColor;
+ (id)keyPathsForValuesAffectingIbInspectedHighlightedTitleShadowColor;
+ (id)keyPathsForValuesAffectingIbInspectedNormalTitleShadowColor;
+ (id)keyPathsForValuesAffectingIbInspectedDisabledTitleColor;
+ (id)keyPathsForValuesAffectingIbInspectedFocusedTitleColor;
+ (id)keyPathsForValuesAffectingIbInspectedSelectedTitleColor;
+ (id)keyPathsForValuesAffectingIbInspectedHighlightedTitleColor;
+ (id)keyPathsForValuesAffectingIbInspectedNormalTitleColor;
+ (id)keyPathsForValuesAffectingIbInspectedDisabledBackgroundImage;
+ (id)keyPathsForValuesAffectingIbInspectedFocusedBackgroundImage;
+ (id)keyPathsForValuesAffectingIbInspectedSelectedBackgroundImage;
+ (id)keyPathsForValuesAffectingIbInspectedHighlightedBackgroundImage;
+ (id)keyPathsForValuesAffectingIbInspectedNormalBackgroundImage;
+ (id)keyPathsForValuesAffectingIbInspectedDisabledImage;
+ (id)keyPathsForValuesAffectingIbInspectedFocusedImage;
+ (id)keyPathsForValuesAffectingIbInspectedSelectedImage;
+ (id)keyPathsForValuesAffectingIbInspectedHighlightedImage;
+ (id)keyPathsForValuesAffectingIbInspectedNormalImage;
+ (id)keyPathsForValuesAffectingIbInspectedDisabledAttributedTitle;
+ (id)keyPathsForValuesAffectingIbInspectedFocusedAttributedTitle;
+ (id)keyPathsForValuesAffectingIbInspectedSelectedAttributedTitle;
+ (id)keyPathsForValuesAffectingIbInspectedHighlightedAttributedTitle;
+ (id)keyPathsForValuesAffectingIbInspectedNormalAttributedTitle;
+ (id)keyPathsForValuesAffectingIbInspectedDisabledTitle;
+ (id)keyPathsForValuesAffectingIbInspectedFocusedTitle;
+ (id)keyPathsForValuesAffectingIbInspectedSelectedTitle;
+ (id)keyPathsForValuesAffectingIbInspectedHighlightedTitle;
+ (id)keyPathsForValuesAffectingIbInspectedNormalTitle;
+ (id)keyPathsForValuesAffectingIbInspectedFontDescription;
+ (id)ibInstantiateViewForRole:(long long)arg1 withTargetRuntime:(id)arg2 documentClass:(Class)arg3 assetIdentifier:(id)arg4;
@property(nonatomic, getter=isSpringLoaded) BOOL springLoaded; // @synthesize springLoaded=_springLoaded;
@property(nonatomic) struct CGSize titleShadowOffset; // @synthesize titleShadowOffset=_titleShadowOffset;
@property(nonatomic) int lineBreakMode; // @synthesize lineBreakMode=_lineBreakMode;
@property(nonatomic) long long buttonType; // @synthesize buttonType=_buttonType;
@property(nonatomic) BOOL adjustsImageSizeForAccessibilityContentSizeCategory; // @synthesize adjustsImageSizeForAccessibilityContentSizeCategory=_adjustsImageSizeForAccessibilityContentSizeCategory;
@property(nonatomic) BOOL hasAttributedTitle; // @synthesize hasAttributedTitle=_hasAttributedTitle;
@property(nonatomic) BOOL adjustsImageWhenDisabled; // @synthesize adjustsImageWhenDisabled=_adjustsImageWhenDisabled;
@property(nonatomic) BOOL adjustsImageWhenHighlighted; // @synthesize adjustsImageWhenHighlighted=_adjustsImageWhenHighlighted;
@property(nonatomic) BOOL showsTouchWhenHighlighted; // @synthesize showsTouchWhenHighlighted=_showsTouchWhenHighlighted;
@property(nonatomic) BOOL reversesTitleShadowWhenHighlighted; // @synthesize reversesTitleShadowWhenHighlighted=_reversesTitleShadowWhenHighlighted;
@property(copy, nonatomic) IBUIFontDescription *fontDescription; // @synthesize fontDescription=_fontDescription;
- (void).cxx_destruct;
- (void)unarchiveFont:(id)arg1;
- (void)archiveFont:(id)arg1;
- (void)decodeFont:(id)arg1;
- (void)encodeFont:(id)arg1;
- (id)decodedTitleColorForKey:(id)arg1 withCoder:(id)arg2 defaultLegacyColor:(id)arg3;
- (void)encodeTitleColor:(id)arg1 forKey:(id)arg2 withCoder:(id)arg3 defaultLegacyColor:(id)arg4;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)willChangeTargetRuntimeInDocument:(id)arg1 withContext:(id)arg2;
- (CDStruct_c519178c)insetForStandardTypeWithRuntimeMutationContext:(id)arg1;
- (void)unarchiveHasAttributedTitle:(id)arg1;
- (void)archiveHasAttributedTitle:(id)arg1;
- (void)unarchivePerStateAttributes:(id)arg1;
- (void)unarchivePerStateAttributesForKey:(id)arg1 withArchiver:(id)arg2;
- (void)archivePerStateAttributes:(id)arg1;
- (void)archivePerStateAttributesForKey:(id)arg1 withArchiver:(id)arg2;
- (BOOL)attributeGroupHasValues:(id)arg1 document:(id)arg2;
- (void)setUnarchivedFontDescription:(id)arg1 whilePasting:(BOOL)arg2 forDocument:(id)arg3;
- (void)setUnarchivedTitleColor:(id)arg1 forStateAttributes:(id)arg2 document:(id)arg3;
- (id)archivedTitleColorForStateAttributes:(id)arg1 document:(id)arg2;
- (void)clearTitleShadowColors;
@property(copy) NSColor *disabledTitleShadowColor;
@property(copy) NSColor *focusedTitleShadowColor;
@property(copy) NSColor *selectedTitleShadowColor;
@property(copy) NSColor *highlightedTitleShadowColor;
@property(copy) NSColor *normalTitleShadowColor;
- (void)clearTitleColors;
@property(copy) NSColor *disabledTitleColor;
@property(copy) NSColor *focusedTitleColor;
@property(copy) NSColor *selectedTitleColor;
@property(copy) NSColor *highlightedTitleColor;
@property(copy) NSColor *normalTitleColor;
- (void)clearBackgroundImages;
@property(retain) NSImage *disabledBackgroundImage;
@property(retain) NSImage *focusedBackgroundImage;
@property(retain) NSImage *selectedBackgroundImage;
@property(retain) NSImage *highlightedBackgroundImage;
@property(retain) NSImage *normalBackgroundImage;
- (void)clearImages;
@property(retain) NSImage *disabledImage;
@property(retain) NSImage *focusedImage;
@property(retain) NSImage *selectedImage;
@property(retain) NSImage *highlightedImage;
@property(retain) NSImage *normalImage;
- (void)clearAttributedTitles;
@property(copy) NSAttributedString *disabledAttributedTitle;
@property(copy) NSAttributedString *focusedAttributedTitle;
@property(copy) NSAttributedString *selectedAttributedTitle;
@property(copy) NSAttributedString *highlightedAttributedTitle;
@property(copy) NSAttributedString *normalAttributedTitle;
- (void)clearTitles;
@property(copy) NSString *disabledTitle;
@property(copy) NSString *focusedTitle;
@property(copy) NSString *selectedTitle;
@property(copy) NSString *highlightedTitle;
@property(copy) NSString *normalTitle;
@property CDStruct_c519178c edgeInsetsImage;
@property CDStruct_c519178c edgeInsetsTitle;
@property CDStruct_c519178c edgeInsetsContent;
- (BOOL)hasAnyBackgroundImage;
- (BOOL)hasAnyImage;
- (BOOL)hasAnyTitle;
- (id)valueForKey:(id)arg1;
@property(readonly, nonatomic) IBUIFontDescription *effectiveFontDescription;
@property(readonly, nonatomic) IBUIFontDescription *defaultFontDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) IBUIButtonStateAttribtues *stateAttributes;
- (unsigned long long)ibDefaultAccessibilityTraits;
- (BOOL)ibIsAccessibilityElementByDefault;
- (void)unarchiveWithDocumentUnarchiver:(id)arg1;
- (void)archiveWithDocumentArchiver:(id)arg1;
- (id)ibDocumentationPropertyInfosForKeyPath:(id)arg1;
- (void)setIbInspectedImageEdgeInsets:(struct NSEdgeInsets)arg1;
- (struct NSEdgeInsets)ibInspectedImageEdgeInsets;
- (void)setIbInspectedTitleEdgeInsets:(struct NSEdgeInsets)arg1;
- (struct NSEdgeInsets)ibInspectedTitleEdgeInsets;
- (void)setIbInspectedContentEdgeInsets:(struct NSEdgeInsets)arg1;
- (struct NSEdgeInsets)ibInspectedContentEdgeInsets;
- (void)setIbInspectedHasAttributedTitle:(BOOL)arg1;
- (BOOL)ibInspectedHasAttributedTitle;
- (id)defaultFocusedTitleColor;
- (id)defaultSelectedTitleColor;
- (id)defaultDisabledTitleColor;
- (id)defaultHighlightedTitleColor;
- (id)defaultNormalTitleColor;
- (id)defaultTitleColorForState:(long long)arg1;
- (id)ibInspectedButtonTypeValues;
- (id)ibInspectedButtonTypeTitles;
- (void)setIbInspectedButtonType:(long long)arg1;
- (long long)ibInspectedButtonType;
- (BOOL)ibShouldSwitchToCustomTypeWhenSettingValueForPerStateKey:(id)arg1;
- (void)setIbInspectedDisabledTitleShadowColor:(id)arg1;
- (id)ibInspectedDisabledTitleShadowColor;
- (void)setIbInspectedFocusedTitleShadowColor:(id)arg1;
- (id)ibInspectedFocusedTitleShadowColor;
- (void)setIbInspectedSelectedTitleShadowColor:(id)arg1;
- (id)ibInspectedSelectedTitleShadowColor;
- (void)setIbInspectedHighlightedTitleShadowColor:(id)arg1;
- (id)ibInspectedHighlightedTitleShadowColor;
- (void)setIbInspectedNormalTitleShadowColor:(id)arg1;
- (id)ibInspectedNormalTitleShadowColor;
- (void)setIbInspectedDisabledTitleColor:(id)arg1;
- (id)ibInspectedDisabledTitleColor;
- (void)setIbInspectedFocusedTitleColor:(id)arg1;
- (id)ibInspectedFocusedTitleColor;
- (void)setIbInspectedSelectedTitleColor:(id)arg1;
- (id)ibInspectedSelectedTitleColor;
- (void)setIbInspectedHighlightedTitleColor:(id)arg1;
- (id)ibInspectedHighlightedTitleColor;
- (void)setIbInspectedNormalTitleColor:(id)arg1;
- (id)ibInspectedNormalTitleColor;
- (void)setIbInspectedDisabledBackgroundImage:(id)arg1;
- (id)ibInspectedDisabledBackgroundImage;
- (void)setIbInspectedFocusedBackgroundImage:(id)arg1;
- (id)ibInspectedFocusedBackgroundImage;
- (void)setIbInspectedSelectedBackgroundImage:(id)arg1;
- (id)ibInspectedSelectedBackgroundImage;
- (void)setIbInspectedHighlightedBackgroundImage:(id)arg1;
- (id)ibInspectedHighlightedBackgroundImage;
- (void)setIbInspectedNormalBackgroundImage:(id)arg1;
- (id)ibInspectedNormalBackgroundImage;
- (void)setIbInspectedDisabledImage:(id)arg1;
- (id)ibInspectedDisabledImage;
- (void)setIbInspectedFocusedImage:(id)arg1;
- (id)ibInspectedFocusedImage;
- (void)setIbInspectedSelectedImage:(id)arg1;
- (id)ibInspectedSelectedImage;
- (void)setIbInspectedHighlightedImage:(id)arg1;
- (id)ibInspectedHighlightedImage;
- (void)setIbInspectedNormalImage:(id)arg1;
- (id)ibInspectedNormalImage;
- (void)setIbInspectedDisabledAttributedTitle:(id)arg1;
- (id)ibInspectedDisabledAttributedTitle;
- (void)setIbInspectedFocusedAttributedTitle:(id)arg1;
- (id)ibInspectedFocusedAttributedTitle;
- (void)setIbInspectedSelectedAttributedTitle:(id)arg1;
- (id)ibInspectedSelectedAttributedTitle;
- (void)setIbInspectedHighlightedAttributedTitle:(id)arg1;
- (id)ibInspectedHighlightedAttributedTitle;
- (void)setIbInspectedNormalAttributedTitle:(id)arg1;
- (id)ibInspectedNormalAttributedTitle;
- (void)setIbInspectedDisabledTitle:(id)arg1;
- (id)ibInspectedDisabledTitle;
- (void)setIbInspectedFocusedTitle:(id)arg1;
- (id)ibInspectedFocusedTitle;
- (void)setIbInspectedSelectedTitle:(id)arg1;
- (id)ibInspectedSelectedTitle;
- (void)setIbInspectedHighlightedTitle:(id)arg1;
- (id)ibInspectedHighlightedTitle;
- (void)setIbInspectedNormalTitle:(id)arg1;
- (id)ibInspectedNormalTitle;
- (void)setIbInspectedFontDescription:(id)arg1;
- (id)ibInspectedFontDescription;
- (void)setIbExternalStateConfiguration:(id)arg1;
- (id)ibExternalStateConfiguration;
- (id)ibCompiledValueForKeyPath:(id)arg1 withPropertyStorage:(id)arg2 inConfiguration:(id)arg3 context:(id)arg4;
- (id)ibValueForInspectedConfigurableProperty:(id)arg1 inConfiguration:(id)arg2;
- (BOOL)ibShouldRefreshInspectorBeforeShowingFindIndicatorForAttributeSearchLocation:(id)arg1 inDocument:(id)arg2;
- (id)ibContextLabelForAttributeSearchLocation:(id)arg1 inInspectors:(id)arg2 inDocument:(id)arg3;
- (BOOL)ibIsSearchableAttributeKeyPathVisible:(id)arg1 inInspectors:(id)arg2 inDocument:(id)arg3;
- (BOOL)showFocusState;
- (id)ibFontFromFontDescription;
- (id)ibDefaultFontDescriptionKeyPath;
- (id)ibDefaultFontKeyPath;
- (void)ibWarnings:(id)arg1 forDocument:(id)arg2 withComputationContext:(id)arg3;
- (void)ibCustomizeForInsertionIntoIBUIView:(id)arg1 withObjects:(id)arg2 fromLibraryOrDifferentTargetRuntime:(BOOL)arg3 andInsertionContext:(id)arg4;
- (id)ibAcceptContentsOfPasteboard:(id)arg1 inDocument:(id)arg2 insertionContext:(id)arg3;
- (BOOL)ibCanAcceptContentsOfPasteboard:(id)arg1 inDocument:(id)arg2 targetChildRelation:(id *)arg3;
- (id)ibFieldEditorConfigurationForTextKeyPath:(id)arg1;
- (struct CGRect)ibInlineTextEditingRectForKeyPath:(id)arg1;
- (id)ibTextKeyPathForDefaultInlineStringEditing;
- (void)setIbInlineEditedAttributedTitle:(id)arg1;
- (id)ibInlineEditedAttributedTitle;
- (void)setIbInlineEditedTitle:(id)arg1;
- (id)ibInlineEditedTitle;
- (unsigned long long)ibPreferredActionEventType;
- (id)ibWidgetType;
- (id)ibTypeNameForDefaultLabel;
- (double)ibHIRecommededMinimumWidth;
- (BOOL)ibShouldBeProcessedForLocalizationWarnings;
- (BOOL)ibUsesWidgetTypeForTypeNameForDefaultLabel;
- (id)ibQualifyingInfoForDefaultLabel;
- (id)ibInitialConnectionLabelSearchTerm;
- (Class)ibEditorClass;
- (id)ibLocalLocalizableStringsAttributeKeyPaths;
- (id)ibLocalAttributeKeyPaths;
- (id)ibLocalLocalizableGeometryAttributeKeyPaths;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

