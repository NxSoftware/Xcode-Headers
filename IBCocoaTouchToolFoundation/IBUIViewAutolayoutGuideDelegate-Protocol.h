//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <IBCocoaTouchToolFoundation/NSObject-Protocol.h>

@class IBUIViewAutolayoutGuide, NSObject;
@protocol IBAutolayoutItem;

@protocol IBUIViewAutolayoutGuideDelegate <NSObject>
- (NSObject<IBAutolayoutItem> *)ibEffectiveParentItemForReferencingConstraintTraversalOfViewLayoutGuide:(IBUIViewAutolayoutGuide *)arg1;
- (NSObject<IBAutolayoutItem> *)ibContainingItemForViewLayoutGuide:(IBUIViewAutolayoutGuide *)arg1;
@end

