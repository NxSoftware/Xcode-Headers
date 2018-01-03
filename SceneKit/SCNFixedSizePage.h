//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableIndexSet;
@protocol MTLBuffer;

__attribute__((visibility("hidden")))
@interface SCNFixedSizePage : NSObject
{
    id <MTLBuffer> _buffer;
    unsigned long long _elementSize;
    NSMutableIndexSet *_freeIndices;
}

@property(readonly, nonatomic) id <MTLBuffer> buffer; // @synthesize buffer=_buffer;
- (id)newSubBuffer;
- (void)deallocateElementAtOffset:(unsigned long long)arg1;
- (unsigned long long)_allocateElement;
- (BOOL)hasFreeElementsLeft;
- (BOOL)isFull;
- (void)dealloc;
- (id)initWithBuffer:(id)arg1 elementSize:(unsigned long long)arg2;

@end

