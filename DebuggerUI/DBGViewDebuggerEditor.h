//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <IDEKit/IDEEditor.h>

#import <DebuggerUI/DBGSceneViewControllerDelegate-Protocol.h>
#import <DebuggerUI/IDEFocusedHierarchy-Protocol.h>
#import <DebuggerUI/NSTouchBarDelegate-Protocol.h>
#import <DebuggerUI/NSTouchBarProvider-Protocol.h>

@class DBGSceneViewController, DBGSnapshotGroup, DBGViewDebuggerAdditionUIController, DBGViewDebuggerDocument, DBGViewObject, DBGViewWindow, DVTBorderedView, DVTDelayedInvocation, DVTGradientImageButton, DVTGradientImagePopUpButton, DVTObservingToken, DVTRangeSliderCell, NSArray, NSLayoutConstraint, NSMenuItem, NSProgressIndicator, NSSegmentedControl, NSSet, NSSlider, NSString, NSTextField, NSTouchBar, NSView, NSVisualEffectView;
@protocol DBGFocusableViewObject, DVTCancellable;

@interface DBGViewDebuggerEditor : IDEEditor <NSTouchBarProvider, NSTouchBarDelegate, DBGSceneViewControllerDelegate, IDEFocusedHierarchy>
{
    NSArray *_currentSelectedItems;
    DBGViewWindow *_selectedWindow;
    DBGSnapshotGroup *_selectedRootLevelGroup;
    DBGViewDebuggerAdditionUIController *_viewDebuggerUIController;
    DVTDelayedInvocation *_handleOutputSelectionChangeInvocation;
    DVTObservingToken *_showOnlyInterestingViewObjectsObservingToken;
    DVTObservingToken *_showOnlyVisibleViewObjectsObservingToken;
    DVTObservingToken *_viewOutlineStructureObservingToken;
    DVTObservingToken *_navigatorOutputSelectionObserver;
    DVTObservingToken *_constraintsEnabledObservingToken;
    DVTObservingToken *_isIn3DObservingToken;
    DVTObservingToken *_nodeContentModeObservingToken;
    DVTObservingToken *_numberOfZPlanesObservingToken;
    DVTObservingToken *_rangeSliderLeftObservingToken;
    DVTObservingToken *_rangeSliderRightObservingToken;
    id <DVTCancellable> _viewDebuggerAdditionUIControllerObservingToken;
    DBGViewObject<DBGFocusableViewObject> *_formerlyFocusedObject;
    double _formerCameraZoom;
    BOOL _toolBarVisible;
    BOOL _reachedStage2;
    NSSet *_selectedConstraintSet;
    DVTObservingToken *_toolbarHiddenObservationToken;
    DVTObservingToken *_canvas3DEnabledObservationToken;
    DVTObservingToken *_clippingEnabledObservationToken;
    DVTObservingToken *_constraintsEnabledObservationToken;
    DVTObservingToken *_viewRangeMaxValueObservationToken;
    DVTObservingToken *_viewRangeValueObservationToken;
    DVTObservingToken *_zDistanceValueObservationToken;
    NSMenuItem *_backgroundColorsSubmenuItem;
    DBGSceneViewController *_sceneViewController;
    DVTBorderedView *_backgroundView;
    NSVisualEffectView *_toolBarContainerView;
    DVTBorderedView *_toolBarView;
    NSSegmentedControl *_zoomSegmentedControl;
    DVTGradientImagePopUpButton *_nodeContentModePopupButton;
    DVTGradientImageButton *_toggle2D3DButton;
    NSSlider *_zDistanceSlider;
    DVTGradientImageButton *_constraintsButton;
    NSSlider *_viewRangeSlider;
    DVTRangeSliderCell *_viewRangeSliderCell;
    DVTGradientImageButton *_showClippedContentButton;
    DVTGradientImageButton *_showTrueSpacingBoxesButton;
    NSLayoutConstraint *_trueSpacingBoxesButtonWidthConstraint;
    NSView *_statusMessageContainerView;
    NSTextField *_statusMessageTitle;
    NSTextField *_statusMessageDescription;
    NSView *_percentLoadedView;
    NSProgressIndicator *_percentLoadedIndicator;
    long long _selectedZoom;
}

+ (long long)version;
+ (void)configureStateSavingObjectPersistenceByName:(id)arg1;
+ (id)defaultViewNibBundle;
+ (id)defaultViewNibName;
@property BOOL reachedStage2; // @synthesize reachedStage2=_reachedStage2;
@property long long selectedZoom; // @synthesize selectedZoom=_selectedZoom;
@property __weak NSProgressIndicator *percentLoadedIndicator; // @synthesize percentLoadedIndicator=_percentLoadedIndicator;
@property(retain) NSView *percentLoadedView; // @synthesize percentLoadedView=_percentLoadedView;
@property __weak NSTextField *statusMessageDescription; // @synthesize statusMessageDescription=_statusMessageDescription;
@property __weak NSTextField *statusMessageTitle; // @synthesize statusMessageTitle=_statusMessageTitle;
@property __weak NSView *statusMessageContainerView; // @synthesize statusMessageContainerView=_statusMessageContainerView;
@property __weak NSLayoutConstraint *trueSpacingBoxesButtonWidthConstraint; // @synthesize trueSpacingBoxesButtonWidthConstraint=_trueSpacingBoxesButtonWidthConstraint;
@property __weak DVTGradientImageButton *showTrueSpacingBoxesButton; // @synthesize showTrueSpacingBoxesButton=_showTrueSpacingBoxesButton;
@property __weak DVTGradientImageButton *showClippedContentButton; // @synthesize showClippedContentButton=_showClippedContentButton;
@property __weak DVTRangeSliderCell *viewRangeSliderCell; // @synthesize viewRangeSliderCell=_viewRangeSliderCell;
@property __weak NSSlider *viewRangeSlider; // @synthesize viewRangeSlider=_viewRangeSlider;
@property __weak DVTGradientImageButton *constraintsButton; // @synthesize constraintsButton=_constraintsButton;
@property __weak NSSlider *zDistanceSlider; // @synthesize zDistanceSlider=_zDistanceSlider;
@property __weak DVTGradientImageButton *toggle2D3DButton; // @synthesize toggle2D3DButton=_toggle2D3DButton;
@property __weak DVTGradientImagePopUpButton *nodeContentModePopupButton; // @synthesize nodeContentModePopupButton=_nodeContentModePopupButton;
@property __weak NSSegmentedControl *zoomSegmentedControl; // @synthesize zoomSegmentedControl=_zoomSegmentedControl;
@property __weak DVTBorderedView *toolBarView; // @synthesize toolBarView=_toolBarView;
@property __weak NSVisualEffectView *toolBarContainerView; // @synthesize toolBarContainerView=_toolBarContainerView;
@property __weak DVTBorderedView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain) DBGSceneViewController *sceneViewController; // @synthesize sceneViewController=_sceneViewController;
@property(retain) NSMenuItem *backgroundColorsSubmenuItem; // @synthesize backgroundColorsSubmenuItem=_backgroundColorsSubmenuItem;
@property(retain) DVTObservingToken *zDistanceValueObservationToken; // @synthesize zDistanceValueObservationToken=_zDistanceValueObservationToken;
@property(retain) DVTObservingToken *viewRangeValueObservationToken; // @synthesize viewRangeValueObservationToken=_viewRangeValueObservationToken;
@property(retain) DVTObservingToken *viewRangeMaxValueObservationToken; // @synthesize viewRangeMaxValueObservationToken=_viewRangeMaxValueObservationToken;
@property(retain) DVTObservingToken *constraintsEnabledObservationToken; // @synthesize constraintsEnabledObservationToken=_constraintsEnabledObservationToken;
@property(retain) DVTObservingToken *clippingEnabledObservationToken; // @synthesize clippingEnabledObservationToken=_clippingEnabledObservationToken;
@property(retain) DVTObservingToken *canvas3DEnabledObservationToken; // @synthesize canvas3DEnabledObservationToken=_canvas3DEnabledObservationToken;
@property(retain) DVTObservingToken *toolbarHiddenObservationToken; // @synthesize toolbarHiddenObservationToken=_toolbarHiddenObservationToken;
@property(getter=isToolBarVisible) BOOL toolBarVisible; // @synthesize toolBarVisible=_toolBarVisible;
@property(retain) NSSet *selectedConstraintSet; // @synthesize selectedConstraintSet=_selectedConstraintSet;
- (void).cxx_destruct;
- (void)commitStateToDictionary:(id)arg1;
- (void)revertStateWithDictionary:(id)arg1;
- (void)primitiveInvalidate;
- (BOOL)focusHidesObject:(id)arg1;
- (BOOL)_isViewObject:(id)arg1 ancestorOf:(id)arg2;
- (void)_breakOutOfFocusIfNecessary:(id)arg1;
- (id)_windowForViewObject:(id)arg1;
@property(readonly) DBGViewDebuggerDocument *viewDebuggerDocument;
- (void)reloadSelectionInEditor;
- (void)addViewObjectsToSelectedItems:(id)arg1;
- (void)mouseClickedViewObject:(id)arg1 withEvent:(id)arg2;
- (void)rangeSliderKVOCompliantValueChangeWithBlock:(CDUnknownBlockType)arg1;
@property(readonly) double viewRangeMinValue;
@property(readonly) double viewRangeMaxValue;
@property(nonatomic) struct _NSRange viewRangeValue;
@property(readonly) double zDistanceMinValue;
@property(readonly) double zDistanceMaxValue;
@property(readonly) double zDistanceValue;
- (BOOL)validateMenuItem:(id)arg1;
- (void)switchToContentModeWireframesAndContents:(id)arg1;
- (void)switchToContentModeWireframes:(id)arg1;
- (void)switchToContentModeContents:(id)arg1;
- (void)zoomOutCanvas:(id)arg1;
- (void)zoomActualCanvas:(id)arg1;
- (void)zoomInCanvas:(id)arg1;
- (void)toggleClippingOfContent:(id)arg1;
- (void)toggleShowControllers:(id)arg1;
- (void)toggleShowConstraints:(id)arg1;
- (void)toggleTrueSpacingBoxesButtonPressed:(id)arg1;
- (void)gestureRecognizerAction:(id)arg1;
- (void)zoomButtonPressed:(id)arg1;
- (void)toggle2D3D:(id)arg1;
- (void)zoomButtonPressedForTag:(unsigned long long)arg1;
- (void)zDistanceDidChange;
- (void)zDistanceSliderChanged:(id)arg1;
- (void)_reloadSceneViewController;
- (void)_updateBackgroundColorsSubmenuSelection;
- (void)changeBackgroundColor:(id)arg1;
- (id)_newBackgroundColorsSubmenu;
- (id)_newBackgroundColorsMenuItem;
- (id)_findToggleControllerMenuItemInMenu:(id)arg1;
- (long long)_backgroundColorMenuItemInsertionIndexForMenu:(id)arg1;
- (void)_setupBackgroundColorSubmenuInMenu:(id)arg1;
- (void)setSelectedRootLevelGroup:(id)arg1;
@property(readonly) DBGSnapshotGroup *selectedRootLevelGroup;
@property(retain) DBGViewWindow *selectedWindow;
@property(retain) NSArray *currentSelectedItems;
- (void)_setCurrentSelectedItemsFromDocumentLocations:(id)arg1;
- (id)currentSelectedDocumentLocations;
- (id)_documentLocationsFromCurrentSelectedItems;
- (void)selectDocumentLocations:(id)arg1;
- (void)navigateToAnnotationWithRepresentedObject:(id)arg1 wantsIndicatorAnimation:(BOOL)arg2 exploreAnnotationRepresentedObject:(id)arg3;
- (void)_handleNavigatorOutputSelectionChanged;
- (void)viewWillUninstall;
- (void)_updateSliderMaxValue;
- (void)setupEditorMenu:(id)arg1;
- (void)_cancelAndClearObservingTokens;
- (void)viewDidInstall;
- (void)_handleViewDebuggerPercentLoadedChanged;
- (void)_configureNodeContentModePopUp;
- (void)regenerateIssues;
- (void)loadView;
- (void)visibleRangeSliderAction:(id)arg1;
- (void)_observeViewRangeValueChangesToUpdateRangeSlider:(id)arg1;
- (id)_visibleRangeControl;
- (id)_visibleRangePopoverFunctionBar;
- (id)_canvas3DToggleButton;
- (id)_toggleConstraintsButton;
- (id)_toggleClippedViewsButton;
- (id)_zSpacingPopoverFunctionBar;
- (void)_configureZSpacingSlider:(id)arg1;
- (void)zSpacingChanged:(id)arg1;
- (id)_barItemForVisibleRangeSliderWithIdentifier:(id)arg1;
- (id)_barItemForZSpacingSliderWithIdentifier:(id)arg1;
- (id)_barItemForVisibleRangePopupWithIdentifier:(id)arg1;
- (id)_barItemForCanvas3DToggleWithIdentifier:(id)arg1;
- (id)_barItemForToggleConstraintsWithIdentifier:(id)arg1;
- (id)_barItemForToggleClippedViewsWithIdentifier:(id)arg1;
- (id)_barItemForZSpacingPopupButtonWithIdentifier:(id)arg1;
- (id)touchBar:(id)arg1 makeItemForIdentifier:(id)arg2;
- (id)_viewDebuggerTouchBar;
- (void)_registerToolBarVisibilityChangedObserver;
- (id)makeTouchBar;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly) NSTouchBar *touchBar;

@end

