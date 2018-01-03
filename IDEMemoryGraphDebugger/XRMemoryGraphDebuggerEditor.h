//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEEditor.h>

#import <IDEMemoryGraphDebugger/DTObjectGridGraphDelegate-Protocol.h>
#import <IDEMemoryGraphDebugger/NSTouchBarDelegate-Protocol.h>
#import <IDEMemoryGraphDebugger/NSTouchBarProvider-Protocol.h>

@class DTMemoryGraphItem, DTVMUObjectGridGraphViewController, DVTBorderedView, DVTGradientImageButton, DVTObservingToken, IDEVariablesViewQuickLookPopover, NSArray, NSMutableSet, NSProgressIndicator, NSSegmentedControl, NSString, NSTextField, NSTouchBar, NSView, NSVisualEffectView, XRMemoryGraphDebuggerEditorDFRSupport, XRMemoryGraphDebuggerIndexSearchManager, XRMemoryGraphDebuggerRadarManager;
@protocol DTObjectGridNode;

@interface XRMemoryGraphDebuggerEditor : IDEEditor <NSTouchBarProvider, NSTouchBarDelegate, DTObjectGridGraphDelegate>
{
    DTMemoryGraphItem *_documentInstanceItem;
    DTMemoryGraphItem *_currentlySelectedItem;
    DVTObservingToken *_filteredChildrenObservingToken;
    NSMutableSet *_currentUIControllerObservers;
    DVTObservingToken *_debuggingAdditionsObservation;
    DVTObservingToken *_workspaceFinishedLoadingObservation;
    DVTObservingToken *_backupWorkspaceExecEnvObservation;
    DVTObservingToken *_debuggerUIControllerObservation;
    BOOL _isMemgraphFile;
    XRMemoryGraphDebuggerEditorDFRSupport *_touchBarSupportController;
    DVTBorderedView *_backgroundView;
    NSVisualEffectView *_toolBarContainerView;
    DVTBorderedView *_toolBarView;
    DVTGradientImageButton *_jumpToDefinitionButton;
    DVTGradientImageButton *_printDescriptionButton;
    DVTGradientImageButton *_focusButton;
    NSSegmentedControl *_zoomSegmentedControl;
    NSView *_buildingMemoryGraphView;
    NSProgressIndicator *_progressIndicator;
    NSTextField *_messageLabel;
    DTVMUObjectGridGraphViewController *_gridGraphController;
    NSArray *_currentSelectedItems;
    IDEVariablesViewQuickLookPopover *_quickLookPopover;
    id <DTObjectGridNode> _currentPopoverNode;
    XRMemoryGraphDebuggerRadarManager *_radarManager;
    XRMemoryGraphDebuggerIndexSearchManager *_indexSearchManager;
}

+ (long long)version;
+ (void)configureStateSavingObjectPersistenceByName:(id)arg1;
+ (id)defaultViewNibBundle;
+ (id)defaultViewNibName;
@property(retain, nonatomic) XRMemoryGraphDebuggerIndexSearchManager *indexSearchManager; // @synthesize indexSearchManager=_indexSearchManager;
@property(retain, nonatomic) XRMemoryGraphDebuggerRadarManager *radarManager; // @synthesize radarManager=_radarManager;
@property(nonatomic) __weak id <DTObjectGridNode> currentPopoverNode; // @synthesize currentPopoverNode=_currentPopoverNode;
@property(retain, nonatomic) IDEVariablesViewQuickLookPopover *quickLookPopover; // @synthesize quickLookPopover=_quickLookPopover;
@property(retain) NSArray *currentSelectedItems; // @synthesize currentSelectedItems=_currentSelectedItems;
@property __weak DTVMUObjectGridGraphViewController *gridGraphController; // @synthesize gridGraphController=_gridGraphController;
@property __weak NSTextField *messageLabel; // @synthesize messageLabel=_messageLabel;
@property __weak NSProgressIndicator *progressIndicator; // @synthesize progressIndicator=_progressIndicator;
@property __weak NSView *buildingMemoryGraphView; // @synthesize buildingMemoryGraphView=_buildingMemoryGraphView;
@property __weak NSSegmentedControl *zoomSegmentedControl; // @synthesize zoomSegmentedControl=_zoomSegmentedControl;
@property __weak DVTGradientImageButton *focusButton; // @synthesize focusButton=_focusButton;
@property __weak DVTGradientImageButton *printDescriptionButton; // @synthesize printDescriptionButton=_printDescriptionButton;
@property __weak DVTGradientImageButton *jumpToDefinitionButton; // @synthesize jumpToDefinitionButton=_jumpToDefinitionButton;
@property __weak DVTBorderedView *toolBarView; // @synthesize toolBarView=_toolBarView;
@property __weak NSVisualEffectView *toolBarContainerView; // @synthesize toolBarContainerView=_toolBarContainerView;
@property __weak DVTBorderedView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain) XRMemoryGraphDebuggerEditorDFRSupport *touchBarSupportController; // @synthesize touchBarSupportController=_touchBarSupportController;
- (void).cxx_destruct;
- (void)primitiveInvalidate;
- (void)commitStateToDictionary:(id)arg1;
- (void)revertStateWithDictionary:(id)arg1;
- (void)cancelOperation:(id)arg1;
- (void)keyDown:(id)arg1;
- (BOOL)becomeFirstResponder;
- (BOOL)acceptsFirstResponder;
- (void)navigateToAnnotationWithRepresentedObject:(id)arg1 wantsIndicatorAnimation:(BOOL)arg2 exploreAnnotationRepresentedObject:(id)arg3;
- (id)objectGridGraph:(id)arg1 contextMenuForNode:(id)arg2;
- (void)objectGridGraph:(id)arg1 didCmdClickReference:(id)arg2;
- (void)objectGridGraph:(id)arg1 didClickReference:(id)arg2;
- (void)objectGridGraph:(id)arg1 didCmdClickNode:(id)arg2;
- (void)objectGridGraph:(id)arg1 didClickNode:(id)arg2;
- (void)objectGridGraph:(id)arg1 willDisplayReference:(id)arg2;
- (void)objectGridGraph:(id)arg1 willDisplayNode:(id)arg2;
- (void)_handleGridGraphSelectionChangeToNode:(id)arg1;
- (void)_checkAndOpenDocumentLocation:(id)arg1;
- (void)_jumpToDefinitionOfReference:(id)arg1 withSourceClassName:(id)arg2;
- (void)_jumpToDefinitionOfClass:(id)arg1;
- (void)_notifySelectionChangedToItem:(id)arg1;
- (void)_updateCanvasBarFromItem:(id)arg1;
- (void)_updateFocusCanvasBarButtonFromItem:(id)arg1;
- (void)_updateJumpToDefinitionCanvasBarButtonFromItem:(id)arg1;
- (void)_updatePrintDescriptionCanvasBarButtonFromItem:(id)arg1;
- (void)_fileRadar:(id)arg1;
- (void)_printDescription:(id)arg1;
- (id)contextMenuSelection;
- (void)_revealInNavigator:(id)arg1;
- (void)_exemptItemForNavigatorReveal:(id)arg1;
- (void)_unfocus:(id)arg1;
- (void)_unfocusFromNode:(id)arg1;
- (void)_focus:(id)arg1;
- (void)_focusOnNode:(id)arg1;
- (void)_jumpToDefinition:(id)arg1;
- (void)_displayQuickLook:(id)arg1;
- (void)_displayQuickLookForNode:(id)arg1;
- (void)_dismissQuickLookPopover;
- (void)focusButtonPressed:(id)arg1;
- (void)printDescriptionButtonPressed:(id)arg1;
- (void)jumpToDefintionButtonPressed:(id)arg1;
- (void)zoomOutCanvas:(id)arg1;
- (void)zoomActualCanvas:(id)arg1;
- (void)zoomInCanvas:(id)arg1;
- (void)zoomButtonPressedForTag:(unsigned long long)arg1;
- (void)zoomButtonPressed:(id)arg1;
- (void)_showFirstMemoryGraphWithController:(id)arg1;
- (id)_getDebugSessionForRunDestination:(id)arg1 workspace:(id)arg2 withMemgraphFile:(id)arg3;
- (id)_getRunDestination;
- (void)setupInfrastructureForMemgraphFile:(id)arg1;
- (BOOL)_viewingMemgraphFile;
- (id)memoryGraphDebuggerDocument;
- (void)_setDocumentInstanceItem:(id)arg1;
- (void)viewDidAppear;
- (void)viewDidInstall;
- (void)_performWithTabUIController:(CDUnknownBlockType)arg1;
- (void)loadView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2 document:(id)arg3;
- (id)dfrSupport;
- (id)_barItemForExpandCollapseWithIdentifier:(id)arg1;
- (id)_barItemForFocusOnNodeWithIdentifier:(id)arg1;
- (id)_barItemForJumpToDefinitionWithIdentifier:(id)arg1;
- (id)_barItemForPrintDescriptionWithIdentifier:(id)arg1;
- (id)touchBar:(id)arg1 makeItemForIdentifier:(id)arg2;
- (id)makeTouchBar;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly) NSTouchBar *touchBar;

@end

