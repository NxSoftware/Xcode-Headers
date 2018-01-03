//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DebuggerLLDB/DBGSBDebugger-Protocol.h>

@class NSString;

@interface LLDBDebugger : NSObject <DBGSBDebugger>
{
    struct SBDebugger {
        struct shared_ptr<lldb_private::Debugger> m_opaque_sp;
    } _debugger;
}

+ (void)initialize;
- (id).cxx_construct;
- (void).cxx_destruct;
- (const char *)GetPrompt;
- (unsigned int)GetNumTargets;
- (void)HandleCommand:(const char *)arg1;
- (_Bool)SetCurrentPlatformSDKRoot:(const char *)arg1;
- (void)RunCommandInterpreter:(_Bool)arg1 spawnThread:(_Bool)arg2;
- (void)Destroy;
- (_Bool)IsValid;
- (void)SetErrorFileHandle:(struct __sFILE *)arg1 transfer:(_Bool)arg2;
- (void)SetOutputFileHandle:(struct __sFILE *)arg1 transfer:(_Bool)arg2;
- (void)SetInputFileHandle:(struct __sFILE *)arg1 transfer:(_Bool)arg2;
- (id)GetCommandInterpreter;
- (id)GetListener;
- (id)SetCurrentPlatform:(const char *)arg1;
- (void)SetSelectedTarget:(id)arg1;
- (id)GetTargetAtIndex:(unsigned int)arg1;
- (id)CreateTarget:(const char *)arg1 targetTriple:(const char *)arg2 platformName:(const char *)arg3 addDependentModules:(_Bool)arg4 error:(id)arg5;
- (int)RemoteFileDescriptorForLocalFileDescriptor:(int)arg1;
- (id)CreateFileSpecList;
- (id)CreateBroadcasterWithName:(const char *)arg1;
- (id)CreateTypeSummaryOptions;
- (id)CreateExpressionOptions;
- (id)CreateStringList;
- (id)CreateCommandReturnObject;
- (id)CreateStream;
- (id)CreateEvent;
- (id)CreateFileSpecWithPath:(const char *)arg1 resolve:(_Bool)arg2;
- (id)CreateFileSpecWithPath:(const char *)arg1;
- (id)CreateAttachInfoWithPID:(int)arg1;
- (id)CreateAttachInfoWithPath:(const char *)arg1 wait_for:(_Bool)arg2 async:(_Bool)arg3;
- (id)CreateLaunchInfoWithArgv:(const char **)arg1;
- (id)CreateError;
- (id)initWithLogCallBack:(CDUnknownFunctionPointerType)arg1 token:(void *)arg2 frameworkPath:(const char *)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

