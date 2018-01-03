//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTKit/DVTViewController.h>

#import <IDEDocViewer/IDEDocContentView-Protocol.h>
#import <IDEDocViewer/IDENavigableItemCoordinatorDelegate-Protocol.h>
#import <IDEDocViewer/NSPathControlDelegate-Protocol.h>
#import <IDEDocViewer/NSPopoverDelegate-Protocol.h>
#import <IDEDocViewer/WebFrameLoadDelegate-Protocol.h>
#import <IDEDocViewer/WebPolicyDelegate-Protocol.h>
#import <IDEDocViewer/WebResourceLoadDelegate-Protocol.h>
#import <IDEDocViewer/WebUIDelegate-Protocol.h>

@class DVTBindingToken, DVTBorderedView, DVTObservingToken, DVTStackBacktrace, IDEDocContentAreaViewController, IDENavBar, IDENavigableItem, IDENavigableItemCoordinator, NSArray, NSString, NSURL, WebView;

@interface IDEDocWebViewContentViewController : DVTViewController <IDENavigableItemCoordinatorDelegate, NSPathControlDelegate, NSPopoverDelegate, WebFrameLoadDelegate, WebPolicyDelegate, WebUIDelegate, WebResourceLoadDelegate, IDEDocContentView>
{
    IDENavBar *_navBar;
    IDENavigableItem *_rootNavigableItem;
    DVTBindingToken *_selectedTopLevelNavigableItemsBindingToken;
    DVTBindingToken *_selectedNavigableItemBindingToken;
    DVTObservingToken *_mainFrameURLObservingToken;
    double _cumulativeMagnifyDelta;
    short _stickyTextMagnifyGestureDirection;
    float _textSizeMultiplierAtGestureStart;
    NSURL *_referenceURLOverride;
    IDENavigableItemCoordinator *_navigableItemCoordinator;
    IDEDocContentAreaViewController *_hostContentAreaViewController;
    WebView *_webView;
    DVTBorderedView *_webViewBorderedView;
    NSArray *_selectedTopLevelNavigableItems;
    IDENavigableItem *_selectedNavigableItem;
}

+ (id)mainDocumentElementInWebView:(id)arg1;
+ (void)initialize;
+ (id)webViewLoadingLogAspect;
@property(retain, nonatomic) IDENavigableItem *selectedNavigableItem; // @synthesize selectedNavigableItem=_selectedNavigableItem;
@property(retain) NSArray *selectedTopLevelNavigableItems; // @synthesize selectedTopLevelNavigableItems=_selectedTopLevelNavigableItems;
@property(retain) DVTBorderedView *webViewBorderedView; // @synthesize webViewBorderedView=_webViewBorderedView;
@property(retain) WebView *webView; // @synthesize webView=_webView;
@property __weak IDEDocContentAreaViewController *hostContentAreaViewController; // @synthesize hostContentAreaViewController=_hostContentAreaViewController;
@property(readonly) IDENavigableItemCoordinator *navigableItemCoordinator; // @synthesize navigableItemCoordinator=_navigableItemCoordinator;
- (void).cxx_destruct;
- (void)setZoomMultiplier:(float)arg1;
- (float)zoomMultiplier;
- (void)magnifyWithEvent:(id)arg1;
- (void)beginGestureWithEvent:(id)arg1;
- (void)haveWorkspaceOpenOrRevealURL:(id)arg1;
- (void)webView:(id)arg1 decidePolicyForMIMEType:(id)arg2 request:(id)arg3 frame:(id)arg4 decisionListener:(id)arg5;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 request:(id)arg3 frame:(id)arg4 decisionListener:(id)arg5;
- (void)webView:(id)arg1 decidePolicyForNewWindowAction:(id)arg2 request:(id)arg3 newFrameName:(id)arg4 decisionListener:(id)arg5;
- (void)_downloadAndOpenSampleCodeWithRequest:(id)arg1;
- (BOOL)_allowURLRequest:(id)arg1 webView:(id)arg2;
- (void)webView:(id)arg1 didReceiveTitle:(id)arg2 forFrame:(id)arg3;
- (void)webView:(id)arg1 didChangeLocationWithinPageForFrame:(id)arg2;
- (void)webViewContextMenu_openLinkInNewTab:(id)arg1;
- (void)webViewContextMenu_copyLink:(id)arg1;
- (void)webViewContextMenu_findText:(id)arg1;
- (id)webView:(id)arg1 contextMenuItemsForElement:(id)arg2 defaultMenuItems:(id)arg3;
- (unsigned long long)webView:(id)arg1 dragDestinationActionMaskForDraggingInfo:(id)arg2;
@property(readonly) NSString *selectedStringInWebView;
- (void)loadURL:(id)arg1;
- (id)webViewURLString;
- (void)_updateJumpBar;
- (id)_parentTabController;
- (void)primitiveInvalidate;
- (void)loadView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

