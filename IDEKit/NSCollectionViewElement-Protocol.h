//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <IDEKit/NSObject-Protocol.h>
#import <IDEKit/NSUserInterfaceItemIdentification-Protocol.h>

@class NSCollectionViewLayout, NSCollectionViewLayoutAttributes;

@protocol NSCollectionViewElement <NSObject, NSUserInterfaceItemIdentification>

@optional
- (NSCollectionViewLayoutAttributes *)preferredLayoutAttributesFittingAttributes:(NSCollectionViewLayoutAttributes *)arg1;
- (void)didTransitionFromLayout:(NSCollectionViewLayout *)arg1 toLayout:(NSCollectionViewLayout *)arg2;
- (void)willTransitionFromLayout:(NSCollectionViewLayout *)arg1 toLayout:(NSCollectionViewLayout *)arg2;
- (void)applyLayoutAttributes:(NSCollectionViewLayoutAttributes *)arg1;
- (void)prepareForReuse;
@end

