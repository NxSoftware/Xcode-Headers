//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IDEInitialization-Protocol.h"

@class DVTDelayedInvocation, DVTNotificationToken, DVTObservingToken, IBCancellationToken, IBHardwarePreviewConfiguration, NSButton;

@interface IDEInterfaceBuilderEditorDFRSupport : NSObject <IDEInitialization>
{
    NSButton *_updateConstraintsButton;
    NSButton *_updateFrameButton;
    NSButton *_zoomToFitSelectionButton;
    NSButton *_zoomToIdentityLevelButton;
    DVTObservingToken *_ibSelectionObserver;
    IBCancellationToken *_layoutObserver;
    DVTObservingToken *_ibZoomLevelObserver;
    DVTNotificationToken *_ibCanvasVisibleRectObserver;
    DVTDelayedInvocation *_zoomButtonStateValidationInvocation;
    DVTDelayedInvocation *_updateTouchbarInvocation;
    IBHardwarePreviewConfiguration *_previewConfiguration;
}

+ (void)simulatorCanAutoHide;
+ (void)simulatorCanAutoShow;
+ (id)templateImageNamed:(id)arg1;
+ (id)imageNamed:(id)arg1;
+ (BOOL)ide_initializeWithOptions:(int)arg1 error:(id *)arg2;
@property(retain) IBHardwarePreviewConfiguration *previewConfiguration; // @synthesize previewConfiguration=_previewConfiguration;
@property(retain) DVTDelayedInvocation *updateTouchbarInvocation; // @synthesize updateTouchbarInvocation=_updateTouchbarInvocation;
@property(retain) DVTDelayedInvocation *zoomButtonStateValidationInvocation; // @synthesize zoomButtonStateValidationInvocation=_zoomButtonStateValidationInvocation;
@property(retain) DVTNotificationToken *ibCanvasVisibleRectObserver; // @synthesize ibCanvasVisibleRectObserver=_ibCanvasVisibleRectObserver;
@property(retain) DVTObservingToken *ibZoomLevelObserver; // @synthesize ibZoomLevelObserver=_ibZoomLevelObserver;
@property(retain) IBCancellationToken *layoutObserver; // @synthesize layoutObserver=_layoutObserver;
@property(retain) DVTObservingToken *ibSelectionObserver; // @synthesize ibSelectionObserver=_ibSelectionObserver;
@property(retain) NSButton *zoomToIdentityLevelButton; // @synthesize zoomToIdentityLevelButton=_zoomToIdentityLevelButton;
@property(retain) NSButton *zoomToFitSelectionButton; // @synthesize zoomToFitSelectionButton=_zoomToFitSelectionButton;
@property(retain) NSButton *updateFrameButton; // @synthesize updateFrameButton=_updateFrameButton;
@property(retain) NSButton *updateConstraintsButton; // @synthesize updateConstraintsButton=_updateConstraintsButton;
- (void).cxx_destruct;
- (void)dealloc;

@end

