//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "XCSTestDevice.h"

#import "IDETestReport_Device.h"

@class NSImage, NSString;

@interface XCSTestDevice (IDETestReportModelObjects) <IDETestReport_Device>
@property(readonly, copy, nonatomic) NSString *ide_testReport_device_platformName;
@property(readonly, copy, nonatomic) NSString *ide_testReport_device_modelName;
@property(readonly, copy, nonatomic) NSString *ide_testReport_device_identifier;
@property(readonly, copy, nonatomic) NSString *ide_testReport_device_architecture;
@property(readonly, copy, nonatomic) NSString *ide_testReport_device_osVersion;
@property(readonly, nonatomic) BOOL ide_testReport_device_isSimulator;
@property(readonly, nonatomic) NSImage *ide_testReport_device_statusImage;
@property(readonly, copy, nonatomic) NSString *ide_testReport_device_UTI;
@property(readonly, copy, nonatomic) NSString *ide_testReport_device_name;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

