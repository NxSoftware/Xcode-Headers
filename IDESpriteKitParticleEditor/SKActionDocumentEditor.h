//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEEditor.h>

#import <IDESpriteKitParticleEditor/DVTReplacementViewDelegate-Protocol.h>
#import <IDESpriteKitParticleEditor/GTFActionEditorDelegate-Protocol.h>
#import <IDESpriteKitParticleEditor/NSSplitViewDelegate-Protocol.h>
#import <IDESpriteKitParticleEditor/SKActionAssignControllerDelegate-Protocol.h>
#import <IDESpriteKitParticleEditor/SKActionPreviewViewControllerDelegate-Protocol.h>

@class DVTGradientImageButton, DVTObservingToken, DVTReplacementView, DVTStepperTextField, GTFActionEditor, GTFActionLibrary, NSArray, NSArrayController, NSMutableDictionary, NSPopUpButton, NSString, NSURL, NSView, SKActionDocument, SKActionPreviewViewController, SKDocumentBorderedView, SKDocumentScopeBarView, SKDocumentSplitView;
@protocol SKActionPreviewViewControllerDelegate;

@interface SKActionDocumentEditor : IDEEditor <DVTReplacementViewDelegate, NSSplitViewDelegate, SKActionPreviewViewControllerDelegate, SKActionAssignControllerDelegate, GTFActionEditorDelegate>
{
    SKActionDocument *_actionDocument;
    DVTObservingToken *_workspaceDocumentKVOToken;
    DVTObservingToken *_actionEditorSelectedActionsKVOToken;
    DVTObservingToken *_actionEditorFilterStringKVOToken;
    DVTObservingToken *_previewSceneNavigableObjectKVOToken;
    DVTObservingToken *_previewSceneSelectedObjectsKVOToken;
    DVTReplacementView *_actionEditorReplacementView;
    GTFActionEditor *_actionEditorViewController;
    DVTReplacementView *_previewSceneReplacementView;
    SKActionPreviewViewController *_previewSceneViewController;
    DVTObservingToken *_previewDocumentsKVOToken;
    SKDocumentSplitView *_splitView;
    SKDocumentBorderedView *_sceneEditorGroupView;
    SKDocumentScopeBarView *_toolbarView;
    NSPopUpButton *_sceneSelector;
    NSView *_sceneSelectorView;
    DVTGradientImageButton *_actionEditorToggleButton;
    NSView *_playbackSpeedView;
    DVTStepperTextField *_playbackSpeedField;
    DVTGradientImageButton *_previewPauseResumeButton;
    DVTGradientImageButton *_previewPlayStopButton;
    NSMutableDictionary *_actionFilter;
    NSArrayController *_sceneURLs;
    BOOL _isInitialLayout;
    BOOL _ignoreSelectionChanges;
    long long _previewState;
    NSURL *_previewURL;
    id <SKActionPreviewViewControllerDelegate> _previewDelegate;
    NSArray *_currentSelectedItems;
}

+ (id)_toolTipForHideActionEditorViewButton;
+ (id)_toolTipForShowActionEditorButton;
@property(copy) NSArray *currentSelectedItems; // @synthesize currentSelectedItems=_currentSelectedItems;
@property(nonatomic) __weak id <SKActionPreviewViewControllerDelegate> previewDelegate; // @synthesize previewDelegate=_previewDelegate;
- (void).cxx_destruct;
- (void)previewPauseResumeButtonPressed:(id)arg1;
- (void)previewPlayStopButtonPressed:(id)arg1;
- (void)updateActionPreview;
- (id)_loadAndRetainSKDocumentAtURL:(id)arg1;
- (void)_loadPreviewFromURL:(id)arg1;
- (void)_registerScenePreviewObservers;
- (id)actionDocumentURLForPreviewController:(id)arg1;
- (id)_allTargets;
- (id)_nodesFilteredByString:(id)arg1;
- (void)_updateActionEditorAllTargetsFilter:(id)arg1;
- (void)_updateActionEditorFilterString:(id)arg1;
- (void)_updateActionEditorFilteredActions:(id)arg1 toTargets:(id)arg2 sync:(BOOL)arg3;
- (BOOL)actionEditor:(id)arg1 shouldSupportPastedActions:(id)arg2;
- (id)undoManagerForActionEditor:(id)arg1;
- (void)refreshObjectLibrary;
@property(readonly, nonatomic) GTFActionLibrary *actionLibrary;
- (void)_registerActionEditorObservers;
- (void)replacementView:(id)arg1 willCloseViewController:(id)arg2;
- (void)replacementView:(id)arg1 didInstallViewController:(id)arg2;
- (void)splitViewItemDidExpandOrCollapseBecauseUserDraggedDivider:(id)arg1;
- (BOOL)splitView:(id)arg1 canCollapseSubview:(id)arg2;
- (double)splitView:(id)arg1 constrainSplitPosition:(double)arg2 ofSubviewAt:(long long)arg3;
- (double)splitView:(id)arg1 constrainMinCoordinate:(double)arg2 ofSubviewAt:(long long)arg3;
- (double)splitView:(id)arg1 constrainMaxCoordinate:(double)arg2 ofSubviewAt:(long long)arg3;
- (void)playbackSpeedUpdated:(id)arg1;
- (void)previewSceneSelected:(id)arg1;
- (void)_updateToolTipsForShowEditorViewButtons;
- (void)resizeActionEditorToInitialHeight;
- (void)_updateLayoutPropertiesAfterUserDraggedDivider;
- (void)_resizeActionEditorToInitialHeight;
- (void)_updateLayoutAfterButtonPress:(id)arg1;
- (void)_updateSceneSelectorToURL:(id)arg1;
- (void)_refreshPreviewButtonsForState;
- (void)_populatePreviewSceneSelectorWithFilePaths:(id)arg1;
- (void)_setupToolbarViewLayout;
- (void)takeFocus;
- (id)currentSelectedDocumentLocations;
- (void)selectDocumentLocations:(id)arg1;
@property(readonly, nonatomic) long long previewState;
- (void)_updateLastActionEditorState;
- (void)primitiveInvalidate;
- (void)viewWillUninstall;
- (void)viewDidLayout;
- (void)_registerPreviewSceneUpdates;
- (void)_registerForActionLibraryNotifications;
- (void)viewDidInstall;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2 document:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

