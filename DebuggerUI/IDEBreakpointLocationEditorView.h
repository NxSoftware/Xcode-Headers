//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

#import <DebuggerUI/IDEBreakpointEditor-Protocol.h>

@class IDEBreakpointLocation, NSMatrix, NSString, NSTextField, NSView;

@interface IDEBreakpointLocationEditorView : NSViewController <IDEBreakpointEditor>
{
    IDEBreakpointLocation *_breakpoint;
    NSTextField *_parentBreakpointConditionLabel;
    NSMatrix *_conditionMatrix;
    NSTextField *_conditionTextField;
}

+ (id)keyPathsForValuesAffectingSelectedConditionIndex;
@property __weak NSTextField *conditionTextField; // @synthesize conditionTextField=_conditionTextField;
@property __weak NSMatrix *conditionMatrix; // @synthesize conditionMatrix=_conditionMatrix;
@property __weak NSTextField *parentBreakpointConditionLabel; // @synthesize parentBreakpointConditionLabel=_parentBreakpointConditionLabel;
@property(readonly) IDEBreakpointLocation *breakpoint; // @synthesize breakpoint=_breakpoint;
- (void).cxx_destruct;
- (void)condtionMatrixButtonPressed:(id)arg1;
@property long long selectedConditionIndex;
@property(readonly) NSView *initialFirstResponder;
- (void)loadView;
- (id)initWithBreakpoint:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

