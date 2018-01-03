//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTInstrumentsFoundation/XRVMRegion.h>

@class NSMutableArray, NSString;

@interface XRVMCoalescedRegion : XRVMRegion
{
    NSMutableArray *_subRegions;
    NSString *_groupName;
    unsigned long long _virtualSize;
    unsigned int _multiplicityFlags;
}

- (void).cxx_destruct;
- (id)displayPath;
- (id)displayType;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)sortSubregionsWithComparator:(CDUnknownBlockType)arg1;
- (BOOL)isFakeAggregate;
- (id)subRegions;
- (unsigned long long)virtualSize;
- (void)addRegion:(id)arg1;
- (id)initWithRegions:(id)arg1 groupName:(id)arg2;

@end

