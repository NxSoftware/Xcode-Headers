//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <IDESourceControlUI/NSObject-Protocol.h>

@class NSArray, NSStackView;

@protocol NSStackViewDelegate <NSObject>

@optional
- (void)stackView:(NSStackView *)arg1 didReattachViews:(NSArray *)arg2;
- (void)stackView:(NSStackView *)arg1 willDetachViews:(NSArray *)arg2;
@end
