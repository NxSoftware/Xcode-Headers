//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <DVTFoundation/DVTProcessInformation.h>

@class NSArray, NSDictionary, NSString;

@interface DVTXPCServiceInformation : DVTProcessInformation
{
    NSDictionary *_infoPlist;
    BOOL _startSuspended;
    int _xpcParentPid;
    NSString *_xpcServiceName;
    NSDictionary *_environment;
    NSArray *_arguments;
    NSString *_pathToInterpose;
    NSString *_fullPath;
    NSString *_containerAppID;
}

@property(retain) NSString *containerAppID; // @synthesize containerAppID=_containerAppID;
@property(retain) NSString *fullPath; // @synthesize fullPath=_fullPath;
@property(retain) NSString *pathToInterpose; // @synthesize pathToInterpose=_pathToInterpose;
@property BOOL startSuspended; // @synthesize startSuspended=_startSuspended;
@property(retain) NSArray *arguments; // @synthesize arguments=_arguments;
@property(retain) NSDictionary *environment; // @synthesize environment=_environment;
@property(retain) NSString *xpcServiceName; // @synthesize xpcServiceName=_xpcServiceName;
@property int xpcParentPid; // @synthesize xpcParentPid=_xpcParentPid;
- (void).cxx_destruct;
- (BOOL)isWidgetExtension;
- (id)extensionType;
- (id)extensionInfo;
- (id)_infoPlist;
- (id)displayName;
- (BOOL)isDebuggable;
- (id)description;
- (id)initWithServiceName:(id)arg1 pid:(int)arg2 parentPID:(int)arg3;

@end

