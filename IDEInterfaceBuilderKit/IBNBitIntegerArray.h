//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface IBNBitIntegerArray : NSObject
{
    long long _bitsPerValue;
    long long _count;
    char *_bits;
}

- (long long)integerValueAtIndex:(long long)arg1;
- (void)setIntegerValue:(long long)arg1 atIndex:(long long)arg2;
- (void)dealloc;
- (id)initWithMaxValue:(long long)arg1 andCount:(long long)arg2;
- (id)initWithBitsPerValue:(long long)arg1 andCount:(long long)arg2;

@end

