//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <IDESpriteKitParticleEditor/NSObject-Protocol.h>

@class NSNotification, NSText;

@protocol NSTextDelegate <NSObject>

@optional
- (void)textDidChange:(NSNotification *)arg1;
- (void)textDidEndEditing:(NSNotification *)arg1;
- (void)textDidBeginEditing:(NSNotification *)arg1;
- (BOOL)textShouldEndEditing:(NSText *)arg1;
- (BOOL)textShouldBeginEditing:(NSText *)arg1;
@end

