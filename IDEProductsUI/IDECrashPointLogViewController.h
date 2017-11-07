//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <IDEKit/IDEViewController.h>

#import <IDEProductsUI/DVTReplacementViewDelegate-Protocol.h>
#import <IDEProductsUI/NSOutlineViewDataSource-Protocol.h>
#import <IDEProductsUI/NSOutlineViewDelegate-Protocol.h>

@class DVTCrashLogRecord, DVTCrashLogViewController, DVTCrashPoint, DVTReplacementView, IDECrashPointDetailViewController, NSOutlineView, NSString;

@interface IDECrashPointLogViewController : IDEViewController <NSOutlineViewDataSource, NSOutlineViewDelegate, DVTReplacementViewDelegate>
{
    IDECrashPointDetailViewController *_detailViewController;
    DVTCrashLogRecord *_crashLogRecord;
    DVTCrashPoint *_crashPoint;
    NSOutlineView *_outlineView;
    DVTReplacementView *_replacementView;
}

@property __weak DVTReplacementView *replacementView; // @synthesize replacementView=_replacementView;
@property __weak NSOutlineView *outlineView; // @synthesize outlineView=_outlineView;
@property(retain, nonatomic) DVTCrashPoint *crashPoint; // @synthesize crashPoint=_crashPoint;
@property(retain, nonatomic) DVTCrashLogRecord *crashLogRecord; // @synthesize crashLogRecord=_crashLogRecord;
@property __weak IDECrashPointDetailViewController *detailViewController; // @synthesize detailViewController=_detailViewController;
- (void).cxx_destruct;
- (void)replacementView:(id)arg1 didInstallViewController:(id)arg2;
- (void)_updateInstalledViewController;
- (void)_updateLogView;
@property(readonly) DVTCrashLogViewController *crashLogViewController;
- (void)loadView;
- (void)primitiveInvalidate;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

