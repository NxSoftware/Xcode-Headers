//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <HexFiend/HFByteArray.h>

@class NSMutableData;

@interface HFFullMemoryByteArray : HFByteArray
{
    NSMutableData *data;
}

- (void)insertByteSlice:(id)arg1 inRange:(CDStruct_91ee6ea3)arg2;
- (id)byteSlices;
- (id)subarrayWithRange:(CDStruct_91ee6ea3)arg1;
- (void)copyBytes:(char *)arg1 range:(CDStruct_91ee6ea3)arg2;
- (unsigned long long)length;
- (void)dealloc;
- (id)init;

@end

