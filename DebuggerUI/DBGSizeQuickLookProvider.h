//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DebuggerUI/IDEVariablesViewQuickLookProvider-Protocol.h>

@class DBGDataValue, DVTSizeViewController, NSString, NSURL, NSView;

@interface DBGSizeQuickLookProvider : NSObject <IDEVariablesViewQuickLookProvider>
{
    DBGDataValue *_dataValue;
    DVTSizeViewController *_sizeViewController;
    int _loadedState;
}

@property int loadedState; // @synthesize loadedState=_loadedState;
- (void).cxx_destruct;
- (void)cancelLoading;
@property(readonly) NSView *quickLookView;
- (void)_startRetrieval;
- (id)initWithDataValue:(id)arg1 options:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSURL *existingURLToOpen;
@property(readonly) NSString *extensionForTemporaryFile;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

