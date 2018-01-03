//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEInterfaceBuilderKit/IBAbstractPlatformToolProxy.h>

#import <IDEInterfaceBuilderCocoaTouchIntegration/IBCocoaTouchImageCatalogTool-Protocol.h>

@class NSString;

@interface IBCocoaTouchImageCatalogToolProxy : IBAbstractPlatformToolProxy <IBCocoaTouchImageCatalogTool>
{
}

- (id)imageDataForImageAtPath:(id)arg1 destinationUTI:(id)arg2 preferredSize:(id)arg3 scale:(id)arg4 colorSpaceName:(id)arg5;
- (void)registerSchemaProviders:(id)arg1 withSchemaProviderContextData:(id)arg2;
- (id)compileItemsWithCatalogRelativeIdentifierPaths:(id)arg1 tagSolutionSpace:(id)arg2 andStickerPacksWithCatalogRelativeIdentifierPaths:(id)arg3 options:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

