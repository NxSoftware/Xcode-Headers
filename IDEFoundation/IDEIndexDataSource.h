//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DVTPerformanceMetric, NSString;

@interface IDEIndexDataSource : NSObject
{
    DVTPerformanceMetric *_generatorMetric;
    NSString *_source;
}

+ (const char *)builtinClassResolutionCString;
+ (id)builtinClassResolution;
+ (const char *)builtinIdResolutionCString;
+ (id)builtinIdResolution;
+ (const char *)builtinVoidResolutionCString;
+ (id)builtinVoidResolution;
+ (id)dataSourceVersion;
@property(retain, nonatomic) DVTPerformanceMetric *generatorMetric; // @synthesize generatorMetric=_generatorMetric;
@property(readonly, nonatomic) NSString *source; // @synthesize source=_source;
- (void).cxx_destruct;
- (BOOL)generateDataForJob:(id)arg1;
- (BOOL)processJob:(id)arg1;
- (id)initWithSource:(id)arg1;

@end

