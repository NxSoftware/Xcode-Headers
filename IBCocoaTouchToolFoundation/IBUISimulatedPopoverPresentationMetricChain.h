//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <IBCocoaTouchToolFoundation/IBUISimulatedMetricChain.h>

@interface IBUISimulatedPopoverPresentationMetricChain : IBUISimulatedMetricChain
{
    unsigned long long _permittedArrowDirections;
}

@property(readonly, nonatomic) unsigned long long permittedArrowDirections; // @synthesize permittedArrowDirections=_permittedArrowDirections;
- (void)encodeWithBinaryArchiver:(id)arg1;
- (id)initWithBinaryUnarchiver:(id)arg1;
- (id)initWithPermittedArrowDirections:(unsigned long long)arg1 precedingMetric:(id)arg2;

@end

