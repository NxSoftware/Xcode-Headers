//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSTextView.h>

@class IDEConfigurableDataNode, XCBuildResultsTextLayout;

@interface XCTranscriptTextView : NSTextView
{
    XCBuildResultsTextLayout *_textLayout;
    IDEConfigurableDataNode *_dataNode;
    struct CGRect _cellFrame;
}

@property(nonatomic) struct CGRect cellFrame; // @synthesize cellFrame=_cellFrame;
@property(retain, nonatomic) IDEConfigurableDataNode *dataNode; // @synthesize dataNode=_dataNode;
@property(retain, nonatomic) XCBuildResultsTextLayout *textLayout; // @synthesize textLayout=_textLayout;
- (void).cxx_destruct;
- (void)dealloc;
- (void)enterSelection:(id)arg1;
- (void)useSelectionForReplace:(id)arg1;
- (void)useSelectionForFind:(id)arg1;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (void)mouseDown:(id)arg1;
- (BOOL)singleTranscriptFindText:(id)arg1 ignoreCase:(BOOL)arg2 matchStyle:(long long)arg3 backwards:(BOOL)arg4 wrap:(BOOL)arg5;
- (BOOL)findText:(id)arg1 ignoreCase:(BOOL)arg2 matchStyle:(long long)arg3 backwards:(BOOL)arg4 wrap:(BOOL)arg5;

@end

