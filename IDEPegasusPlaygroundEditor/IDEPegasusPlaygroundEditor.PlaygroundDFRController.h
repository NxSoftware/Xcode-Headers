//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <DVTFoundation/DVTInvalidation_NSObject.h>

#import <IDEPegasusPlaygroundEditor/IDEWorkspaceRunGroupFunctionBarOverride-Protocol.h>
#import <IDEPegasusPlaygroundEditor/NSTouchBarDelegate-Protocol.h>

@class DVTNotificationToken, DVTObservingToken, NSButton, _TtC26IDEPegasusPlaygroundEditor16PlaygroundEditor;

@interface IDEPegasusPlaygroundEditor.PlaygroundDFRController : DVTInvalidation_NSObject <NSTouchBarDelegate, IDEWorkspaceRunGroupFunctionBarOverride>
{
    // Error parsing type: , name: editor
    // Error parsing type: , name: toggleInlineQuickLookButton
    // Error parsing type: , name: toyboxObserver
    // Error parsing type: , name: didSelectToyNotificationToken
    // Error parsing type: , name: didToggleInlineResultNotificationToken
    // Error parsing type: , name: textViewDidChangeSelectionNotificationToken
}

- (CDUnknownBlockType).cxx_destruct;
- (id)init;
- (void)dfr_didChangeSelection:(id)arg1;
- (void)didSelectToy:(id)arg1;
- (void)changeDisplayRepresentation:(id)arg1;
- (void)toggleExecutionState:(id)arg1;
- (void)toggleQuickLookInline:(id)arg1;
- (id)touchBar:(id)arg1 makeItemForIdentifier:(id)arg2;
- (BOOL)shouldSuppressWorkspaceDebugControlTouchBarItem;
- (id)identifierForWorkspaceRunGroupFunctionBarOverride;
- (id)makeTouchBar;
- (void)primitiveInvalidate;
- (id)initWithEditor:(id)arg1;
@property(nonatomic, retain) DVTNotificationToken *textViewDidChangeSelectionNotificationToken; // @synthesize textViewDidChangeSelectionNotificationToken;
@property(nonatomic, retain) DVTNotificationToken *didToggleInlineResultNotificationToken; // @synthesize didToggleInlineResultNotificationToken;
@property(nonatomic, retain) DVTNotificationToken *didSelectToyNotificationToken; // @synthesize didSelectToyNotificationToken;
@property(nonatomic, retain) DVTObservingToken *toyboxObserver; // @synthesize toyboxObserver;
@property(nonatomic, retain) NSButton *toggleInlineQuickLookButton; // @synthesize toggleInlineQuickLookButton;
@property(nonatomic) __weak _TtC26IDEPegasusPlaygroundEditor16PlaygroundEditor *editor; // @synthesize editor;

@end

