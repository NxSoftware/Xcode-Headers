//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <IBFoundation/IBICStickerPack.h>

#import <IDEInterfaceBuilderKit/IBICStickerPackParent-Protocol.h>

@class NSString;

@interface IBICStickerPack (DisplayAdditions) <IBICStickerPackParent>
+ (id)syntehsizeItemsFromLoosePaths:(id)arg1 claimingPaths:(id *)arg2;
- (id)createChildContentFromDropIndicator:(id)arg1;
- (id)includedAttributeUtilitySlicesForChild:(id)arg1;
- (long long)ibInspectedGridSize;
- (void)setIbInspectedGridSize:(long long)arg1;
- (id)overviewCapsuleSpecification;
- (BOOL)displaysChildrenInOutlineView;
- (id)icon;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

