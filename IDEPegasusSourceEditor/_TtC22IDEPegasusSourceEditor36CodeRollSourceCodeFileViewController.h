//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEPegasusSourceEditor/_TtC22IDEPegasusSourceEditor26CodeRollFileViewController.h>

@class DVTSourceCodeLanguage, NSArray, NSLayoutConstraint, _TtC22IDEPegasusSourceEditor20SourceCodeEditorView;

@interface _TtC22IDEPegasusSourceEditor36CodeRollSourceCodeFileViewController : _TtC22IDEPegasusSourceEditor26CodeRollFileViewController
{
    // Error parsing type: , name: sourceEditorView
    // Error parsing type: , name: renameRange
    // Error parsing type: , name: renameController
    // Error parsing type: , name: codeRollController
    // Error parsing type: , name: journal
    // Error parsing type: , name: secondaryResults
    // Error parsing type: , name: scrollLine
    // Error parsing type: , name: scrollOffset
    // Error parsing type: , name: isFirstDocument
    // Error parsing type: , name: substitutionViewCoveringFirstLine
    // Error parsing type: , name: language
    // Error parsing type: , name: primaryGroupResults
    // Error parsing type: , name: primaryRanges
    // Error parsing type: , name: codeRollRanges
    // Error parsing type: , name: sourceCodeRanges
    // Error parsing type: , name: commentRanges
    // Error parsing type: , name: fileNameRanges
    // Error parsing type: , name: viewHeightConstraint
}

+ (id)langObjectiveC;
+ (id)langSwift;
- (CDUnknownBlockType).cxx_destruct;
- (id)initWith:(id)arg1 editor:(id)arg2;
- (void)endAndClose;
- (void)cancelAndClose;
- (void)cancelRename;
- (void)endRename;
- (void)rebuildSecondaryRanges;
- (void)focusRangeChanged;
- (void)updateSecondaryRangesWithIsSwift:(BOOL)arg1;
- (void)updateWithEnabled:(BOOL)arg1 for:(unsigned long long)arg2;
- (id)getCurrentText;
- (void)discloseChanged:(id)arg1;
- (void)includeFileChanged:(id)arg1;
- (void)sourceEditorView:(id)arg1 contentSizeDidChange:(double)arg2;
@property(nonatomic, retain) NSLayoutConstraint *viewHeightConstraint; // @synthesize viewHeightConstraint;
- (BOOL)isKindEditable:(unsigned long long)arg1;
@property(nonatomic, copy) NSArray *primaryGroupResults; // @synthesize primaryGroupResults;
@property(nonatomic, retain) DVTSourceCodeLanguage *language; // @synthesize language;
- (void)showFirstFile;
- (void)processURL;
- (void)openDocumentWithUrl:(id)arg1;
- (void)primitiveInvalidate;
- (id)initWithCoder:(id)arg1;
- (id)initWith:(id)arg1 editor:(id)arg2 isFirstDocument:(BOOL)arg3;
@property(nonatomic, readonly) BOOL isFirstDocument; // @synthesize isFirstDocument;
@property(nonatomic) double scrollOffset; // @synthesize scrollOffset;
@property(nonatomic) long long scrollLine; // @synthesize scrollLine;
@property(nonatomic, retain) _TtC22IDEPegasusSourceEditor20SourceCodeEditorView *sourceEditorView; // @synthesize sourceEditorView;

@end

