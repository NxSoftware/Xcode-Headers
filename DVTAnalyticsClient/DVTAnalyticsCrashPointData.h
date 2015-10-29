//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <DVTAnalyticsClient/DVTAnalyticsData.h>

#import "DVTServicesJSONSerialization.h"

@class DVTAnalyticsCrashPointIdentifier, NSString;

@interface DVTAnalyticsCrashPointData : DVTAnalyticsData <DVTServicesJSONSerialization>
{
    DVTAnalyticsCrashPointIdentifier *_crashPointIdentifier;
    NSString *_adamId;
    NSString *_appVersion;
    NSString *_appBuild;
    NSString *_bundleId;
    NSString *_crashPointId;
}

@property(retain) NSString *crashPointId; // @synthesize crashPointId=_crashPointId;
@property(retain) NSString *bundleId; // @synthesize bundleId=_bundleId;
@property(retain) NSString *appBuild; // @synthesize appBuild=_appBuild;
@property(retain) NSString *appVersion; // @synthesize appVersion=_appVersion;
@property(retain) NSString *adamId; // @synthesize adamId=_adamId;
- (void).cxx_destruct;
- (id)JSONRepresentation;
@property(readonly) DVTAnalyticsCrashPointIdentifier *crashPointIdentifier; // @synthesize crashPointIdentifier=_crashPointIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

