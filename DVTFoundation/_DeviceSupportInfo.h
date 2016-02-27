//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface _DeviceSupportInfo : NSObject
{
    NSString *_filename;
    NSString *_platformName;
    NSString *_version;
    NSString *_train;
    NSString *_build;
}

+ (BOOL)_parseDeviceSupportURL:(id)arg1 intoPlatform:(id *)arg2 version:(id *)arg3 build:(id *)arg4;
+ (BOOL)_parseDeviceSupportURL:(id)arg1 intoPlatform:(id *)arg2;
@property(readonly, nonatomic) NSString *build; // @synthesize build=_build;
@property(readonly, nonatomic) NSString *train; // @synthesize train=_train;
@property(readonly, nonatomic) NSString *version; // @synthesize version=_version;
@property(readonly, nonatomic) NSString *platformName; // @synthesize platformName=_platformName;
@property(readonly, nonatomic) NSString *filename; // @synthesize filename=_filename;
- (void).cxx_destruct;
- (id)initWithURL:(id)arg1;

@end

