//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface DVTCrashLogBacktrace : NSObject
{
    NSString *_name;
    NSArray *_frames;
}

@property(readonly) NSArray *frames; // @synthesize frames=_frames;
@property(readonly) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)initWithName:(id)arg1 frames:(id)arg2;
- (id)init;

@end

