//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTKit/DVTAnnotationProvider.h>

#import <IDESourceEditor/DVTTextAnnotationDelegate-Protocol.h>
#import <IDESourceEditor/IDETestsInFileObserver-Protocol.h>

@class IDEAnnotationContext, NSString, NSURL;

@interface IDETestingAnnotationProvider : DVTAnnotationProvider <DVTTextAnnotationDelegate, IDETestsInFileObserver>
{
    double _lastHoverEventTimeInterval;
    struct CGPoint _lastHoverEventPoint;
    IDEAnnotationContext *_context;
    NSURL *_fileURL;
}

+ (id)annotationProviderForContext:(id)arg1 error:(id *)arg2;
@property(retain) NSURL *fileURL; // @synthesize fileURL=_fileURL;
@property(retain) IDEAnnotationContext *context; // @synthesize context=_context;
- (void).cxx_destruct;
- (void)annotation:(id)arg1 willDrawInTextSidebarView:(id)arg2 withAnnotationsInSameLine:(id)arg3;
- (id)contextMenuItemsForAnnotation:(id)arg1 inTextSidebarView:(id)arg2;
- (BOOL)shouldMoveCursorForAnnotation:(id)arg1;
- (void)didEndRolloverOnAnnotation:(id)arg1 inTextSidebarView:(id)arg2 event:(id)arg3;
- (void)didBeginRolloverOnAnnotation:(id)arg1 inTextSidebarView:(id)arg2 event:(id)arg3;
- (BOOL)_shouldAllowLaunchingTests;
- (void)didClickAnnotation:(id)arg1 inTextSidebarView:(id)arg2 event:(id)arg3;
- (void)allTestablesChanged;
- (void)testsChanged:(id)arg1;
- (void)testsInFileUpdated:(id)arg1;
- (void)providerWillUninstall;
- (void)_clearAnnotations;
@property(readonly, copy) NSString *description;
- (id)initWithContext:(id)arg1;
- (id)_createAnnotationForTestManager:(id)arg1 editorDocument:(id)arg2 test:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

