//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface IBDocumentCapabilityManager : NSObject
{
    NSMutableDictionary *_registeredCapabilities;
}

+ (id)sharedManager;
- (void).cxx_destruct;
- (id)capabilityWithNameCreatingIfNecessary:(id)arg1 minToolsVersion:(id)arg2 minSystemVersion:(id)arg3;
- (id)capabilityWithNameCreatingIfNecessary:(id)arg1 minToolsVersion:(id)arg2 minSystemVersion:(id)arg3 requiredIntegratedClassName:(id)arg4 message:(id)arg5;

@end

