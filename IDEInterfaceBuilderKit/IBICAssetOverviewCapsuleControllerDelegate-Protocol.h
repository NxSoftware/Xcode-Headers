//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <IDEInterfaceBuilderKit/NSObject-Protocol.h>

@class IBICAssetOverviewCapsuleController, NSArray, NSEvent, NSSet;
@protocol IBCollection;

@protocol IBICAssetOverviewCapsuleControllerDelegate <NSObject>
- (void)assetOverviewCapsuleController:(IBICAssetOverviewCapsuleController *)arg1 trackBandSelectionWithInitialMouseDown:(NSEvent *)arg2 currentMouseDragged:(NSEvent *)arg3 selectionBeforeMouseDown:(NSSet *)arg4;
- (void)assetOverviewCapsuleController:(IBICAssetOverviewCapsuleController *)arg1 performDelete:(id)arg2;
- (void)assetOverviewCapsuleController:(IBICAssetOverviewCapsuleController *)arg1 userDidDragItems:(NSArray *)arg2 withMouseDown:(NSEvent *)arg3 andMouseDragged:(NSEvent *)arg4;
- (void)assetOverviewCapsuleController:(IBICAssetOverviewCapsuleController *)arg1 userDidOpenItems:(id <IBCollection>)arg2;
- (void)assetOverviewCapsuleController:(IBICAssetOverviewCapsuleController *)arg1 userDidSelectItems:(id <IBCollection>)arg2 withEvent:(NSEvent *)arg3;
- (NSSet *)assetOverviewCapsuleControllerInitialSelectionForFutureBandSelection:(IBICAssetOverviewCapsuleController *)arg1;
@end

