//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IDEEditorArea.h"

#import "NSTouchBarDelegate.h"
#import "NSTouchBarProvider.h"

@class NSString, NSTouchBar;

@interface IDEEditorArea (DFRSupport) <NSTouchBarProvider, NSTouchBarDelegate>
- (id)editorAreaDFRController;
- (id)_fileHistoryNavigationMode;
- (void)validateHistoryNavigation;
- (void)navigateHistoryWithSegmentedControl:(id)arg1;
- (id)_segmentedControlForHistoryNavigation;
- (id)_editorAreaItem;
- (id)touchBar:(id)arg1 makeItemForIdentifier:(id)arg2;
- (id)_touchBarForNavigatorWidget;
- (id)makeTouchBar;
- (void)updateTouchBar;
- (BOOL)wantsToSuppressFunctionBar;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly) NSTouchBar *touchBar;
@end
