//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <IDEProductsUI/NSObject-Protocol.h>

@class DVTReplacementView, NSViewController;

@protocol DVTReplacementViewDelegate <NSObject>

@optional
- (void)replacementView:(DVTReplacementView *)arg1 willDisplayInRect:(struct CGRect)arg2;
- (void)replacementView:(DVTReplacementView *)arg1 willCloseViewController:(NSViewController *)arg2;
- (void)replacementView:(DVTReplacementView *)arg1 didInstallViewController:(NSViewController *)arg2;
- (void)replacementView:(DVTReplacementView *)arg1 willInstallViewController:(NSViewController *)arg2;
@end

