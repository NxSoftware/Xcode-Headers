//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <GPUToolsServices/NSCoding-Protocol.h>
#import <GPUToolsServices/NSCopying-Protocol.h>

@class DYDeviceInfo;

@interface DYInvestigatorConfig : NSObject <NSCopying, NSCoding>
{
    DYDeviceInfo *_deviceInfo;
    unsigned long long _overviewSamplePeriod;
    unsigned long long _overviewSampleCount;
    unsigned long long _overviewDuration;
}

@property(readonly, nonatomic) unsigned long long overviewDuration; // @synthesize overviewDuration=_overviewDuration;
@property(readonly, nonatomic) unsigned long long overviewSampleCount; // @synthesize overviewSampleCount=_overviewSampleCount;
@property(readonly, nonatomic) unsigned long long overviewSamplePeriod; // @synthesize overviewSamplePeriod=_overviewSamplePeriod;
@property(readonly, nonatomic) DYDeviceInfo *deviceInfo; // @synthesize deviceInfo=_deviceInfo;
- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long profilingFlags;
@property(readonly, nonatomic) int traceMode;
@property(readonly, nonatomic) BOOL isLegacyDevice;
- (void)_setOverviewDuration:(unsigned long long)arg1 SamplePeriod:(unsigned long long)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithDeviceInfo:(id)arg1;
- (id)init;

@end

