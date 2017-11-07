//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DVTTracePointDomain, DVTTracePointStringArgument, NSString;

@interface DVTTracePointFormatString : NSObject
{
    DVTTracePointStringArgument *_formatStringAsArgument;
    BOOL _valid;
    NSString *_format;
    DVTTracePointDomain *_domain;
    long long _argumentCount;
}

+ (id)genericFormatString;
+ (void)initialize;
+ (long long)maxAllowedArguments;
@property(readonly) long long argumentCount; // @synthesize argumentCount=_argumentCount;
@property(readonly) DVTTracePointDomain *domain; // @synthesize domain=_domain;
@property(readonly) NSString *format; // @synthesize format=_format;
@property(readonly, getter=isValid) BOOL valid; // @synthesize valid=_valid;
- (void).cxx_destruct;
- (id)initWithString:(id)arg1 domain:(id)arg2;
- (id)init;

@end

