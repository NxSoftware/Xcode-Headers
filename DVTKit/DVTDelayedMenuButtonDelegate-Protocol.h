//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTKit/NSObject-Protocol.h>

@class DVTDelayedMenuButton, NSMenu, NSMenuItem;

@protocol DVTDelayedMenuButtonDelegate <NSObject>

@optional
- (NSMenu *)updatedMenuForDelayedMenuButton:(DVTDelayedMenuButton *)arg1;
- (NSMenuItem *)delayedMenuButton:(DVTDelayedMenuButton *)arg1 willSetCurrentMenuItem:(NSMenuItem *)arg2;
@end

