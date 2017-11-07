//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <IDESceneKitEditor/SKEStaticTableViewInspector.h>

#import <IDESceneKitEditor/NSTableViewDataSource-Protocol.h>

@class DVTGradientImageButton, NSString;

@interface SKENodeAnimationsInspector : SKEStaticTableViewInspector <NSTableViewDataSource>
{
    DVTGradientImageButton *_deleteButton;
    DVTGradientImageButton *_addButton;
    DVTGradientImageButton *_toolsButton;
}

+ (id)tableColumnTitles;
+ (BOOL)wantsEditionBar;
- (void).cxx_destruct;
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3;
- (long long)numberOfRowsInTableView:(id)arg1;
- (id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3;
- (void)titleChanged:(id)arg1;
- (void)viewDidInstall;
- (void)loadView;
- (void)saveAnimationAction:(id)arg1;
- (void)popupToolsMenuAction:(id)arg1;
- (void)addAnimationAction:(id)arg1;
- (void)deleteAnimationAction:(id)arg1;
- (void)configureEditionBar;
- (void)primitiveInvalidate;
- (void)didSetInspectedObjects:(id)arg1;
- (void)initViewData;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

