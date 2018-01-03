//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEInterfaceBuilderCocoaTouchIntegration/IBUIView.h>

#import <IDEInterfaceBuilderCocoaTouchIntegration/IBDocumentArchiving-Protocol.h>

@class IBUICollectionView, NSString;

@interface IBUICollectionReusableView : IBUIView <IBDocumentArchiving>
{
    IBUICollectionView *_collectionView;
    NSString *_reuseIdentifier;
}

+ (id)keyPathsForValuesAffectingIbShouldShowReferenceSizeInSizeInspector;
+ (id)keyPathsForValuesAffectingIbInspectedReferenceSize;
+ (void)ibDidInstantiateView:(id)arg1 forAsset:(id)arg2 role:(long long)arg3;
+ (long long)ibInstantiationSizeBehavior;
+ (id)ibInstantiateViewForRole:(long long)arg1 withTargetRuntime:(id)arg2 documentClass:(Class)arg3 assetIdentifier:(id)arg4;
@property(copy, nonatomic) NSString *reuseIdentifier; // @synthesize reuseIdentifier=_reuseIdentifier;
@property(nonatomic) __weak IBUICollectionView *collectionView; // @synthesize collectionView=_collectionView;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (BOOL)prefersCachedImageBasedDrawing;
- (void)setBackgroundColor:(id)arg1;
- (void)unarchiveWithDocumentUnarchiver:(id)arg1;
- (void)archiveWithDocumentArchiver:(id)arg1;
- (void)ibDrawBoundsIndicatorInCoordinateSpaceOfView:(id)arg1;
- (int)ibBoundsIndicatorRectBorderSides;
- (id)ibBoundsIndicatorColor;
- (BOOL)ibWantsBoundsIndicatorAlways;
- (BOOL)ibIsInspectorApplicable:(id)arg1 forCategory:(id)arg2;
- (BOOL)ibShouldShowReferenceSizeInSizeInspector;
@property(nonatomic) struct CGSize ibInspectedReferenceSize;
- (struct CGSize)ibMaximumSize;
- (struct CGSize)ibMinimumSize;
- (struct CGSize)constrainSize:(struct CGSize)arg1;
- (void)ibWarnings:(id)arg1 forDocument:(id)arg2 withComputationContext:(id)arg3;
- (id)ibDuplicateReuseIdentifierWarningKey;
- (id)ibMissingReuseIdentifierWarningKey;
- (BOOL)ibHasDuplicateReuseIdentifierWithComputationContext:(id)arg1;
- (id)ibPasteboardTypes;
- (Class)ibTrackerClass;
- (BOOL)ibCanBeCollectionViewBackgroundView;
- (BOOL)ibCanBeTableViewBracketingView;
- (void)ibCustomizeForInsertionIntoIBUICollectionView:(id)arg1 withObjects:(id)arg2 fromLibraryOrDifferentTargetRuntime:(BOOL)arg3 andInsertionContext:(id)arg4;
- (id)ibDesignableContentView;
- (id)ibLocalAttributeKeyPaths;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

