//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SceneKit/SCNAction.h>

__attribute__((visibility("hidden")))
@interface SCNActionScale : SCNAction
{
    struct SCNCActionScale *_mycaction;
}

+ (id)scaleTo:(double)arg1 duration:(double)arg2;
+ (id)scaleBy:(double)arg1 duration:(double)arg2;
+ (BOOL)supportsSecureCoding;
- (BOOL)isRelative;
- (id)parameters;
- (id)reversedAction;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

