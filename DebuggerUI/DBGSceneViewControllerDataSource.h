//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "DBGSceneViewControllerDataSourceProtocol.h"

@class DBGViewDebuggerAdditionUIController, NSDictionary, NSMutableArray, NSMutableDictionary, NSString;

@interface DBGSceneViewControllerDataSource : NSObject <DBGSceneViewControllerDataSourceProtocol>
{
    NSDictionary *_plistDict;
    NSMutableDictionary *_viewInstacesDict;
    NSMutableArray *_allViews;
    NSString *_rootIdentifier;
    unsigned long long globalRenderingOrderCounter;
    DBGViewDebuggerAdditionUIController *_debuggerUIController;
}

@property(retain) DBGViewDebuggerAdditionUIController *debuggerUIController; // @synthesize debuggerUIController=_debuggerUIController;
- (void).cxx_destruct;
- (id)allViews;
- (id)viewWithIdentifier:(id)arg1;
- (id)rootViewForHierarchyToDisplay;
- (void)updateViewRenderingOrderWithRootViewInstance:(id)arg1;
- (void)updateChildInstancesForInstance:(id)arg1;
- (void)prepareDataWithRootViewSurface:(id)arg1 debuggerUIController:(id)arg2;

@end

