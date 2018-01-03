//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CIImage, NSString;

__attribute__((visibility("hidden")))
@interface SCNRenderTarget : NSObject
{
    CDStruct_fd8065c6 _description;
    // Error parsing type: , name: _size
    unsigned long long _arrayLength;
    CIImage *_ciImage;
    id _texture;
    NSString *_name;
    long long _referenceCount;
    long long _timeStamp;
}

@property(nonatomic) long long timeStamp; // @synthesize timeStamp=_timeStamp;
@property(nonatomic) long long referenceCount; // @synthesize referenceCount=_referenceCount;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) id texture; // @synthesize texture=_texture;
- (id)ciImage;
- (BOOL)matchesDescription:(CDStruct_fd8065c6 *)arg1 size:(unsigned long long)arg2 arrayLength: /* Error: Ran out of types for this method. */;
@property(readonly, nonatomic) unsigned char renderBufferFormat;
@property(readonly, nonatomic) BOOL viewportDependant;
- (id)description;
- (void)dealloc;
- (id)initWithDescription:(CDStruct_fd8065c6 *)arg1 size:(unsigned long long)arg2 arrayLength: /* Error: Ran out of types for this method. */;

@end

