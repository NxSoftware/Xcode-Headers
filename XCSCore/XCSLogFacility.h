//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString;

@interface XCSLogFacility : NSObject
{
    BOOL _outputsToStandardError;
    NSString *_name;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_outputFiles;
}

+ (void)critical:(id)arg1;
+ (void)critical:(id)arg1 arguments:(struct __va_list_tag [1])arg2;
+ (void)error:(id)arg1;
+ (void)error:(id)arg1 arguments:(struct __va_list_tag [1])arg2;
+ (void)warn:(id)arg1;
+ (void)warn:(id)arg1 arguments:(struct __va_list_tag [1])arg2;
+ (void)info:(id)arg1;
+ (void)info:(id)arg1 arguments:(struct __va_list_tag [1])arg2;
+ (void)debug:(id)arg1;
+ (void)debug:(id)arg1 arguments:(struct __va_list_tag [1])arg2;
+ (id)facilityWithName:(id)arg1;
+ (id)defaultFacility;
+ (void)setDefaultFacilityName:(id)arg1;
@property(retain, nonatomic) NSMutableDictionary *outputFiles; // @synthesize outputFiles=_outputFiles;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic) BOOL outputsToStandardError; // @synthesize outputsToStandardError=_outputsToStandardError;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (void)critical:(id)arg1;
- (void)critical:(id)arg1 arguments:(struct __va_list_tag [1])arg2;
- (void)error:(id)arg1;
- (void)error:(id)arg1 arguments:(struct __va_list_tag [1])arg2;
- (void)warn:(id)arg1;
- (void)warn:(id)arg1 arguments:(struct __va_list_tag [1])arg2;
- (void)info:(id)arg1;
- (void)info:(id)arg1 arguments:(struct __va_list_tag [1])arg2;
- (void)debug:(id)arg1;
- (void)debug:(id)arg1 arguments:(struct __va_list_tag [1])arg2;
- (void)removeOutputFileHandle:(id)arg1;
- (void)addOutputFileHandle:(id)arg1;
- (void)removeOutputFile:(id)arg1;
- (void)addOutputFile:(id)arg1;
- (void)logAtLevel:(int)arg1 attributes:(id)arg2 message:(id)arg3;
- (void)logAtLevel:(int)arg1 format:(id)arg2 arguments:(struct __va_list_tag [1])arg3;
- (id)initWithName:(id)arg1;

@end

