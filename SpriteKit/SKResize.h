//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SpriteKit/SKAction.h>

__attribute__((visibility("hidden")))
@interface SKResize : SKAction
{
    struct SKCResize *_mycaction;
}

+ (id)resizeByWidth:(double)arg1 height:(double)arg2 duration:(double)arg3;
+ (id)resizeToHeight:(double)arg1 duration:(double)arg2;
+ (id)resizeToWidth:(double)arg1 height:(double)arg2 duration:(double)arg3;
+ (id)resizeToWidth:(double)arg1 duration:(double)arg2;
- (id)reversedAction;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

