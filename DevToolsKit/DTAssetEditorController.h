//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DTAsset, NSButton, NSImageView, NSPanel, NSTextField, NSTextView;

@interface DTAssetEditorController : NSObject
{
    NSTextField *labelTextField;
    NSTextField *subtitleTextField;
    NSTextField *shortDescriptionTextField;
    NSButton *cancelButton;
    NSButton *okButton;
    NSImageView *imageWell;
    NSTextView *detailedDescriptionTextView;
    NSPanel *editorPanel;
    DTAsset *editedAsset;
    id editedContext;
    id delegate;
}

- (void)startEditingAsset:(id)arg1 inWindow:(id)arg2 context:(id)arg3;
- (void)didAssetEditorSheet:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)okEditorSheet:(id)arg1;
- (void)cancelEditorSheet:(id)arg1;
- (void)configureInterfaceWithAsset:(id)arg1;
- (void)setEditedContext:(id)arg1;
- (id)editedContext;
- (void)setEditedAsset:(id)arg1;
- (id)editedAsset;
- (id)editedDetailedDescription;
- (id)editedImage;
- (id)editedShortDescription;
- (id)editedSubtitle;
- (id)editedLabel;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)dealloc;
- (id)init;

@end

