//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "DVTRadar_AttachmentDownloadDelegate.h"

@class NSData, NSString;

@interface XRMemoryGraphDebuggerRadarManager : NSObject <DVTRadar_AttachmentDownloadDelegate>
{
    NSData *_memoryGraph;
    NSData *_mgScreenshot;
}

@property(retain) NSData *mgScreenshot; // @synthesize mgScreenshot=_mgScreenshot;
@property(retain) NSData *memoryGraph; // @synthesize memoryGraph=_memoryGraph;
- (void).cxx_destruct;
- (void)fileRadarForGraph:(id)arg1 withNodeID:(unsigned int)arg2 andLabel:(id)arg3 screenshot:(id)arg4 inWindow:(id)arg5;
- (void)fileRadarForGraph:(id)arg1 withSelectedNodeID:(unsigned int)arg2 selectedNodeLabel:(id)arg3 pivotNodeID:(unsigned int)arg4 pivotNodeLabel:(id)arg5 screenshot:(id)arg6 inWindow:(id)arg7;
- (void)fileRadarForIssue:(id)arg1 withGraph:(id)arg2 andScreenshot:(id)arg3 inWindow:(id)arg4;
- (void)cancelFetchAttachments:(id)arg1;
- (id)fetchAttachmentsCompletionBlock:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

