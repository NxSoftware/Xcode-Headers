//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <GPUToolsServices/NSCoding-Protocol.h>
#import <GPUToolsServices/NSCopying-Protocol.h>

@interface DYInvestigatorStatistics : NSObject <NSCoding, NSCopying>
{
    unsigned long long _minimum;
    unsigned long long _firstQuartile;
    unsigned long long _median;
    unsigned long long _thirdQuartile;
    unsigned long long _maximum;
    unsigned long long _mean;
    unsigned long long _sumValueQ1toQ3;
    unsigned long long _sumWeightQ1toQ3;
    unsigned long long _meanQ1toQ3;
}

+ (id)statisticsFromArray:(id)arg1 getter:(CDUnknownBlockType)arg2;
@property(nonatomic) unsigned long long meanQ1toQ3; // @synthesize meanQ1toQ3=_meanQ1toQ3;
@property(nonatomic) unsigned long long sumWeightQ1toQ3; // @synthesize sumWeightQ1toQ3=_sumWeightQ1toQ3;
@property(nonatomic) unsigned long long sumValueQ1toQ3; // @synthesize sumValueQ1toQ3=_sumValueQ1toQ3;
@property(nonatomic) unsigned long long mean; // @synthesize mean=_mean;
@property(nonatomic) unsigned long long maximum; // @synthesize maximum=_maximum;
@property(nonatomic) unsigned long long thirdQuartile; // @synthesize thirdQuartile=_thirdQuartile;
@property(nonatomic) unsigned long long median; // @synthesize median=_median;
@property(nonatomic) unsigned long long firstQuartile; // @synthesize firstQuartile=_firstQuartile;
@property(nonatomic) unsigned long long minimum; // @synthesize minimum=_minimum;
- (void)offsetDataWithOffset:(unsigned long long)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;

@end

