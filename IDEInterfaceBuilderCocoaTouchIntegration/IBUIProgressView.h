//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IDEInterfaceBuilderCocoaTouchIntegration/IBUIView.h>

#import "IBDocumentArchiving.h"
#import "NSCoding.h"

@class NSColor, NSImage, NSString;

@interface IBUIProgressView : IBUIView <IBDocumentArchiving, NSCoding>
{
    int progressViewStyle;
    double progress;
    NSColor *progressTintColor;
    NSColor *trackTintColor;
    NSImage *progressImage;
    NSImage *trackImage;
}

+ (BOOL)ibSupportsCocoaTouchAccessibility;
+ (long long)ibInstantiationSizeBehavior;
+ (id)ibInstantiateViewForRole:(long long)arg1 withTargetRuntime:(id)arg2 documentClass:(Class)arg3 assetIdentifier:(id)arg4;
@property(retain, nonatomic) NSImage *trackImage; // @synthesize trackImage;
@property(retain, nonatomic) NSImage *progressImage; // @synthesize progressImage;
@property(copy, nonatomic) NSColor *trackTintColor; // @synthesize trackTintColor;
@property(copy, nonatomic) NSColor *progressTintColor; // @synthesize progressTintColor;
- (void).cxx_destruct;
- (void)willChangeTargetRuntimeInDocument:(id)arg1 withContext:(id)arg2;
- (void)setProgress:(double)arg1;
- (double)progress;
- (void)setProgressViewStyle:(int)arg1;
- (int)progressViewStyle;
- (unsigned long long)ibDefaultAccessibilityTraits;
- (BOOL)ibIsAccessibilityElementByDefault;
- (void)unarchiveWithDocumentUnarchiver:(id)arg1;
- (void)archiveWithDocumentArchiver:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)ibCustomizeForInsertionIntoIBUIToolbar:(id)arg1 withObjects:(id)arg2 fromLibraryOrDifferentTargetRuntime:(BOOL)arg3 andInsertionContext:(id)arg4;
- (void)ibCustomizeForInsertionIntoIBUINavigationItem:(id)arg1 withObjects:(id)arg2 fromLibraryOrDifferentTargetRuntime:(BOOL)arg3 andInsertionContext:(id)arg4;
- (void)ibCustomizeForInsertionIntoIBUIView:(id)arg1 withObjects:(id)arg2 fromLibraryOrDifferentTargetRuntime:(BOOL)arg3 andInsertionContext:(id)arg4;
- (BOOL)ibSupportsInsertionIntoBarButtonItems;
- (id)ibWidgetType;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

