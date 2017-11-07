//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <DVTKit/DVTPopoverContentViewController.h>

@class DVTFontTextField, NSButton, NSMenuItem, NSPopUpButton, NSStepper, NSTextField;

@interface DVTFontPopUpViewController : DVTPopoverContentViewController
{
    NSMenuItem *_customFontMenuItem;
    DVTFontTextField *_fontTextField;
    NSPopUpButton *_fontPopUp;
    NSPopUpButton *_familyPopUp;
    NSPopUpButton *_stylePopUp;
    NSTextField *_sizeField;
    NSStepper *_sizeStepper;
    id _target;
    SEL _action;
    NSTextField *_fontLabel;
    NSTextField *_familyLabel;
    NSTextField *_styleLabel;
    NSTextField *_sizeLabel;
    NSButton *_fontMenuButton;
}

@property(retain, nonatomic) NSButton *fontMenuButton; // @synthesize fontMenuButton=_fontMenuButton;
@property(retain, nonatomic) NSTextField *sizeLabel; // @synthesize sizeLabel=_sizeLabel;
@property(retain, nonatomic) NSTextField *styleLabel; // @synthesize styleLabel=_styleLabel;
@property(retain, nonatomic) NSTextField *familyLabel; // @synthesize familyLabel=_familyLabel;
@property(retain, nonatomic) NSTextField *fontLabel; // @synthesize fontLabel=_fontLabel;
@property(nonatomic) SEL action; // @synthesize action=_action;
@property(retain, nonatomic) id target; // @synthesize target=_target;
@property(retain, nonatomic) NSStepper *sizeStepper; // @synthesize sizeStepper=_sizeStepper;
@property(retain, nonatomic) NSTextField *sizeField; // @synthesize sizeField=_sizeField;
@property(retain, nonatomic) NSPopUpButton *stylePopUp; // @synthesize stylePopUp=_stylePopUp;
@property(retain, nonatomic) NSPopUpButton *familyPopUp; // @synthesize familyPopUp=_familyPopUp;
@property(retain, nonatomic) NSPopUpButton *fontPopUp; // @synthesize fontPopUp=_fontPopUp;
@property(retain, nonatomic) DVTFontTextField *fontTextField; // @synthesize fontTextField=_fontTextField;
- (void).cxx_destruct;
- (void)popoverWillShow:(id)arg1;
- (void)done:(id)arg1;
- (void)openFontPanel:(id)arg1;
- (void)awakeFromNib;
- (void)refreshValues;
- (void)_populateSizeFromDataSource;
- (void)_populateStylesFromDataSource;
- (void)_populateFamiliesFromDataSource;
- (void)_populateFontsFromDataSource;
- (id)_predefinedValueForValue:(id)arg1;
- (void)_updateEnabledStates;
- (BOOL)validateMenuItem:(id)arg1;
- (void)showValueItem:(id)arg1 withTitle:(id)arg2 inPopUp:(id)arg3;
- (void)showMarkerItemWithTitle:(id)arg1 representedObject:(id)arg2 inPopUp:(id)arg3 enabled:(BOOL)arg4;
- (void)_updateFontsInFontPanel;
- (id)_fontRepresentation;
- (void)takeSizeFrom:(id)arg1;
- (void)incrementFontSize:(id)arg1;
- (void)selectFontName:(id)arg1;
- (void)selectFamily:(id)arg1;
- (void)selectFont:(id)arg1;
- (id)dataSource;
- (id)initWithFontTextField:(id)arg1;

@end

