//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "DVTInvalidation.h"
#import "IDEDebugNavigableModel.h"
#import "IDEKeyDrivenNavigableItemRepresentedObject.h"

@class DTMemoryGraphItem, DTXChannel, DTXConnection, DVTDocumentLocation, DVTFileDataType, DVTObservingToken, DVTStackBacktrace, IDEDebugSession, IDEFileReference, IDELaunchSession, NSArray, NSData, NSError, NSImage, NSNull, NSString, NSURL, XRMemoryGraphDebuggerIndex, XRMemoryGraphIssueGenerator;

@interface XRMemoryGraphDebugger : NSObject <IDEDebugNavigableModel, IDEKeyDrivenNavigableItemRepresentedObject, DVTInvalidation>
{
    DTXChannel *_leaksChannel;
    DVTObservingToken *_debugSessionStateObservingToken;
    DVTObservingToken *_memoryDebuggingStateObservingToken;
    int _mallocStackLoggingState;
    int _loadedState;
    XRMemoryGraphDebuggerIndex *_unfilteredIndex;
    IDEDebugSession *_debugSession;
    NSURL *_memoryGraphPath;
    double _percentLoaded;
    NSData *_cachedRawMemoryGraph;
    DTXConnection *_primaryInstrumentsServer;
    XRMemoryGraphIssueGenerator *_issueGenerator;
}

+ (id)keyPathsForValuesAffectingLoadedState;
+ (id)keyPathsForValuesAffectingChildren;
+ (void)initialize;
@property(readonly, nonatomic) XRMemoryGraphIssueGenerator *issueGenerator; // @synthesize issueGenerator=_issueGenerator;
@property(retain, nonatomic) DTXConnection *primaryInstrumentsServer; // @synthesize primaryInstrumentsServer=_primaryInstrumentsServer;
@property(readonly, nonatomic) NSData *cachedRawMemoryGraph; // @synthesize cachedRawMemoryGraph=_cachedRawMemoryGraph;
@property int loadedState; // @synthesize loadedState=_loadedState;
@property double percentLoaded; // @synthesize percentLoaded=_percentLoaded;
@property(retain, nonatomic) NSURL *memoryGraphPath; // @synthesize memoryGraphPath=_memoryGraphPath;
@property(retain, nonatomic) IDEDebugSession *debugSession; // @synthesize debugSession=_debugSession;
@property(retain, nonatomic) XRMemoryGraphDebuggerIndex *memoryGraphIndex; // @synthesize memoryGraphIndex=_unfilteredIndex;
- (void).cxx_destruct;
- (void)primitiveInvalidate;
@property(readonly, nonatomic) NSError *mallocStackLoggingStateError;
- (void)fetchMemoryGraphIfNecessary;
@property(readonly, nonatomic) DTMemoryGraphItem *initialItem;
- (void)_updateIssues;
- (id)children;
- (id)initWithPlatform:(id)arg1 debugSession:(id)arg2;
@property(readonly) DVTDocumentLocation *navigableItem_contentDocumentLocation;
@property(readonly) DVTFileDataType *navigableItem_documentType;
@property(readonly) NSImage *navigableItem_image;
@property(readonly) NSString *navigableItem_name;
@property(readonly) IDELaunchSession *launchSession;
@property(readonly, copy) NSString *associatedProcessUUID;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) NSString *navigableItem_accessibleImageDescription;
@property(readonly) NSArray *navigableItem_additionalFilterMatchingText;
@property(readonly) NSArray *navigableItem_childRepresentedObjects;
@property(readonly) IDEFileReference *navigableItem_fileReference;
@property(readonly) NSNull *navigableItem_filtered;
@property(readonly) NSString *navigableItem_groupIdentifier;
@property(readonly) BOOL navigableItem_isLeaf;
@property(readonly) BOOL navigableItem_isMajorGroup;
@property(readonly) BOOL navigableItem_missingReferencedContentIsImportant;
@property(readonly) BOOL navigableItem_referencedContentExists;
@property(readonly) NSString *navigableItem_subtitle;
@property(readonly) NSString *navigableItem_toolTip;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

