//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IBCocoaTouchToolFoundation/IBUISimulatedBarMetrics.h>

@class NSColor;

@interface IBUISimulatedTabBarMetrics : IBUISimulatedBarMetrics
{
    BOOL _translucent;
    NSColor *_tintColor;
    NSColor *_barTintColor;
}

+ (id)simulatedTabBarMetricsWithStyle:(long long)arg1 translucent:(BOOL)arg2 tintColor:(id)arg3 barTintColor:(id)arg4;
+ (id)defaultMetrics;
@property(readonly, copy, nonatomic) NSColor *barTintColor; // @synthesize barTintColor=_barTintColor;
@property(readonly, copy, nonatomic) NSColor *tintColor; // @synthesize tintColor=_tintColor;
@property(readonly, nonatomic, getter=isTranslucent) BOOL translucent; // @synthesize translucent=_translucent;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithBinaryArchiver:(id)arg1;
- (id)initWithBinaryUnarchiver:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithStyle:(long long)arg1 translucent:(BOOL)arg2 tintColor:(id)arg3 barTintColor:(id)arg4;

@end

