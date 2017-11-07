//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEMemoryGraphDebugger/DVTRadar_AttachmentDownloadDelegate-Protocol.h>

@class NSData, NSString;

@interface XRMemoryGraphDebuggerRadarManager : NSObject <DVTRadar_AttachmentDownloadDelegate>
{
    NSData *_memoryGraph;
    NSData *_mgScreenshot;
}

@property(retain) NSData *mgScreenshot; // @synthesize mgScreenshot=_mgScreenshot;
@property(retain) NSData *memoryGraph; // @synthesize memoryGraph=_memoryGraph;
- (void).cxx_destruct;
- (void)fileRadarForGraph:(id)arg1 withNodeID:(unsigned int)arg2 nodeAddressDescription:(id)arg3 andLabel:(id)arg4 screenshot:(id)arg5 inWindow:(id)arg6;
- (void)fileRadarForGraph:(id)arg1 withSelectedNodeID:(unsigned int)arg2 nodeAddressDescription:(id)arg3 selectedNodeLabel:(id)arg4 pivotNodeID:(unsigned int)arg5 pivotNodeLabel:(id)arg6 screenshot:(id)arg7 inWindow:(id)arg8;
- (void)fileRadarForIssue:(id)arg1 withGraph:(id)arg2 andScreenshot:(id)arg3 inWindow:(id)arg4;
- (void)cancelFetchAttachments:(id)arg1;
- (id)fetchAttachmentsCompletionBlock:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

