//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <IDEKit/IDETextureMediaResource.h>

#import <IDEInterfaceBuilderKit/IBICVariantObject-Protocol.h>

@class IBICAbstractTextureSet, IBICMipmapSet, NSString;

@interface IBICTextureMediaResource : IDETextureMediaResource <IBICVariantObject>
{
    NSString *_variantKey;
    IBICMipmapSet *_mipmapSet;
    IBICAbstractTextureSet *_texture;
}

+ (id)mediaType;
+ (id)resourceWithMipmapSet:(id)arg1;
@property(readonly, nonatomic) IBICAbstractTextureSet *texture; // @synthesize texture=_texture;
@property(retain, nonatomic) IBICMipmapSet *mipmapSet; // @synthesize mipmapSet=_mipmapSet;
- (void).cxx_destruct;
- (long long)compareForVariantMatching:(id)arg1;
- (BOOL)isMinimallyFitForVariantSelection;
- (id)slotForVariantSelection;
@property(readonly, copy) NSString *description;
- (id)variantSetKeyWithFoldingStrategy:(id)arg1;
- (id)variantSetNameWithFoldingStrategy:(id)arg1;
- (id)variantWithFoldingStrategy:(id)arg1;
- (id)sourceFilePath;
- (id)mediaLibraryDetailControllerIdentifier;
- (id)generateContentForFilePath:(id)arg1 contentType:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

