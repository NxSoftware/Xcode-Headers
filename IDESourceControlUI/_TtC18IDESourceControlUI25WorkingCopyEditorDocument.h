//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEEditorDocument.h>

#import <IDESourceControlUI/IDESourceControlRefreshHistoryDocument-Protocol.h>

@class DVTSourceControlRevisionLocation, DVTSourceControlWorkingCopy, NSArray, NSString;

@interface _TtC18IDESourceControlUI25WorkingCopyEditorDocument : IDEEditorDocument <IDESourceControlRefreshHistoryDocument>
{
    // Error parsing type: , name: ideTopLevelStructureObjects
    // Error parsing type: , name: workingCopy
    // Error parsing type: , name: location
    // Error parsing type: , name: historyQueue
    // Error parsing type: , name: historyToken
    // Error parsing type: , name: progress
    // Error parsing type: , name: logItems
    // Error parsing type: , name: logItemClosures
    // Error parsing type: , name: progressClosures
}

+ (BOOL)shouldUnlockFileURLBeforeMakingChanges;
- (CDUnknownBlockType).cxx_destruct;
- (id)init;
- (void)editorDocumentWillClose;
- (void)currentProgress:(CDUnknownBlockType)arg1;
- (void)addProgressObserverWithClosure:(CDUnknownBlockType)arg1;
- (void)currentLogItems:(CDUnknownBlockType)arg1;
- (void)addLogItemObserverWithClosure:(CDUnknownBlockType)arg1;
- (void)loadHistory;
- (void)refreshHistory;
- (id)initForURL:(id)arg1 withContentsOfURL:(id)arg2 ofType:(id)arg3 error:(id *)arg4;
@property(nonatomic, readonly) int readOnlyStatus;
@property(nonatomic, copy) NSString *displayName;
@property(nonatomic, retain) DVTSourceControlRevisionLocation *location; // @synthesize location;
@property(nonatomic, retain) DVTSourceControlWorkingCopy *workingCopy; // @synthesize workingCopy;
@property(nonatomic, copy) NSArray *ideTopLevelStructureObjects; // @synthesize ideTopLevelStructureObjects;

@end

