//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <IDEKit/IDEDocumentStructureProvidingNavigableItem.h>

@class NSImage, NSURL;

@interface IDEFileNavigableItem : IDEDocumentStructureProvidingNavigableItem
{
    NSImage *_image;
}

- (void).cxx_destruct;
- (id)textColor;
@property(readonly) NSURL *fileURL;
- (id)image;
- (void)updateEditorDocument:(id)arg1;
- (void)invalidateImage;
- (void)updateImage;
- (id)newImage;

@end

