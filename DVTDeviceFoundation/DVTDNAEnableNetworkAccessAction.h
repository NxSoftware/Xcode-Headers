//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <DVTDeviceFoundation/DVTAsyncDeviceAction.h>

@interface DVTDNAEnableNetworkAccessAction : DVTAsyncDeviceAction
{
    DVTAsyncDeviceAction *_enableRemoteSSHAction;
}

- (void).cxx_destruct;
- (id)performForDevice:(id)arg1 withArguments:(id)arg2 infoRequestHandler:(CDUnknownBlockType)arg3;
- (unsigned long long)currentStateForDevice:(id)arg1;
- (_Bool)shouldEnableActionForDevice:(id)arg1;
- (_Bool)shouldShowActionForDevice:(id)arg1;
- (id)confirmationMessageForDevice:(id)arg1;
- (id)tooltipForDevice:(id)arg1;
- (_Bool)_deviceRequiresSRPForNetworkDevelopment:(id)arg1;
- (_Bool)_deviceVersionSupportsNBDD:(id)arg1;
- (id)_enableRemoteSSHAction;
- (id)init;

@end
