//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

#import <IDEPegasusSourceEditor/NSPrintPanelAccessorizing-Protocol.h>

@class NSPopUpButton, _TtC12SourceEditor21SourceEditorPrintView;

@interface _TtC22IDEPegasusSourceEditor39SourceCodePrintPanelAccessoryController : NSViewController <NSPrintPanelAccessorizing>
{
    // Error parsing type: , name: fontAndColorThemePopupButton
    // Error parsing type: , name: printView
    // Error parsing type: , name: selectedFontAndColorTheme
}

- (CDUnknownBlockType).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)didSelectTheme:(id)arg1;
- (void)viewDidLoad;
- (id)keyPathsForValuesAffectingPreview;
- (id)localizedSummaryItems;
@property(nonatomic, retain) _TtC12SourceEditor21SourceEditorPrintView *printView; // @synthesize printView;
@property(nonatomic, retain) NSPopUpButton *fontAndColorThemePopupButton; // @synthesize fontAndColorThemePopupButton;

@end
