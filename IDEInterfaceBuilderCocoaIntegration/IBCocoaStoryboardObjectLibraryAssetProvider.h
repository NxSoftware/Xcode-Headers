//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEInterfaceBuilderCocoaIntegration/IBCocoaObjectLibraryAssetProvider.h>

@interface IBCocoaStoryboardObjectLibraryAssetProvider : IBCocoaObjectLibraryAssetProvider
{
}

- (id)windowAssetForWindowObjectAsset:(id)arg1;
- (id)processPasteboardObjectsForAsset:(id)arg1;
- (void)document:(id)arg1 didAddDraggedObjects:(id)arg2 fromDraggedObjectLibraryAsset:(id)arg3;
- (void)didAddContainerViewAssetProducts:(id)arg1 toDocument:(id)arg2;
- (id)objectContainerFromAsset:(id)arg1 forInsertionIntoPasteboard:(id)arg2;
- (id)objectContainerForCollectionViewItemAsset:(id)arg1;
- (id)objectContainerForPageControllerAsset:(id)arg1;
- (id)objectContainerForSplitViewControllerAsset:(id)arg1;
- (id)objectContainerForTabViewControllerAsset:(id)arg1;
- (id)objectContainerForWindowControllerAsset:(id)arg1;
- (BOOL)shouldIncludeAsset:(id)arg1;

@end

