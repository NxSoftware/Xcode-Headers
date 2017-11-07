//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <DVTFoundation/DVTMockCodesignableDevice.h>

#import <DVTFoundation/DVTBasicDevice-Protocol.h>

@class DVTPlatform, NSError, NSSet, NSString;

@interface DVTMockBasicDevice : DVTMockCodesignableDevice <DVTBasicDevice>
{
    BOOL _isProxiedDeviceMock;
    BOOL _availableMock;
    _Bool _deviceIsBusyMock;
    NSString *_modelNameMock;
    NSString *_modelCodeMock;
    NSString *_modelUTIMock;
    NSString *_processorDescriptionMock;
    NSString *_operatingSystemVersionMock;
    NSString *_operatingSystemBuildMock;
    DVTPlatform *_platformMock;
    NSString *_nativeArchitectureMock;
    NSError *_unavailabilityErrorMock;
}

@property _Bool deviceIsBusyMock; // @synthesize deviceIsBusyMock=_deviceIsBusyMock;
@property(retain) NSError *unavailabilityErrorMock; // @synthesize unavailabilityErrorMock=_unavailabilityErrorMock;
@property(getter=isAvailableMock) BOOL availableMock; // @synthesize availableMock=_availableMock;
@property BOOL isProxiedDeviceMock; // @synthesize isProxiedDeviceMock=_isProxiedDeviceMock;
@property(copy) NSString *nativeArchitectureMock; // @synthesize nativeArchitectureMock=_nativeArchitectureMock;
@property(retain) DVTPlatform *platformMock; // @synthesize platformMock=_platformMock;
@property(copy) NSString *operatingSystemBuildMock; // @synthesize operatingSystemBuildMock=_operatingSystemBuildMock;
@property(copy) NSString *operatingSystemVersionMock; // @synthesize operatingSystemVersionMock=_operatingSystemVersionMock;
@property(copy) NSString *processorDescriptionMock; // @synthesize processorDescriptionMock=_processorDescriptionMock;
@property(copy, nonatomic) NSString *modelUTIMock; // @synthesize modelUTIMock=_modelUTIMock;
@property(copy, nonatomic) NSString *modelCodeMock; // @synthesize modelCodeMock=_modelCodeMock;
@property(copy, nonatomic) NSString *modelNameMock; // @synthesize modelNameMock=_modelNameMock;
- (void).cxx_destruct;
@property(readonly) _Bool deviceIsBusy;
@property(readonly) NSError *unavailabilityError;
@property(readonly, getter=isAvailable) BOOL available;
@property(readonly) BOOL isProxiedDevice;
@property(readonly, copy) NSString *nativeArchitecture;
@property(readonly, copy, nonatomic) NSString *operatingSystemVersionWithBuildNumber;
@property(readonly) DVTPlatform *platform;
@property(readonly, copy) NSString *operatingSystemBuild;
@property(readonly, copy) NSString *operatingSystemVersion;
@property(readonly, copy) NSString *processorDescription;
@property(readonly, copy, nonatomic) NSString *modelUTI;
@property(readonly, copy, nonatomic) NSString *modelCode;
@property(readonly, copy, nonatomic) NSString *modelName;
- (id)snapshot;
- (id)initWithDictionary:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) NSString *identifier;
@property(readonly, copy, nonatomic) NSString *name;
@property(readonly, copy) NSString *nameForDeveloperPortal;
@property(readonly, copy) NSString *platformIdentifier;
@property(readonly, copy) NSSet *proxiedDevices;
@property(readonly) Class superclass;
@property(readonly) BOOL supportsProvisioning;

@end

