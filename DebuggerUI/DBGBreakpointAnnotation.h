//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTKit/DVTTextAnnotation.h>

@class DVTObservingToken, IDEBreakpointIcon, IDEWorkspaceDocument;

@interface DBGBreakpointAnnotation : DVTTextAnnotation
{
    IDEWorkspaceDocument *_workspaceDocument;
    IDEBreakpointIcon *_icon;
    DVTObservingToken *_workspaceDocumentObserver;
    DVTObservingToken *_breakpointShouldBeEnabledObserver;
    DVTObservingToken *_breakpointModifiedObserver;
    DVTObservingToken *_breakpointLocationOrAddressObserver;
}

- (void).cxx_destruct;
- (id)view:(id)arg1 stringForToolTip:(long long)arg2 point:(struct CGPoint)arg3 userData:(void *)arg4;
- (id)toolTip;
- (void)_updateLandmarkItemIfAppropriate;
- (void)adjustParagraphIndexBy:(long long)arg1 lengthBy:(long long)arg2;
- (void)resolveLocationIfNeededForLayoutManager:(id)arg1;
- (id)annotationDisplayDescription;
- (id)annotationDisplayName;
- (void)_redisplay;
- (id)_iconForRect:(struct CGRect)arg1;
- (void)drawSidebarMarkerIconInRect:(struct CGRect)arg1 textView:(id)arg2;
- (struct CGRect)sidebarMarkerRectForFirstLineRect:(struct CGRect)arg1;
- (void)setLandmarkProvider:(id)arg1;
- (void)setLocation:(id)arg1;
- (void)annotationWillUninstall;
- (id)_initWithWorkspaceDocument:(id)arg1 breakpoint:(id)arg2;
- (id)initWithWorkspaceDocument:(id)arg1 addressBreakpoint:(id)arg2 inMemoryDocumentURL:(id)arg3;
- (id)initWithWorkspaceDocument:(id)arg1 fileBreakpoint:(id)arg2;

@end

