//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

@class DVTBorderedView, DVTSizeView, NSLayoutConstraint, NSTextField;

@interface DVTSizeViewController : NSViewController
{
    BOOL _showsBorder;
    BOOL _adaptToTheme;
    DVTBorderedView *_borderedView;
    DVTSizeView *_sizeView;
    NSLayoutConstraint *_widthConstraint;
    NSLayoutConstraint *_heightConstraint;
    NSTextField *_widthLabel;
    NSTextField *_heightLabel;
    NSTextField *_heightTitleLabel;
    NSTextField *_widthTitleLabel;
    struct CGSize _size;
}

@property __weak NSTextField *widthTitleLabel; // @synthesize widthTitleLabel=_widthTitleLabel;
@property __weak NSTextField *heightTitleLabel; // @synthesize heightTitleLabel=_heightTitleLabel;
@property __weak NSTextField *heightLabel; // @synthesize heightLabel=_heightLabel;
@property __weak NSTextField *widthLabel; // @synthesize widthLabel=_widthLabel;
@property __weak NSLayoutConstraint *heightConstraint; // @synthesize heightConstraint=_heightConstraint;
@property __weak NSLayoutConstraint *widthConstraint; // @synthesize widthConstraint=_widthConstraint;
@property __weak DVTSizeView *sizeView; // @synthesize sizeView=_sizeView;
@property __weak DVTBorderedView *borderedView; // @synthesize borderedView=_borderedView;
@property(nonatomic, getter=shouldAdaptToTheme) BOOL adaptToTheme; // @synthesize adaptToTheme=_adaptToTheme;
@property(nonatomic) BOOL showsBorder; // @synthesize showsBorder=_showsBorder;
@property(nonatomic) struct CGSize size; // @synthesize size=_size;
- (void).cxx_destruct;
- (id)quickLookViewForUnadornedView;
- (void)_updateForCurrentTheme;
- (void)_updateBorder;
- (void)_updateFromSize;
- (void)loadView;
- (id)initWithDefaultNibName;

@end

