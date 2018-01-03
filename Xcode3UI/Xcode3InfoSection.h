//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Xcode3UI/Xcode3ImageViewDelegate-Protocol.h>

@class NSArray, NSDictionary, NSMutableArray, NSString, Xcode3ImageView, Xcode3InfoDictionaryColumnViewController, Xcode3InfoDictionarySliceController;

@interface Xcode3InfoSection : NSObject <Xcode3ImageViewDelegate>
{
    NSString *_name;
    Xcode3InfoDictionarySliceController *_sliceController;
    NSMutableArray *_entries;
    Xcode3InfoDictionaryColumnViewController *_leftColumnController;
    Xcode3InfoDictionaryColumnViewController *_rightColumnController;
    Xcode3ImageView *_iconView;
    NSString *_iconKey;
    NSDictionary *_entryDictionary;
    NSString *_cacheName;
}

+ (void)initialize;
@property(copy, nonatomic) NSString *cacheName; // @synthesize cacheName=_cacheName;
@property(copy) NSString *iconKey; // @synthesize iconKey=_iconKey;
@property(retain) Xcode3InfoDictionarySliceController *sliceController; // @synthesize sliceController=_sliceController;
@property(retain) Xcode3ImageView *iconView; // @synthesize iconView=_iconView;
@property(retain) Xcode3InfoDictionaryColumnViewController *rightColumnController; // @synthesize rightColumnController=_rightColumnController;
@property(retain) Xcode3InfoDictionaryColumnViewController *leftColumnController; // @synthesize leftColumnController=_leftColumnController;
@property(copy) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)imageView:(id)arg1 pathForImageNamed:(id)arg2;
- (void)imageView:(id)arg1 removeImage:(id)arg2;
- (BOOL)imageView:(id)arg1 acceptDrop:(id)arg2;
- (unsigned long long)imageView:(id)arg1 validateDrop:(id)arg2;
- (BOOL)hasRightColumn;
@property(readonly) NSDictionary *entryDictionary;
@property(readonly, copy) NSString *description;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(retain) NSArray *entries; // @dynamic entries;
@property(readonly) unsigned long long hash;
@property(readonly) NSMutableArray *mutableEntries; // @dynamic mutableEntries;
@property(readonly) Class superclass;

@end

