//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <iCloudSupport/DVTInvalidation-Protocol.h>
#import <iCloudSupport/NSObject-Protocol.h>

@class DVTExtension, IDEWorkspaceTabController, NSCell, NSMenu;
@protocol IDEDebuggingAddition;

@protocol IDEDebuggingAdditionUIController <NSObject, DVTInvalidation>
- (DVTExtension *)extension;
- (id)initWithWorkspaceTabController:(IDEWorkspaceTabController *)arg1 withDebuggingAddition:(id <IDEDebuggingAddition>)arg2 forExtension:(DVTExtension *)arg3;

@optional
- (NSCell *)trayCellForNavigationProcessHeader;
- (NSMenu *)debugSubmenu;
- (BOOL)shouldReplaceDebugSubmenu;
@end

