//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

@class NSBox, NSLayoutConstraint, NSString, NSTextField, _TtC22IDEPegasusSourceEditor11RenameLabel, _TtC22IDEPegasusSourceEditor26CodeRollFileViewController;

@interface IDEPegasusSourceEditor.CodeRollFileNameViewController : NSViewController
{
    // Error parsing type: , name: renameLabel
    // Error parsing type: , name: renamedFileNameLabel
    // Error parsing type: , name: extensionLabel
    // Error parsing type: , name: divider
    // Error parsing type: , name: containingBox
    // Error parsing type: , name: renameLabelWidthConstraint
    // Error parsing type: , name: renamedFileNameSpacingConstraint
    // Error parsing type: , name: heightConstraint
    // Error parsing type: , name: fileController
    // Error parsing type: , name: originalBaseName
    // Error parsing type: , name: currentBaseName
    // Error parsing type: , name: fileExtension
    // Error parsing type: , name: desiredHeight
    // Error parsing type: , name: isValid
    // Error parsing type: , name: disableAll
    // Error parsing type: , name: enabled
}

- (CDUnknownBlockType).cxx_destruct;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)updateBasename:(id)arg1;
@property(nonatomic) BOOL enabled; // @synthesize enabled;
- (id)getCurrentText;
- (void)nameClicked:(id)arg1;
@property(nonatomic) BOOL disableAll; // @synthesize disableAll;
- (void)openDocumentWithUrl:(id)arg1;
- (void)viewDidLoad;
- (void)primitiveInvalidate;
- (void)invalidate;
@property(nonatomic) BOOL valid; // @synthesize valid=isValid;
- (BOOL)isValid;
- (id)initWithCoder:(id)arg1;
- (id)initWith:(id)arg1 fileController:(id)arg2;
@property(nonatomic) double desiredHeight; // @synthesize desiredHeight;
@property(nonatomic, copy) NSString *fileExtension; // @synthesize fileExtension;
@property(nonatomic, copy) NSString *currentBaseName; // @synthesize currentBaseName;
@property(nonatomic, copy) NSString *originalBaseName; // @synthesize originalBaseName;
@property(nonatomic) __weak _TtC22IDEPegasusSourceEditor26CodeRollFileViewController *fileController; // @synthesize fileController;
@property(nonatomic) __weak NSLayoutConstraint *heightConstraint; // @synthesize heightConstraint;
@property(nonatomic) __weak NSLayoutConstraint *renamedFileNameSpacingConstraint; // @synthesize renamedFileNameSpacingConstraint;
@property(nonatomic) __weak NSLayoutConstraint *renameLabelWidthConstraint; // @synthesize renameLabelWidthConstraint;
@property(nonatomic) __weak NSBox *containingBox; // @synthesize containingBox;
@property(nonatomic) __weak NSBox *divider; // @synthesize divider;
@property(nonatomic) __weak NSTextField *extensionLabel; // @synthesize extensionLabel;
@property(nonatomic) __weak _TtC22IDEPegasusSourceEditor11RenameLabel *renamedFileNameLabel; // @synthesize renamedFileNameLabel;
@property(nonatomic) __weak NSTextField *renameLabel; // @synthesize renameLabel;

@end

