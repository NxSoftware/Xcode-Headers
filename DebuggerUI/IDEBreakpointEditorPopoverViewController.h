//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSViewController.h"

#import "IDEBreakpointActionRowDelegate.h"
#import "NSPopoverDelegate.h"

@class DBGBreakpointEditorTextField, DVTExtension, DVTStackView_AppKitAutolayout, DVTTextDocumentLocation, IDEBreakpoint, NSMapTable, NSPopover, NSString, NSView, NSViewController<IDEBreakpointEditor>;

@interface IDEBreakpointEditorPopoverViewController : NSViewController <NSPopoverDelegate, IDEBreakpointActionRowDelegate>
{
    IDEBreakpoint *_breakpoint;
    NSView *_initialFirstResponder;
    NSMapTable *_actionRowViewsToObservationTokens;
    DVTExtension *_breakpointEditorExtension;
    NSViewController<IDEBreakpointEditor> *_breakpointSpecificViewController;
    DVTTextDocumentLocation *_breakpointLocation;
    NSPopover *_popover;
    DVTStackView_AppKitAutolayout *_stackView;
    DVTStackView_AppKitAutolayout *_actionsStackView;
    NSView *_conditionView;
    DBGBreakpointEditorTextField *_conditionTextField;
    NSView *_ignoreCountView;
    NSView *_actionsView;
    NSView *_automaticallyContinueView;
    NSView *_addActionButtonView;
}

+ (id)_breakpointEditorExtensions;
+ (id)breakpointEditorExtensionsSortedByPriority;
+ (id)keyPathsForValuesAffectingIgnoreCountPostText;
+ (id)sourceStyleFont;
+ (void)hideCurrentEditorIfEditingBreakpoint:(id)arg1;
+ (void)hideCurrentEditor;
+ (void)showEditorForBreakpoint:(id)arg1 relativeToRect:(struct CGRect)arg2 ofView:(id)arg3;
@property(retain) NSView *addActionButtonView; // @synthesize addActionButtonView=_addActionButtonView;
@property(retain) NSView *automaticallyContinueView; // @synthesize automaticallyContinueView=_automaticallyContinueView;
@property(retain) NSView *actionsView; // @synthesize actionsView=_actionsView;
@property(retain) NSView *ignoreCountView; // @synthesize ignoreCountView=_ignoreCountView;
@property(retain) DBGBreakpointEditorTextField *conditionTextField; // @synthesize conditionTextField=_conditionTextField;
@property(retain) NSView *conditionView; // @synthesize conditionView=_conditionView;
@property(retain) DVTStackView_AppKitAutolayout *actionsStackView; // @synthesize actionsStackView=_actionsStackView;
@property(retain) DVTStackView_AppKitAutolayout *stackView; // @synthesize stackView=_stackView;
@property(retain) NSPopover *popover; // @synthesize popover=_popover;
@property(readonly) IDEBreakpoint *breakpoint; // @synthesize breakpoint=_breakpoint;
@property(retain) DVTTextDocumentLocation *breakpointLocation; // @synthesize breakpointLocation=_breakpointLocation;
- (void).cxx_destruct;
- (id)_findAssociatedBreakpointEditorExtension;
- (void)popoverDidClose:(id)arg1;
- (void)popoverWillClose:(id)arg1;
- (BOOL)popoverShouldClose:(id)arg1;
- (void)popoverWillShow:(id)arg1;
@property(readonly) NSString *ignoreCountPostText;
- (void)removeRowRequestedByRow:(id)arg1;
- (void)addRowRequestedByRow:(id)arg1;
- (id)initialFirstResponder;
- (void)cancelOperation:(id)arg1;
- (void)addFirstAction:(id)arg1;
- (double)sizeForFont:(id)arg1 fittingHeightOfTextField:(id)arg2;
- (id)sourceStyleFontFittingHeightOfTextField:(id)arg1;
- (id)_addBreakpointActionRowToStackViewForAction:(id)arg1 atIndex:(unsigned long long)arg2 becomeFirstResponder:(BOOL)arg3;
- (id)_addBreakpointActionRowToStackViewBelow:(id)arg1 becomeFirstResponder:(BOOL)arg2;
- (void)_addInitialActions;
- (id)_createBreakpointSpecificViewController;
- (void)_addBreakpointSpecificView;
- (int)_placementFromString:(id)arg1;
- (int)_placementForElement:(id)arg1;
- (void)loadView;
- (void)awakeFromNib;
- (id)_initWithBreakpoint:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

