//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface SKSoundBuffer : NSObject
{
    unsigned int _bufferId;
    NSString *_path;
    double _duration;
}

+ (id)bufferWithFileNamed:(id)arg1;
- (void).cxx_destruct;
- (void)dealloc;
@property(readonly, nonatomic) double duration;
@property(readonly, nonatomic) unsigned int bufferId;
- (id)description;
- (id)init;

@end

