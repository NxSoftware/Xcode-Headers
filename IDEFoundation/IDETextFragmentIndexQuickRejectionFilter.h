//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEFoundation/NSCoding-Protocol.h>

@interface IDETextFragmentIndexQuickRejectionFilter : NSObject <NSCoding>
{
    struct {
        long long _field1;
        unsigned char _field2[0];
    } *_bits;
}

- (unsigned long long)size;
- (long long)containmentResultForProbe:(id)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithContent:(id)arg1;

@end

