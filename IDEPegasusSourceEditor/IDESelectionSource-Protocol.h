//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEPegasusSourceEditor/NSObject-Protocol.h>

@class IDESelection, IDEWorkspaceTabController;

@protocol IDESelectionSource <NSObject>
@property(nonatomic, readonly) IDEWorkspaceTabController *workspaceTabController;
@property(nonatomic, readonly) IDESelection *contextMenuSelection;
@property(nonatomic, readonly) IDESelection *outputSelection;
@end

