//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <GPUToolsServices/NSCopying-Protocol.h>

@interface DYInvestigatorDisplayLink : NSObject <NSCopying>
{
    BOOL _running;
    unsigned int _identifier;
    unsigned int _targetFPS;
    unsigned long long _timeStamp;
}

@property(readonly, nonatomic) unsigned long long timeStamp; // @synthesize timeStamp=_timeStamp;
@property(nonatomic) unsigned int targetFPS; // @synthesize targetFPS=_targetFPS;
@property(nonatomic) BOOL running; // @synthesize running=_running;
@property(nonatomic) unsigned int identifier; // @synthesize identifier=_identifier;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(unsigned int)arg1 withRunning:(BOOL)arg2 withTargetFPS:(unsigned int)arg3;
- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;

@end

