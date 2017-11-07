//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SKESceneDocument;

@interface SKEMediaHelper : NSObject
{
    SKESceneDocument *_document;
}

+ (id)genericPreviewForSceneAtURL:(id)arg1 size:(struct CGSize)arg2 asynchronousPreviewGenerationCompletionHandler:(CDUnknownBlockType)arg3;
+ (id)previewForSceneAtURL:(id)arg1 size:(struct CGSize)arg2;
+ (id)genericPreviewForScene:(id)arg1 size:(struct CGSize)arg2 asynchronousPreviewGenerationCompletionHandler:(CDUnknownBlockType)arg3;
+ (id)previewForScene:(id)arg1 size:(struct CGSize)arg2;
+ (id)genericPreviewForNode:(id)arg1 size:(struct CGSize)arg2 asynchronousPreviewGenerationCompletionHandler:(CDUnknownBlockType)arg3;
+ (id)previewForNode:(id)arg1 size:(struct CGSize)arg2;
+ (void)endObservationOfFilePathForAssociatedObject:(id)arg1;
+ (void)beginObservationOfFilePath:(id)arg1 forAssociatedObject:(id)arg2 block:(CDUnknownBlockType)arg3;
+ (void)observeContentsOfMaterialProperty:(id)arg1;
+ (void)observeContentsOfMaterial:(id)arg1;
+ (id)contentsOfMaterialProperty:(id)arg1;
+ (void)setContents:(id)arg1 ofMaterialProperty:(id)arg2;
+ (id)relativePathForImagePath:(id)arg1 document:(id)arg2;
+ (id)bundleRelativePathForPath:(id)arg1;
+ (id)absolutePathForImagePath:(id)arg1 document:(id)arg2;
+ (void)refreshImageContentsOfMaterialProperty:(id)arg1;
- (void).cxx_destruct;
- (void)sanitizeAllReferencesInDocument;
- (void)sanitizeAllParticleImagesInDocument;
- (void)sanitizeAllMaterialsInDocument;
- (void)sanitizeMaterialProperty:(id)arg1;
- (id)init;
- (id)initWithDocument:(id)arg1;

@end

