//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DBGLLDBProcess;

@interface DBGLLDBAddressSanitizerHelper : NSObject
{
    DBGLLDBProcess *_process;
    BOOL _shadowParametersRetrieved;
    unsigned long long _shadowMemoryScale;
    unsigned long long _shadowMemoryOffset;
    unsigned long long _reportAddress;
    unsigned long long _reportRegionStart;
    unsigned long long _reportRegionSize;
}

- (void).cxx_destruct;
- (BOOL)isMemoryFaultForDataValue:(id)arg1;
- (void)handleExtendedInfo:(id)arg1 forThread:(id)arg2;
- (void)shadowMemoryForAddress:(unsigned long long)arg1 numberOfBytes:(unsigned long long)arg2 handleOnMainQueueWithResultHandler:(CDUnknownBlockType)arg3;
- (id)_expandShadowData:(id)arg1 withStartingAddress:(unsigned long long)arg2;
- (void)_retrieveShadowParametersWithHandler:(CDUnknownBlockType)arg1;
- (id)formatDescriptionForStartingAddress:(unsigned long long)arg1 regionAddress:(unsigned long long)arg2 regionSize:(unsigned long long)arg3 objectName:(id)arg4 objectType:(id)arg5;
- (id)_positionStringWithOffset:(long long)arg1 size:(unsigned long long)arg2;
- (id)_positiveNumberToByteString:(long long)arg1;
- (void)_descriptionForAddress:(unsigned long long)arg1 evaluateWithStackFrame:(id)arg2 handleOnMainQueueWithResultHandler:(CDUnknownBlockType)arg3;
- (void)descriptionForAddress:(unsigned long long)arg1 handleOnMainQueueWithResultHandler:(CDUnknownBlockType)arg2;
- (id)initWithProcess:(id)arg1;
- (id)init;

@end

