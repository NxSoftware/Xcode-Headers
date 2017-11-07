//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <DVTKit/DVTViewController.h>

#import <IDESourceCodeComparisonEditor/IDESourceControlLogDetailDelegate-Protocol.h>
#import <IDESourceCodeComparisonEditor/NSPopoverDelegate-Protocol.h>

@class CALayer, DVTSourceControlBlameItem, DVTSourceControlWorkingCopy, IDEBlameAnnotationAgeBarView, IDEBlameAnnotationBorderedView, IDESourceCodeBlameController, NSButton, NSColor, NSDateFormatter, NSImage, NSNib, NSPopUpButton, NSString, NSView;

@interface IDEBlameAnnotationViewController : DVTViewController <NSPopoverDelegate, IDESourceControlLogDetailDelegate>
{
    NSDateFormatter *_dateFormatter;
    BOOL _highlighted;
    BOOL _mouseOver;
    IDEBlameAnnotationBorderedView *_borderedView;
    NSView *_primaryView;
    IDEBlameAnnotationAgeBarView *_ageBar;
    NSButton *_actionButton;
    long long _fontSize;
    NSNib *_nibUsedForLoading;
    IDESourceCodeBlameController *_blameController;
    NSPopUpButton *_detailPopUpButton;
    CALayer *_highlightLayer;
    BOOL _uncommitted;
    double _relativeAge;
    NSColor *_titleColor;
    NSColor *_subtitleColor;
    NSColor *_subtitleLinkColor;
    DVTSourceControlWorkingCopy *_workingCopy;
    NSImage *_infoImage;
    NSImage *_infoAlternateImage;
    NSString *_displayLogItemMessage;
    NSString *_displayLogItemAuthorName;
    NSString *_displayLogItemDate;
}

+ (id)defaultViewNibName;
@property(retain, nonatomic) NSString *displayLogItemDate; // @synthesize displayLogItemDate=_displayLogItemDate;
@property(retain, nonatomic) NSString *displayLogItemAuthorName; // @synthesize displayLogItemAuthorName=_displayLogItemAuthorName;
@property(retain, nonatomic) NSString *displayLogItemMessage; // @synthesize displayLogItemMessage=_displayLogItemMessage;
@property(retain, nonatomic) NSImage *infoAlternateImage; // @synthesize infoAlternateImage=_infoAlternateImage;
@property(retain, nonatomic) NSImage *infoImage; // @synthesize infoImage=_infoImage;
@property(retain, nonatomic) DVTSourceControlWorkingCopy *workingCopy; // @synthesize workingCopy=_workingCopy;
@property(retain, nonatomic) NSColor *subtitleLinkColor; // @synthesize subtitleLinkColor=_subtitleLinkColor;
@property(retain, nonatomic) NSColor *subtitleColor; // @synthesize subtitleColor=_subtitleColor;
@property(retain, nonatomic) NSColor *titleColor; // @synthesize titleColor=_titleColor;
@property(nonatomic) BOOL uncommitted; // @synthesize uncommitted=_uncommitted;
@property(retain, nonatomic) IDESourceCodeBlameController *blameController; // @synthesize blameController=_blameController;
@property(nonatomic) double relativeAge; // @synthesize relativeAge=_relativeAge;
@property(nonatomic) long long fontSize; // @synthesize fontSize=_fontSize;
@property(retain, nonatomic) NSButton *actionButton; // @synthesize actionButton=_actionButton;
@property(retain, nonatomic) IDEBlameAnnotationBorderedView *borderedView; // @synthesize borderedView=_borderedView;
@property(retain, nonatomic) NSView *primaryView; // @synthesize primaryView=_primaryView;
- (void).cxx_destruct;
- (void)primitiveInvalidate;
- (void)openBlameView;
- (void)goToDiff:(id)arg1;
- (void)goToCompare:(id)arg1;
- (void)goToRevision:(id)arg1;
- (id)viewWindow;
- (void)compareToCurrentRevision;
- (BOOL)detailShouldShowOpenBlameView;
- (void)openComparisonViewForRevision:(id)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (void)setMouseOver:(BOOL)arg1;
- (id)blameAnnotationView;
- (void)refreshDisplay:(BOOL)arg1;
- (void)setRepresentedObject:(id)arg1;
- (void)loadView;
@property(readonly, nonatomic) DVTSourceControlBlameItem *blameItem;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

