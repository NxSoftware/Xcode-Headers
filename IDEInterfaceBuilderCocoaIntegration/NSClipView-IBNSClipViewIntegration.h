//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSClipView.h>

@class NSValue;

@interface NSClipView (IBNSClipViewIntegration)
+ (id)keyPathsForValuesAffectingIbInspectedUseFixedContentInsets;
+ (id)keyPathsForValuesAffectingContentInsets;
@property(retain) NSValue *ibWrappedContentInsets;
- (BOOL)ibInspectedUseFixedContentInsets;
- (void)ibSwizzledNSClipViewWorkaround12332156UpdateConstraints;
- (BOOL)ibChildView:(id)arg1 shouldUseConstraintsInsteadOfAutoresizingWhenAddedToDocument:(id)arg2;
- (BOOL)ibChildPrefersToVerticallyResizeWithContainer:(id)arg1;
- (BOOL)ibChildPrefersToHorizontallyResizeWithContainer:(id)arg1;
- (void)ibUnarchiveAutolayoutProperties:(id)arg1;
- (void)setIbArchivedSubviews:(id)arg1 withConfigurationPropertyStorage:(id)arg2;
- (id)ibArchivedSubviewsWithConfigurationPropertyStorage:(id)arg1;
- (void)setIbShadowedSubviews:(id)arg1;
- (id)ibShadowedSubviews;
- (BOOL)ibShouldIgnoreSizeMisplacement;
- (BOOL)ibShouldIgnorePositionMisplacement;
- (BOOL)ibHasResolved14284306;
- (BOOL)ibIsChildInitiallySelectable:(id)arg1;
- (BOOL)ibIsChildViewUserSizable:(id)arg1;
- (BOOL)ibIsChildViewMovable:(id)arg1;
- (BOOL)ibIsChildViewUserMovable:(id)arg1;
- (BOOL)ibIsChildTypicalConnectionTarget:(id)arg1;
- (Class)ibEditorClass;
- (BOOL)ibCanRemoveChildren:(id)arg1;
- (id)ibPasteboardTypes;
- (id)scrollView;
- (id)ibLocalAttributeKeyPaths;
- (id)ibLocalChildToOneRelationshipsKeyPaths;
@end

