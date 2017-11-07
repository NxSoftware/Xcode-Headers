//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhysicsKit/NSCoding-Protocol.h>
#import <PhysicsKit/NSCopying-Protocol.h>

@interface PKRegion : NSObject <NSCopying, NSCoding>
{
    int _shape;
    _Bool _isExclusive;
    // Error parsing type: {vec4="v"}, name: _halfExtent
    struct shared_ptr<PKCPathHolder> _path;
    int _regionOp;
    int _shape2;
    // Error parsing type: {vec4="v"}, name: _halfExtent2
    struct shared_ptr<PKCPathHolder> _path2;
}

+ (id)infiniteRegion;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)containsPoints:(const float *)arg1 locationStride:(long long)arg2 results:(char *)arg3 resultsStride:(long long)arg4 count:(int)arg5;
- (BOOL)containsPoint:(struct CGPoint)arg1;
- (id)regionByIntersectionWithRegion:(id)arg1;
- (id)regionByDifferenceFromRegion:(id)arg1;
- (id)regionByUnionWithRegion:(id)arg1;
- (id)inverseRegion;
- (id)initWithPath:(struct CGPath *)arg1;
- (id)initWithSize:(struct CGSize)arg1;
- (id)initWithRadius:(float)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEmpty;
- (BOOL)isInfinite;
@property(readonly, nonatomic) struct CGPath *path;

@end

