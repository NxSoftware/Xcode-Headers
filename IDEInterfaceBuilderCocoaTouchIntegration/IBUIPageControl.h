//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IDEInterfaceBuilderCocoaTouchIntegration/IBUIControl.h>

#import "IBDocumentArchiving.h"
#import "NSCoding.h"

@class NSColor, NSString;

@interface IBUIPageControl : IBUIControl <IBDocumentArchiving, NSCoding>
{
    long long numberOfPages;
    long long currentPage;
    BOOL hidesForSinglePage;
    BOOL defersCurrentPageDisplay;
    NSColor *pageIndicatorTintColor;
    NSColor *currentPageIndicatorTintColor;
}

+ (void)registerMarshallingRecordHandlers;
+ (id)keyPathsForValuesAffectingCurrentPage;
+ (BOOL)ibSupportsCocoaTouchAccessibility;
+ (id)ibInstantiateViewForRole:(long long)arg1 withTargetRuntime:(id)arg2 documentClass:(Class)arg3 assetIdentifier:(id)arg4;
@property(copy, nonatomic) NSColor *currentPageIndicatorTintColor; // @synthesize currentPageIndicatorTintColor;
@property(copy, nonatomic) NSColor *pageIndicatorTintColor; // @synthesize pageIndicatorTintColor;
@property(nonatomic) BOOL defersCurrentPageDisplay; // @synthesize defersCurrentPageDisplay;
@property(nonatomic) BOOL hidesForSinglePage; // @synthesize hidesForSinglePage;
@property(nonatomic) long long currentPage; // @synthesize currentPage;
@property(nonatomic) long long numberOfPages; // @synthesize numberOfPages;
- (void).cxx_destruct;
- (void)willChangeTargetRuntimeInDocument:(id)arg1 withContext:(id)arg2;
- (double)adjustWidthAmountForRuntimeMutationContext:(id)arg1;
- (unsigned long long)ibDefaultAccessibilityTraits;
- (BOOL)ibIsAccessibilityElementByDefault;
- (void)unarchiveWithDocumentUnarchiver:(id)arg1;
- (void)archiveWithDocumentArchiver:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)ibWarnings:(id)arg1 forDocument:(id)arg2 withComputationContext:(id)arg3;
- (unsigned long long)ibPreferredActionEventType;
- (id)ibWidgetType;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

