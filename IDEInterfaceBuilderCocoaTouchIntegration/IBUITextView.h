//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IDEInterfaceBuilderCocoaTouchIntegration/IBUIScrollView.h>

#import "IBDocumentArchiving.h"
#import "IBUIAttributedTextContainer.h"
#import "IBUITextInputTraits.h"

@class IBUIFontDescription, IBUITextInputTraits, NSAttributedString, NSColor, NSString;

@interface IBUITextView : IBUIScrollView <IBDocumentArchiving, IBUIAttributedTextContainer, IBUITextInputTraits>
{
    BOOL _usesAttributedText;
    BOOL _editable;
    BOOL _adjustsFontForContentSizeCategory;
    BOOL _allowsEditingTextAttributes;
    BOOL _selectable;
    int _textAlignment;
    NSAttributedString *_attributedText;
    IBUIFontDescription *_fontDescription;
    NSString *_text;
    NSColor *_textColor;
    IBUITextInputTraits *_textInputTraits;
    unsigned long long _dataDetectorTypes;
}

+ (void)registerMarshallingRecordHandlers;
+ (BOOL)ibSupportsCocoaTouchAccessibility;
+ (id)ibInstantiateViewForRole:(long long)arg1 withTargetRuntime:(id)arg2 documentClass:(Class)arg3 assetIdentifier:(id)arg4;
@property(nonatomic) BOOL selectable; // @synthesize selectable=_selectable;
@property(nonatomic) unsigned long long dataDetectorTypes; // @synthesize dataDetectorTypes=_dataDetectorTypes;
@property(nonatomic) BOOL allowsEditingTextAttributes; // @synthesize allowsEditingTextAttributes=_allowsEditingTextAttributes;
@property(nonatomic) BOOL adjustsFontForContentSizeCategory; // @synthesize adjustsFontForContentSizeCategory=_adjustsFontForContentSizeCategory;
@property(nonatomic) BOOL editable; // @synthesize editable=_editable;
@property(nonatomic) BOOL usesAttributedText; // @synthesize usesAttributedText=_usesAttributedText;
@property(copy, nonatomic) NSColor *textColor; // @synthesize textColor=_textColor;
@property(nonatomic) int textAlignment; // @synthesize textAlignment=_textAlignment;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(copy, nonatomic) NSAttributedString *attributedText; // @synthesize attributedText=_attributedText;
- (void).cxx_destruct;
- (void)unarchiveTextColor:(id)arg1;
- (void)archiveTextColor:(id)arg1;
- (void)decodeFont:(id)arg1;
- (void)encodeFont:(id)arg1;
- (void)unarchiveFont:(id)arg1;
- (void)archiveFont:(id)arg1;
- (void)decodeAttributedText:(id)arg1;
- (void)encodeAttributedText:(id)arg1;
- (void)unarchiveAttributedText:(id)arg1;
- (void)archiveAttributedText:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)localExtraMarshalledAttributesKeyPaths;
@property(retain, nonatomic) IBUITextInputTraits *textInputTraits; // @synthesize textInputTraits=_textInputTraits;
- (void)setFontDescription:(id)arg1;
@property(readonly, copy, nonatomic) IBUIFontDescription *fontDescription;
@property(readonly) IBUIFontDescription *defaultFontDescription;
- (unsigned long long)ibDefaultAccessibilityTraits;
- (BOOL)ibIsAccessibilityElementByDefault;
- (void)unarchiveWithDocumentUnarchiver:(id)arg1;
- (void)archiveWithDocumentArchiver:(id)arg1;
- (id)ibCompiledValueForKeyPath:(id)arg1 withPropertyStorage:(id)arg2 inConfiguration:(id)arg3;
- (id)ibValueForInspectedConfigurableProperty:(id)arg1 inConfiguration:(id)arg2;
- (id)ibUnarchiveValueForAttribute:(id)arg1 inConfiguration:(id)arg2 withDocumentUnarchiver:(id)arg3;
- (void)ibArchiveEvaluatedValue:(id)arg1 forAttribute:(id)arg2 inConfiguration:(id)arg3 withDocumentArchiver:(id)arg4;
- (id)ibLocalPerConfigurationAttributeKeyPaths;
- (long long)ibPreferredResizeDirection;
- (BOOL)ibOverridesFrameworkMetricsForPreferredSize;
- (id)ibFontFromFontDescription;
- (id)ibDefaultFontKeyPath;
- (void)ibWarnings:(id)arg1 forDocument:(id)arg2 withComputationContext:(id)arg3;
- (BOOL)ibWantsBoundsIndicatorDuringTracking;
- (id)ibFieldEditorConfigurationForTextKeyPath:(id)arg1;
- (struct CGRect)ibInlineTextEditingRectForKeyPath:(id)arg1;
- (id)ibTextKeyPathForDefaultInlineStringEditing;
- (Class)ibEditorClass;
- (id)ibLocalLocalizableStringsAttributeKeyPaths;
- (id)ibLocalAdditionalLocalizableAttributeKeyPaths;
- (id)ibLocalAttributeKeyPaths;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

