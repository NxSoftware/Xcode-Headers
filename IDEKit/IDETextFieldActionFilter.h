//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEKit/DVTInvalidation-Protocol.h>
#import <IDEKit/NSComboBoxDelegate-Protocol.h>
#import <IDEKit/NSTokenFieldDelegate-Protocol.h>

@class DVTStackBacktrace, NSString, NSTextField;
@protocol IDETextFieldActionFilterDelegate;

@interface IDETextFieldActionFilter : NSObject <NSComboBoxDelegate, NSTokenFieldDelegate, DVTInvalidation>
{
    BOOL _ignoringInput;
    long long _refreshingCounter;
    NSTextField *_textField;
    id <IDETextFieldActionFilterDelegate> _delegate;
    id _target;
    SEL _action;
}

+ (void)initialize;
@property(nonatomic) SEL action; // @synthesize action=_action;
@property(retain, nonatomic) id target; // @synthesize target=_target;
@property(retain, nonatomic) id <IDETextFieldActionFilterDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSTextField *textField; // @synthesize textField=_textField;
- (void).cxx_destruct;
- (id)tokenField:(id)arg1 setUpTokenAttachmentCell:(id)arg2 forRepresentedObject:(id)arg3;
- (unsigned long long)tokenField:(id)arg1 styleForRepresentedObject:(id)arg2;
- (BOOL)tokenField:(id)arg1 hasMenuForRepresentedObject:(id)arg2;
- (id)tokenField:(id)arg1 menuForRepresentedObject:(id)arg2;
- (id)tokenField:(id)arg1 readFromPasteboard:(id)arg2;
- (BOOL)tokenField:(id)arg1 writeRepresentedObjects:(id)arg2 toPasteboard:(id)arg3;
- (id)tokenField:(id)arg1 representedObjectForEditingString:(id)arg2;
- (id)tokenField:(id)arg1 editingStringForRepresentedObject:(id)arg2;
- (id)tokenField:(id)arg1 displayStringForRepresentedObject:(id)arg2;
- (id)tokenField:(id)arg1 shouldAddObjects:(id)arg2 atIndex:(unsigned long long)arg3;
- (id)tokenField:(id)arg1 completionsForSubstring:(id)arg2 indexOfToken:(long long)arg3 indexOfSelectedItem:(long long *)arg4;
- (void)comboBoxSelectionIsChanging:(id)arg1;
- (void)comboBoxSelectionDidChange:(id)arg1;
- (void)comboBoxWillDismiss:(id)arg1;
- (void)comboBoxWillPopUp:(id)arg1;
- (id)control:(id)arg1 textView:(id)arg2 completions:(id)arg3 forPartialWordRange:(struct _NSRange)arg4 indexOfSelectedItem:(long long *)arg5;
- (BOOL)control:(id)arg1 textView:(id)arg2 doCommandBySelector:(SEL)arg3;
- (BOOL)control:(id)arg1 isValidObject:(id)arg2;
- (void)control:(id)arg1 didFailToValidatePartialString:(id)arg2 errorDescription:(id)arg3;
- (BOOL)control:(id)arg1 didFailToFormatString:(id)arg2 errorDescription:(id)arg3;
- (BOOL)control:(id)arg1 textShouldEndEditing:(id)arg2;
- (BOOL)control:(id)arg1 textShouldBeginEditing:(id)arg2;
- (BOOL)respondsToSelector:(SEL)arg1;
- (void)controlTextDidEndEditing:(id)arg1;
- (void)controlTextDidChange:(id)arg1;
- (void)controlTextDidBeginEditing:(id)arg1;
- (void)textFieldAction:(id)arg1;
- (void)didRefresh;
- (void)willRefresh;
- (void)primitiveInvalidate;
- (id)initWithTextField:(id)arg1;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

