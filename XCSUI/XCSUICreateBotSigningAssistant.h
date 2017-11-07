//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <IDEKit/IDEAssistant.h>

#import <XCSUI/XCSUIBotDefinition_SigningEditor_AssistantCallback-Protocol.h>

@class XCSUIBotDefinition_SigningEditor, XCSUICreateBotAssistantContext;

@interface XCSUICreateBotSigningAssistant : IDEAssistant <XCSUIBotDefinition_SigningEditor_AssistantCallback>
{
    BOOL _viewIsInstalled;
    XCSUIBotDefinition_SigningEditor *_signingEditor;
}

+ (id)keyPathsForValuesAffectingCanGoForward;
+ (id)keyPathsForValuesAffectingCreateBotAssistantContext;
@property BOOL viewIsInstalled; // @synthesize viewIsInstalled=_viewIsInstalled;
@property(retain) XCSUIBotDefinition_SigningEditor *signingEditor; // @synthesize signingEditor=_signingEditor;
- (void).cxx_destruct;
- (void)cancelSession;
- (void)goNextOrFinish:(id)arg1;
- (void)loadView;
- (void)viewWillUninstall;
- (void)viewDidInstall;
- (BOOL)canGoForward;
- (id)nextAssistantIdentifier;
@property(readonly) XCSUICreateBotAssistantContext *createBotAssistantContext;
- (void)primitiveInvalidate;

@end

