//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <SymbolicationDT/DVT_VMUAbstractSerializer.h>

@class NSData;

__attribute__((visibility("hidden")))
@interface DVT_VMUSimpleDeserializer : DVT_VMUAbstractSerializer
{
    void *_cache;
    NSData *_data;
}

- (void).cxx_destruct;
- (unsigned int *)_deserializeValues:(unsigned int)arg1;
- (const char *)copyDeserializedNullTerminatedBytes;
- (id)copyDeserializedString;
- (id)copyDeserializedStringWithID:(unsigned int)arg1;
- (void)skipFields:(unsigned int)arg1;
- (unsigned long long)deserialize64;
- (unsigned int)deserialize32;
- (void)dealloc;
- (id)initWithData:(id)arg1;

@end

