//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DTSysmonCPUUsageRecord, DTSysmonSystemRecord, NSArray;

@interface DTSysmonRecord : NSObject
{
    unsigned int _recordType;
    unsigned long long _startTimestamp;
    unsigned long long _endTimestamp;
    NSArray *_changedProcesses;
    NSArray *_deadProcesses;
    DTSysmonSystemRecord *_system;
    NSArray *_coalitions;
    NSArray *_deadCoalitions;
    DTSysmonCPUUsageRecord *_cpuUsage;
    NSArray *_processAttributes;
    NSArray *_systemAttributes;
    NSArray *_coalitionAttributes;
}

@property(retain, nonatomic) NSArray *coalitionAttributes; // @synthesize coalitionAttributes=_coalitionAttributes;
@property(retain, nonatomic) NSArray *systemAttributes; // @synthesize systemAttributes=_systemAttributes;
@property(retain, nonatomic) NSArray *processAttributes; // @synthesize processAttributes=_processAttributes;
@property(retain, nonatomic) DTSysmonCPUUsageRecord *cpuUsage; // @synthesize cpuUsage=_cpuUsage;
@property(retain, nonatomic) NSArray *deadCoalitions; // @synthesize deadCoalitions=_deadCoalitions;
@property(retain, nonatomic) NSArray *coalitions; // @synthesize coalitions=_coalitions;
@property(retain, nonatomic) DTSysmonSystemRecord *system; // @synthesize system=_system;
@property(retain, nonatomic) NSArray *deadProcesses; // @synthesize deadProcesses=_deadProcesses;
@property(retain, nonatomic) NSArray *changedProcesses; // @synthesize changedProcesses=_changedProcesses;
@property(nonatomic) unsigned long long endTimestamp; // @synthesize endTimestamp=_endTimestamp;
@property(nonatomic) unsigned long long startTimestamp; // @synthesize startTimestamp=_startTimestamp;
@property(nonatomic) unsigned int recordType; // @synthesize recordType=_recordType;
- (void).cxx_destruct;

@end

