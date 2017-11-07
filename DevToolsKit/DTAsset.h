//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DTAssetCategory, DTMutableOrderedSet, NSAttributedString, NSDate, NSImage, NSString;

@interface DTAsset : NSObject
{
    NSAttributedString *detailedDescription;
    NSAttributedString *detailedLabel;
    NSString *shortDescription;
    NSString *label;
    NSString *subtitle;
    NSString *identifier;
    NSImage *image;
    id representedObject;
    DTMutableOrderedSet *knownGroups;
    NSDate *lastUsedDate;
    DTAssetCategory *category;
    BOOL selected;
}

- (id)searchTerms;
- (double)timeIntervalSinceUsed;
- (id)knownGroups;
- (void)setCategory:(id)arg1;
- (id)assetCategory;
- (void)setLastUsedDate:(id)arg1;
- (id)lastUsedDate;
- (void)setIdentifier:(id)arg1;
- (id)identifier;
- (BOOL)isSelected;
- (void)setSelected:(BOOL)arg1;
- (id)representedObject;
- (void)setRepresentedObject:(id)arg1;
- (void)setSubtitle:(id)arg1;
- (id)subtitle;
- (void)setLabel:(id)arg1;
- (id)label;
- (void)setShortDescription:(id)arg1;
- (id)shortDescription;
- (void)setImage:(id)arg1;
- (id)image;
- (void)setDetailedLabel:(id)arg1;
- (id)detailedLabel;
- (void)setDetailedDescription:(id)arg1;
- (id)detailedDescription;
- (void)dealloc;
- (id)initWithIdentifier:(id)arg1;
- (void)removeKnownGroup:(id)arg1;
- (void)addKnownGroup:(id)arg1;

@end

