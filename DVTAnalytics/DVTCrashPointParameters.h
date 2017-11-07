//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSSet;

@interface DVTCrashPointParameters : NSObject
{
    NSArray *_availableFilters;
    NSSet *_osVersions;
    NSSet *_deviceTypes;
}

@property(readonly) NSSet *deviceTypes; // @synthesize deviceTypes=_deviceTypes;
@property(readonly) NSSet *osVersions; // @synthesize osVersions=_osVersions;
- (void).cxx_destruct;
- (id)description;
- (id)filteredParametersUsingFilter:(id)arg1;
@property(readonly) NSArray *availableFilters; // @synthesize availableFilters=_availableFilters;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)initWithOSVersions:(id)arg1 deviceTypes:(id)arg2;

@end

