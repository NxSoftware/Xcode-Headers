//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSCollectionViewItem.h"

@class IDETemplateChooserSelectionDrawingView, NSImage, NSImageView, NSString, NSTextField;

@interface IDETemplateChooserItem : NSCollectionViewItem
{
    IDETemplateChooserSelectionDrawingView *_iconSelectionDrawingView;
    NSImageView *_iconImageView;
    IDETemplateChooserSelectionDrawingView *_nameSelectionDrawingView;
    NSTextField *_nameTextField;
}

+ (id)keyPathsForValuesAffectingIcon;
+ (id)keyPathsForValuesAffectingName;
@property(nonatomic) __weak NSTextField *nameTextField; // @synthesize nameTextField=_nameTextField;
@property(nonatomic) __weak IDETemplateChooserSelectionDrawingView *nameSelectionDrawingView; // @synthesize nameSelectionDrawingView=_nameSelectionDrawingView;
@property(nonatomic) __weak NSImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(nonatomic) __weak IDETemplateChooserSelectionDrawingView *iconSelectionDrawingView; // @synthesize iconSelectionDrawingView=_iconSelectionDrawingView;
- (void).cxx_destruct;
- (void)setSelected:(BOOL)arg1;
- (void)updateColors;
- (id)accessibilityLabel;
- (void)awakeFromNib;
@property(readonly) NSImage *icon;
@property(readonly) NSString *name;

@end
