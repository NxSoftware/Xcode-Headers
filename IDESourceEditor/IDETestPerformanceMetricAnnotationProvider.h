//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <DVTKit/DVTAnnotationProvider.h>

#import <IDESourceEditor/DVTMessageBubbleAnnotationDelegate-Protocol.h>
#import <IDESourceEditor/IDETestsInFileObserver-Protocol.h>

@class IDEAnnotationContext, NSPopover, NSString, NSURL;

@interface IDETestPerformanceMetricAnnotationProvider : DVTAnnotationProvider <DVTMessageBubbleAnnotationDelegate, IDETestsInFileObserver>
{
    double _lastHoverEventTimeInterval;
    struct CGPoint _lastHoverEventPoint;
    IDEAnnotationContext *_context;
    NSURL *_fileURL;
    NSPopover *_iterationPopover;
}

+ (id)annotationProviderForContext:(id)arg1 error:(id *)arg2;
@property(retain) NSPopover *iterationPopover; // @synthesize iterationPopover=_iterationPopover;
@property(retain) NSURL *fileURL; // @synthesize fileURL=_fileURL;
@property(retain) IDEAnnotationContext *context; // @synthesize context=_context;
- (void).cxx_destruct;
- (void)didClickAnnotation:(id)arg1 inTextSidebar:(id)arg2 event:(id)arg3;
- (void)didClickAnnotation:(id)arg1 inTextSidebarView:(id)arg2 event:(id)arg3;
- (void)didClickMessageBubbleForAnnotation:(id)arg1 onIcon:(BOOL)arg2 inView:(id)arg3 event:(id)arg4;
- (void)_didClickAnnotation:(id)arg1 inView:(id)arg2 event:(id)arg3;
- (id)menuForPerformanceMetricAnnotation:(id)arg1;
- (void)allTestablesChanged;
- (void)testsChanged:(id)arg1;
- (void)testsInFileUpdated:(id)arg1;
- (void)_collectAnnotation:(id)arg1 intoBucketsByLine:(id)arg2;
- (id)_annotationsForTest:(id)arg1 editorDocument:(id)arg2;
- (void)providerWillUninstall;
@property(readonly, copy) NSString *description;
- (id)initWithContext:(id)arg1;
- (id)_createAnnotationForMessageBubbleText:(id)arg1 test:(id)arg2 targetArchitecture:(id)arg3 targetDevice:(id)arg4 location:(id)arg5;
- (id)_messageBubbleTextForTest:(id)arg1 previousPerformanceMetricOutput:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

