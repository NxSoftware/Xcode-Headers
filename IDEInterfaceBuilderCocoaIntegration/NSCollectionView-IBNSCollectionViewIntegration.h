//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSCollectionView.h"

@class NSCollectionViewLayout, NSColor;

@interface NSCollectionView (IBNSCollectionViewIntegration)
+ (id)keyPathsForValuesAffectingIbInspectedGridLayout;
+ (id)keyPathsForValuesAffectingIbInspectedFlowLayout;
+ (id)keyPathsForValuesAffectingIbInspectedLayoutMode;
+ (id)keyPathsForValuesAffectingIbShadowedHasSecondaryBackgroundColor;
- (BOOL)ibShouldUseConstraintsInsteadOfAutoresizingWhenChildOfClipView;
@property(copy) NSColor *ibArchivedSecondaryBackgroundColor;
@property(copy) NSColor *ibArchivedPrimaryBackgroundColor;
- (void)setIbShadowedHasSecondaryBackgroundColor:(BOOL)arg1;
- (BOOL)ibShadowedHasSecondaryBackgroundColor;
- (void)setIbShadowedSecondaryBackgroundColor:(id)arg1;
- (id)ibShadowedSecondaryBackgroundColor;
- (void)setIbShadowedPrimaryBackgroundColor:(id)arg1;
- (id)ibShadowedPrimaryBackgroundColor;
- (void)setIbShadowedBackgroundColor:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)ibInspectedGridLayout;
- (id)ibInspectedFlowLayout;
@property(retain) NSCollectionViewLayout *ibShadowedCollectionViewLayout;
@property BOOL ibShadowedAllowsEmptySelection;
- (void)setIbInspectedLayoutMode:(long long)arg1;
- (long long)ibInspectedLayoutMode;
- (BOOL)ibInspectedRuntimeDoesNotSupportLayouts;
- (id)ibDocumentationPropertyInfosForKeyPath:(id)arg1;
- (void)ibWarnings:(id)arg1 forDocument:(id)arg2 withComputationContext:(id)arg3;
@end

