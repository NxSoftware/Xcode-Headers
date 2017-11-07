//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEIODebugGaugesUI/IDEDebuggingAdditionUIController-Protocol.h>
#import <IDEIODebugGaugesUI/IDEGaugeCollectedDataListeners-Protocol.h>

@class DVTExtension, DVTStackBacktrace, IDEDebugGaugeTrayCell, IDEEnergyGaugeDebuggingAddition, IDEGaugeDocumentLocation, IDEWorkspaceTabController, NSString;

@interface IDEEnergyGaugeDebuggingAdditionUIController : NSObject <IDEDebuggingAdditionUIController, IDEGaugeCollectedDataListeners>
{
    IDEDebugGaugeTrayCell *_trayCell;
    IDEGaugeDocumentLocation *_gaugeDocumentLocation;
    IDEEnergyGaugeDebuggingAddition *_debuggingAddition;
    DVTExtension *_extension;
    IDEWorkspaceTabController *_workspaceTabController;
}

+ (void)initialize;
@property(retain, nonatomic) IDEWorkspaceTabController *workspaceTabController; // @synthesize workspaceTabController=_workspaceTabController;
@property(retain, nonatomic) DVTExtension *extension; // @synthesize extension=_extension;
@property(retain, nonatomic) IDEEnergyGaugeDebuggingAddition *debuggingAddition; // @synthesize debuggingAddition=_debuggingAddition;
- (void).cxx_destruct;
- (void)primitiveInvalidate;
- (void)debuggingAdditionDidUpdateCollectedQueryResults:(id)arg1;
- (void)_initializeTray;
- (id)trayCellForNavigationProcessHeader;
- (id)initWithWorkspaceTabController:(id)arg1 withDebuggingAddition:(id)arg2 forExtension:(id)arg3;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

