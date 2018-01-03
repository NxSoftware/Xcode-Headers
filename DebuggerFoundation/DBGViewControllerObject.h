//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DebuggerFoundation/DBGViewObject.h>

#import <DebuggerFoundation/DBGFocusableViewObject-Protocol.h>
#import <DebuggerFoundation/DBGSelectableViewObject-Protocol.h>

@class DBGViewSurface, DBGViewWindow, NSMapTable, NSString;

@interface DBGViewControllerObject : DBGViewObject <DBGSelectableViewObject, DBGFocusableViewObject>
{
    NSMapTable *_addressesToViewObjectsCache;
    DBGViewSurface *_view;
}

@property __weak DBGViewSurface *view; // @synthesize view=_view;
- (void).cxx_destruct;
- (void)_recursivelyUpdateAddressesToViewObjectsWithMapTable:(id)arg1;
- (id)_createAddressesToViewObjectsMap;
@property(readonly) struct CGRect bounds;
- (id)selectableViewObjectForIdentifier:(id)arg1;
- (void)updateSelectableViewObjectsCache;
@property(readonly) DBGViewWindow *window;
- (void)primitiveInvalidate;
- (id)formattedDisplayName;
- (void)updateChildrenWithSnapshotGroup:(id)arg1 forRequest:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

