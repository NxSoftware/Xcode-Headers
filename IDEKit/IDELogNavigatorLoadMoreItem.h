//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEKit/IDEKeyDrivenNavigableItemRepresentedObject-Protocol.h>

@class DVTDocumentLocation, DVTFileDataType, IDEFileReference, IDELogNavigatorItem, NSArray, NSDate, NSImage, NSNull, NSString, NSURL, _TtC13DVTFoundation9DVTSymbol;

@interface IDELogNavigatorLoadMoreItem : NSObject <IDEKeyDrivenNavigableItemRepresentedObject>
{
    NSImage *_refreshImage;
    NSString *_navigableItem_name;
    NSString *_subtitle;
    long long _navigableItem_progressValue;
    unsigned long long _count;
    id _firstItem;
    NSDate *_loadMoreStartDate;
    IDELogNavigatorItem *_logNavigatorItem;
    unsigned long long _additionalCount;
}

@property(nonatomic) unsigned long long additionalCount; // @synthesize additionalCount=_additionalCount;
@property(retain, nonatomic) IDELogNavigatorItem *logNavigatorItem; // @synthesize logNavigatorItem=_logNavigatorItem;
@property(readonly, nonatomic) NSDate *loadMoreStartDate; // @synthesize loadMoreStartDate=_loadMoreStartDate;
@property(retain, nonatomic) id firstItem; // @synthesize firstItem=_firstItem;
@property(readonly, nonatomic) unsigned long long count; // @synthesize count=_count;
@property(nonatomic) long long navigableItem_progressValue; // @synthesize navigableItem_progressValue=_navigableItem_progressValue;
@property(retain, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(retain, nonatomic) NSString *navigableItem_name; // @synthesize navigableItem_name=_navigableItem_name;
- (void).cxx_destruct;
- (void)loadMore;
@property(readonly, nonatomic) DVTFileDataType *navigableItem_documentType;
@property(readonly, nonatomic) DVTDocumentLocation *navigableItem_contentDocumentLocation;
- (unsigned long long)result;
- (long long)currentStep;
- (void)update;
- (long long)progress;
@property(readonly, nonatomic) NSImage *navigableItem_image;
- (id)identifier;
- (id)initWithLogNavigatorItem:(id)arg1 additionalCount:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSString *navigableItem_accessibleImageDescription;
@property(readonly, nonatomic) NSArray *navigableItem_additionalFilterMatchingText;
@property(readonly, nonatomic) NSArray *navigableItem_childRepresentedObjects;
@property(readonly, nonatomic) IDEFileReference *navigableItem_fileReference;
@property(readonly, nonatomic) NSNull *navigableItem_filtered;
@property(readonly, nonatomic) NSString *navigableItem_groupIdentifier;
@property(readonly, nonatomic) BOOL navigableItem_isEnabled;
@property(readonly, nonatomic) BOOL navigableItem_isLeaf;
@property(readonly, nonatomic) BOOL navigableItem_isMajorGroup;
@property(readonly, nonatomic) BOOL navigableItem_isVisible;
@property(readonly, nonatomic) BOOL navigableItem_missingReferencedContentIsImportant;
@property(readonly, nonatomic) id navigableItem_parentRepresentedObject;
@property(readonly, nonatomic) BOOL navigableItem_referencedContentExists;
@property(readonly, nonatomic) _TtC13DVTFoundation9DVTSymbol *navigableItem_representedSymbol;
@property(readonly, nonatomic) NSURL *navigableItem_representedURL;
@property(readonly, nonatomic) NSString *navigableItem_subtitle;
@property(readonly, nonatomic) NSString *navigableItem_toolTip;
@property(readonly) Class superclass;

@end
