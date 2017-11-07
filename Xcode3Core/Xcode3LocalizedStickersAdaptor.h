//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <IDEFoundation/IDELocalizedPlistAdaptor.h>

@class DVTFilePath, IDEFileReference, NSMutableDictionary, NSSet, Xcode3Target;

@interface Xcode3LocalizedStickersAdaptor : IDELocalizedPlistAdaptor
{
    IDEFileReference *_containingCatalog;
    DVTFilePath *_stickerPackFile;
    NSSet *_baseStickers;
    NSMutableDictionary *_stringsCache;
    Xcode3Target *_target;
}

+ (id)adaptedResourcesForPopulationContext:(id)arg1;
- (void).cxx_destruct;
- (id)target;
- (id)expectedSuperitem;
- (id)expectedDirectoryPath;
- (id)expectedFileName;
- (id)localizedGroupIdentifier;
- (id)stickerPackFile;
- (id)comments;
- (void)setStrings:(id)arg1 forLanguage:(id)arg2;
- (id)stringsForLanguage:(id)arg1;
- (void)primitiveInvalidate;
- (id)initWithLocalizedContainer:(id)arg1 localizedGroup:(id)arg2 containingCatalogReference:(id)arg3 stickerPackFile:(id)arg4 target:(id)arg5;

@end

