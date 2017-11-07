//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEKit/IDEAttachToProcessSheetDelegate-Protocol.h>

@class IDEWorkspaceTabController;

@interface IDEAttachToProcessHelper : NSObject <IDEAttachToProcessSheetDelegate>
{
    IDEWorkspaceTabController *_workspaceTabController;
}

+ (id)_archNameForExecutableArchitecture:(int)arg1;
+ (id)_archtiectureForTarget:(id)arg1;
+ (void)askUserForProcessIdentifierAndAttachToItFromWorkspaceTabController:(id)arg1;
+ (id)attachToProcess:(id)arg1 fromWorkspaceTabController:(id)arg2 usingRunDestination:(id)arg3 toolchains:(id)arg4 explicitActivityViewTitle:(id)arg5;
+ (id)attachToProcess:(id)arg1 fromWorkspaceTabController:(id)arg2 usingRunDestination:(id)arg3 explicitActivityViewTitle:(id)arg4;
+ (id)attachToProcess:(id)arg1 fromWorkspaceTabController:(id)arg2 usingRunDestination:(id)arg3;
+ (id)attachToProcess:(id)arg1 fromWorkspaceTabController:(id)arg2;
- (void).cxx_destruct;
- (void)processIDEntered:(int)arg1 debuggerSpecifier:(id)arg2 debugProcessAsUID:(unsigned int)arg3 toolchains:(id)arg4;
- (void)processNameEntered:(id)arg1 debuggerSpecifier:(id)arg2 debugProcessAsUID:(unsigned int)arg3 toolchains:(id)arg4;
- (void)processInformationSelected:(id)arg1 debuggerSpecifier:(id)arg2 debugProcessAsUID:(unsigned int)arg3 toolchains:(id)arg4;
- (void)_showAlertForNonDebuggableArchitecture:(id)arg1;
- (id)_attachToPID:(int)arg1 debuggerSpecifier:(id)arg2 debugProcessAsUID:(unsigned int)arg3 displayName:(id)arg4 processPath:(id)arg5 targetArchitecture:(id)arg6 launchStyle:(int)arg7 usingRunDestination:(id)arg8 toolchains:(id)arg9 explicitActivityViewTitle:(id)arg10;
- (void)_attachToProcessName:(id)arg1 debuggerSpecifier:(id)arg2 debugProcessAsUID:(unsigned int)arg3 usingRunDestination:(id)arg4 toolchains:(id)arg5;
- (id)_attachToProcess:(id)arg1 debuggerSpecifier:(id)arg2 debugProcessAsUID:(unsigned int)arg3 usingRunDestination:(id)arg4 toolchains:(id)arg5 explicitActivityViewTitle:(id)arg6;
- (id)_initWithWorkspaceTabController:(id)arg1;

@end

