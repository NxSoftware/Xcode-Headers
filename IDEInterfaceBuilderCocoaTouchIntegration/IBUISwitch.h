//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IDEInterfaceBuilderCocoaTouchIntegration/IBUIControl.h>

#import "IBDocumentArchiving.h"
#import "NSCoding.h"

@class NSColor, NSImage, NSString;

@interface IBUISwitch : IBUIControl <IBDocumentArchiving, NSCoding>
{
    BOOL on;
    NSColor *onTintColor;
    NSColor *thumbTintColor;
    NSImage *onImage;
    NSImage *offImage;
}

+ (BOOL)shouldArchiveTintColorWithUIViewProperties;
+ (BOOL)ibSupportsCocoaTouchAccessibility;
+ (id)ibInstantiateViewForRole:(long long)arg1 withTargetRuntime:(id)arg2 documentClass:(Class)arg3 assetIdentifier:(id)arg4;
@property(retain, nonatomic) NSImage *offImage; // @synthesize offImage;
@property(retain, nonatomic) NSImage *onImage; // @synthesize onImage;
@property(copy, nonatomic) NSColor *thumbTintColor; // @synthesize thumbTintColor;
@property(copy, nonatomic) NSColor *onTintColor; // @synthesize onTintColor;
@property(nonatomic) BOOL on; // @synthesize on;
- (void).cxx_destruct;
- (void)decodeSwitchFrame:(id)arg1;
- (BOOL)xmlCoder:(id)arg1 shouldEncodeRect:(struct CGRect *)arg2 forKey:(id)arg3 context:(id)arg4;
- (id)xmlCoderEncodingCallbackContext:(id)arg1;
- (struct CGRect)convertNewStyleSwitchFrameToOldStyle:(struct CGRect)arg1;
- (struct CGRect)convertOldStyleSwitchFrameToNewStyle:(struct CGRect)arg1;
- (void)willChangeTargetRuntimeInDocument:(id)arg1 withContext:(id)arg2;
- (unsigned long long)ibDefaultAccessibilityTraits;
- (BOOL)ibIsAccessibilityElementByDefault;
- (void)unarchiveWithDocumentUnarchiver:(id)arg1;
- (void)archiveWithDocumentArchiver:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)ibPopulateAdditionalKeyValuePairs:(id)arg1 forCompilationWithMarshallingContext:(id)arg2;
- (unsigned long long)ibPreferredActionEventType;
- (id)ibWidgetType;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

