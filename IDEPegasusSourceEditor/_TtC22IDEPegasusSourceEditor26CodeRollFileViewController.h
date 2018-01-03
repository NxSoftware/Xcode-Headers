//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

@class NSButton, NSImageView, NSLayoutConstraint, NSStackView, NSString, NSTextField, NSURL, NSView, _TtC22IDEPegasusSourceEditor14CodeRollEditor, _TtC22IDEPegasusSourceEditor30CodeRollFileNameViewController;

@interface _TtC22IDEPegasusSourceEditor26CodeRollFileViewController : NSViewController
{
    // Error parsing type: , name: url
    // Error parsing type: , name: editor
    // Error parsing type: , name: includeFileChangesCheckbox
    // Error parsing type: , name: disclosureButton
    // Error parsing type: , name: imageView
    // Error parsing type: , name: fileNameLabel
    // Error parsing type: , name: fileLabelContainer
    // Error parsing type: , name: headerView
    // Error parsing type: , name: renameFileController
    // Error parsing type: , name: containsCategories
    // Error parsing type: , name: shouldRename
    // Error parsing type: , name: originalText
    // Error parsing type: , name: isValid
    // Error parsing type: , name: heightConstraint
    // Error parsing type: , name: isSwift
    // Error parsing type: , name: disableAll
}

- (CDUnknownBlockType).cxx_destruct;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)updateSecondaryRangesWithIsSwift:(BOOL)arg1;
- (void)updateFilenameWithEnabled:(BOOL)arg1;
- (void)updateWithEnabled:(BOOL)arg1 for:(unsigned long long)arg2;
- (void)rebuildSecondaryRanges;
- (id)getCurrentText;
@property(nonatomic) BOOL disableAll; // @synthesize disableAll;
- (void)discloseChanged:(id)arg1;
@property(nonatomic) BOOL isSwift; // @synthesize isSwift;
- (void)includeFileChanged:(id)arg1;
@property(nonatomic, readonly) NSStackView *stackView;
- (void)viewDidLoad;
- (void)loadView;
@property(nonatomic, retain) NSLayoutConstraint *heightConstraint; // @synthesize heightConstraint;
- (void)primitiveInvalidate;
- (void)invalidate;
@property(nonatomic) BOOL valid; // @synthesize valid=isValid;
- (BOOL)isValid;
- (id)initWithCoder:(id)arg1;
- (id)initWith:(id)arg1 editor:(id)arg2;
@property(nonatomic, copy) NSString *originalText; // @synthesize originalText;
@property(nonatomic) BOOL shouldRename; // @synthesize shouldRename;
@property(nonatomic, retain) _TtC22IDEPegasusSourceEditor30CodeRollFileNameViewController *renameFileController; // @synthesize renameFileController;
@property(nonatomic, retain) NSView *headerView; // @synthesize headerView;
@property(nonatomic) __weak NSView *fileLabelContainer; // @synthesize fileLabelContainer;
@property(nonatomic) __weak NSTextField *fileNameLabel; // @synthesize fileNameLabel;
@property(nonatomic) __weak NSImageView *imageView; // @synthesize imageView;
@property(nonatomic) __weak NSButton *disclosureButton; // @synthesize disclosureButton;
@property(nonatomic) __weak NSButton *includeFileChangesCheckbox; // @synthesize includeFileChangesCheckbox;
@property(nonatomic) __weak _TtC22IDEPegasusSourceEditor14CodeRollEditor *editor; // @synthesize editor;
@property(nonatomic, copy) NSURL *url; // @synthesize url;

@end

