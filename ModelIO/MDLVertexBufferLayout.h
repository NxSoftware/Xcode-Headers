//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ModelIO/NSCopying-Protocol.h>

@interface MDLVertexBufferLayout : NSObject <NSCopying>
{
    unsigned long long _stride;
}

@property(nonatomic) unsigned long long stride; // @synthesize stride=_stride;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithStride:(unsigned long long)arg1;

@end

