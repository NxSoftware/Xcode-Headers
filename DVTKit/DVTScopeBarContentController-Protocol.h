//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <DVTKit/NSObject-Protocol.h>

@class DVTScopeBarController;

@protocol DVTScopeBarContentController <NSObject>
@property(readonly) double preferredViewHeight;

@optional
- (BOOL)shouldCloseOnEscape;
- (void)didPressDismissOnScopeBar:(DVTScopeBarController *)arg1;
- (void)wasAssociatedWithScopeBarController:(DVTScopeBarController *)arg1;
@end

