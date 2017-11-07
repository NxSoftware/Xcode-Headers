//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary;

@interface IBCLIOptionIndex : NSObject
{
    struct option *_longOptions;
    char *_shortOptions;
    NSDictionary *_optionDescriptionsByCode;
    NSArray *_descriptions;
    NSArray *_alternateNames;
    long long _alternatesCount;
}

- (void).cxx_destruct;
- (id)optionDescriptionForCode:(long long)arg1;
- (const char *)shortOptions;
- (struct option *)longOptions;
- (void)dealloc;
- (id)initWithDescriptions:(id)arg1 alternateNames:(id)arg2;

@end

