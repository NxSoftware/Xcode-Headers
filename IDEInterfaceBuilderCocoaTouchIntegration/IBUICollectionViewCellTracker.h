//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <IDEInterfaceBuilderCocoaTouchIntegration/IBUICollectionReusableViewTracker.h>

@interface IBUICollectionViewCellTracker : IBUICollectionReusableViewTracker
{
    struct CGRect initialFrame;
    struct CGSize initialCellSize;
    struct CGSize initialCollectionViewFlowLayoutCellSize;
    BOOL startedWithCustomCellSize;
}

- (struct CGRect)constrainCellFrameToSection:(struct CGRect)arg1;
- (void)trackWithEvent:(id)arg1;
- (void)placeSubviewInFrame:(struct CGRect)arg1 event:(id)arg2;
- (BOOL)shouldSetCollectionViewFlowLayoutItemSize;
- (id)collectionView;
- (id)trackedCollectionViewCell;

@end

