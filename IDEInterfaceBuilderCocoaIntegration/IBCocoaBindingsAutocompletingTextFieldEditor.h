//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSTextView.h>

#import <IDEInterfaceBuilderCocoaIntegration/NSTableViewDataSource-Protocol.h>
#import <IDEInterfaceBuilderCocoaIntegration/NSTableViewDelegate-Protocol.h>

@class NSArray, NSCharacterSet, NSScrollView, NSString, NSTableView, NSTextField, NSView, NSWindow;

@interface IBCocoaBindingsAutocompletingTextFieldEditor : NSTextView <NSTableViewDelegate, NSTableViewDataSource>
{
    NSWindow *_completionWindow;
    NSArray *_filteredKeys;
    BOOL _completionsListVisible;
    struct CGPoint _windowPositionReferencePoint;
    NSTableView *_completionsTableView;
    NSView *_view;
    NSScrollView *_scrollView;
    NSTextField *_completionsUnavailableField;
    NSCharacterSet *_separatorChars;
}

@property(retain) NSCharacterSet *separatorChars; // @synthesize separatorChars=_separatorChars;
@property(retain) NSTextField *completionsUnavailableField; // @synthesize completionsUnavailableField=_completionsUnavailableField;
@property(retain) NSScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain) NSView *view; // @synthesize view=_view;
@property(retain) NSTableView *completionsTableView; // @synthesize completionsTableView=_completionsTableView;
- (void).cxx_destruct;
- (void)doubleClick:(id)arg1;
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3;
- (long long)numberOfRowsInTableView:(id)arg1;
- (void)keyDown:(id)arg1;
- (void)handleKeyDown:(id)arg1;
- (void)didChangeText;
- (void)dismissCompletions;
- (void)acceptCompletionBy:(unsigned long long)arg1;
- (void)displayCompletionsForcefully:(BOOL)arg1;
- (struct _NSRange)rangeForUserCompletion;
- (void)repositionCompletionsWindowIfNeeded;
- (void)positionWindow;
- (struct CGRect)positionedWindowFrameForFrameSize:(struct CGSize)arg1;
- (double)columnWidthForColumnWithIdentifier:(id)arg1;
- (id)delegate;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

