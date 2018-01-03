//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GLToolsInterface/NSCoding-Protocol.h>
#import <GLToolsInterface/NSObject-Protocol.h>

@class DYFunctionStream, NSDictionary, NSMutableDictionary, NSString;

@protocol DYResource <NSObject, NSCoding>
+ (NSString *)keyForResourceWithID:(unsigned long long)arg1 type:(unsigned int)arg2 containerID:(unsigned long long)arg3;
@property(readonly, nonatomic) BOOL isStatic;
@property(readonly, nonatomic) NSMutableDictionary *properties;
@property(readonly, copy, nonatomic) NSString *label;
@property(readonly, nonatomic) unsigned long long objectID;
@property(readonly, nonatomic) unsigned long long containerID;
@property(readonly, nonatomic) unsigned int resourceType;
- (id)initUpdateWithType:(unsigned int)arg1 objectID:(unsigned long long)arg2 containerID:(unsigned long long)arg3 changes:(NSDictionary *)arg4;

@optional
- (id)createFullObjectWithFunctionStream:(DYFunctionStream *)arg1 dataResolver:(NSData * (^)(char *))arg2;
- (NSDictionary *)streamDictAtFunctionIndex:(unsigned int)arg1;
- (NSString *)keyWithSharegroupID:(unsigned long long)arg1;
@end

