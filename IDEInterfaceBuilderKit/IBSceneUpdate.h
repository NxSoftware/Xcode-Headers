//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IBGenericDeviceTypeDescription, IBPlatformToolRequester, IBTargetRuntime, NSString;
@protocol IBSceneUpdateRequest;

@interface IBSceneUpdate : NSObject
{
    NSObject *_rootObject;
    IBGenericDeviceTypeDescription *_deviceTypeDescription;
    IBTargetRuntime *_targetRuntime;
    id <IBSceneUpdateRequest> _request;
    NSString *_supersessionIdentifier;
    NSString *_pendingRequestID;
    IBPlatformToolRequester *_currentRemoteRequester;
}

@property(retain, nonatomic) IBPlatformToolRequester *currentRemoteRequester; // @synthesize currentRemoteRequester=_currentRemoteRequester;
@property(copy, nonatomic) NSString *pendingRequestID; // @synthesize pendingRequestID=_pendingRequestID;
@property(readonly, nonatomic) NSString *supersessionIdentifier; // @synthesize supersessionIdentifier=_supersessionIdentifier;
@property(readonly, nonatomic) id <IBSceneUpdateRequest> request; // @synthesize request=_request;
@property(readonly, nonatomic) IBTargetRuntime *targetRuntime; // @synthesize targetRuntime=_targetRuntime;
@property(readonly, nonatomic) IBGenericDeviceTypeDescription *deviceTypeDescription; // @synthesize deviceTypeDescription=_deviceTypeDescription;
@property(readonly, nonatomic) NSObject *rootObject; // @synthesize rootObject=_rootObject;
- (void).cxx_destruct;
- (id)description;
- (id)initWithRootObject:(id)arg1 targetRuntime:(id)arg2 deviceTypeDescription:(id)arg3 request:(id)arg4 supersessionIdentifier:(id)arg5;

@end

