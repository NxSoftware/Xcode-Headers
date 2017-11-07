//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSTableCellView.h>

@class DVTCrashLogStackFrame, NSButton, NSImageView, NSTextField;

@interface DVTCrashLogBacktraceTableCellView : NSTableCellView
{
    BOOL _showJumpButton;
    NSImageView *_frameIconImageView;
    NSTextField *_frameNumberField;
    NSTextField *_moduleNameField;
    NSTextField *_frameField;
    NSButton *_jumpButton;
    DVTCrashLogStackFrame *_stackFrame;
}

@property(retain) DVTCrashLogStackFrame *stackFrame; // @synthesize stackFrame=_stackFrame;
@property BOOL showJumpButton; // @synthesize showJumpButton=_showJumpButton;
@property(retain) NSButton *jumpButton; // @synthesize jumpButton=_jumpButton;
@property(retain) NSTextField *frameField; // @synthesize frameField=_frameField;
@property(retain) NSTextField *moduleNameField; // @synthesize moduleNameField=_moduleNameField;
@property(retain) NSTextField *frameNumberField; // @synthesize frameNumberField=_frameNumberField;
@property(retain) NSImageView *frameIconImageView; // @synthesize frameIconImageView=_frameIconImageView;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (void)showSymbolInDebugNavigator:(id)arg1;

@end

