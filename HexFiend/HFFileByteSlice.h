//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HexFiend/HFByteSlice.h>

@class HFFileReference;

@interface HFFileByteSlice : HFByteSlice
{
    HFFileReference *fileReference;
    unsigned long long offset;
    unsigned long long length;
}

- (CDStruct_91ee6ea3)sourceRangeForFile:(id)arg1;
- (BOOL)isSourcedFromFile;
- (void)dealloc;
- (id)subsliceWithRange:(CDStruct_91ee6ea3)arg1;
- (void)copyBytes:(char *)arg1 range:(CDStruct_91ee6ea3)arg2;
- (unsigned long long)length;
- (id)initWithFile:(id)arg1 offset:(unsigned long long)arg2 length:(unsigned long long)arg3;
- (id)initWithFile:(id)arg1;

@end

