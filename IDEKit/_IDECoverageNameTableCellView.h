//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSTableCellView.h>

@class IDEWorkspace, NSButton;

@interface _IDECoverageNameTableCellView : NSTableCellView
{
    NSButton *_jumpButton;
    id _coverageItem;
    IDEWorkspace *_workspace;
}

@property __weak IDEWorkspace *workspace; // @synthesize workspace=_workspace;
@property __weak id coverageItem; // @synthesize coverageItem=_coverageItem;
@property __weak NSButton *jumpButton; // @synthesize jumpButton=_jumpButton;
- (void).cxx_destruct;
- (void)jumpToSourceCode:(id)arg1;

@end

