//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

@class DVTBorderedView, NSTextField;

@interface DVTPointViewController : NSViewController
{
    BOOL _showsBorder;
    BOOL _adaptToTheme;
    DVTBorderedView *_borderedView;
    NSTextField *_pointValueLabel;
    NSTextField *_pointValueTitleLabel;
    struct CGPoint _point;
}

@property __weak NSTextField *pointValueTitleLabel; // @synthesize pointValueTitleLabel=_pointValueTitleLabel;
@property __weak NSTextField *pointValueLabel; // @synthesize pointValueLabel=_pointValueLabel;
@property __weak DVTBorderedView *borderedView; // @synthesize borderedView=_borderedView;
@property(nonatomic, getter=shouldAdaptToTheme) BOOL adaptToTheme; // @synthesize adaptToTheme=_adaptToTheme;
@property(nonatomic) BOOL showsBorder; // @synthesize showsBorder=_showsBorder;
@property(nonatomic) struct CGPoint point; // @synthesize point=_point;
- (void).cxx_destruct;
- (void)_updateForCurrentTheme;
- (void)_updateBorder;
- (void)loadView;
- (id)initWithDefaultNibName;

@end

