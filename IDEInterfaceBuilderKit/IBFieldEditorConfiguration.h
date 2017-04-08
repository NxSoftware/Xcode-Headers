//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSAttributedString, NSFont, NSString, NSValue;

@interface IBFieldEditorConfiguration : NSObject <NSCopying>
{
    BOOL _wraps;
    BOOL _bordered;
    BOOL _richText;
    BOOL _growsToFitBounds;
    BOOL _usesFontPanel;
    BOOL _importsGraphics;
    BOOL _allowsEditingTextAttributes;
    NSAttributedString *_initialAttributedValue;
    NSString *_initialValue;
    unsigned long long _alignment;
    NSFont *_font;
    NSValue *_anchor;
    NSValue *_minimumSize;
    NSValue *_maximumSize;
    double _lineFragmentPadding;
    long long _typesetterBehavior;
}

+ (id)fieldEditorConfigurationFromCell:(id)arg1;
@property long long typesetterBehavior; // @synthesize typesetterBehavior=_typesetterBehavior;
@property BOOL allowsEditingTextAttributes; // @synthesize allowsEditingTextAttributes=_allowsEditingTextAttributes;
@property BOOL importsGraphics; // @synthesize importsGraphics=_importsGraphics;
@property BOOL usesFontPanel; // @synthesize usesFontPanel=_usesFontPanel;
@property BOOL growsToFitBounds; // @synthesize growsToFitBounds=_growsToFitBounds;
@property(getter=isRichText) BOOL richText; // @synthesize richText=_richText;
@property(getter=isBordered) BOOL bordered; // @synthesize bordered=_bordered;
@property BOOL wraps; // @synthesize wraps=_wraps;
@property double lineFragmentPadding; // @synthesize lineFragmentPadding=_lineFragmentPadding;
@property(copy) NSValue *maximumSize; // @synthesize maximumSize=_maximumSize;
@property(copy) NSValue *minimumSize; // @synthesize minimumSize=_minimumSize;
@property(copy) NSValue *anchor; // @synthesize anchor=_anchor;
@property(copy) NSFont *font; // @synthesize font=_font;
@property unsigned long long alignment; // @synthesize alignment=_alignment;
@property(copy) NSString *initialValue; // @synthesize initialValue=_initialValue;
@property(copy) NSAttributedString *initialAttributedValue; // @synthesize initialAttributedValue=_initialAttributedValue;
- (void).cxx_destruct;
- (id)effectiveInitalAttributedValue;
- (CDUnion_31865a80)effectiveAnchor;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

