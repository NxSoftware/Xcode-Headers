//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class IDEActivityLogSection, NSButton, NSLayoutConstraint;

@interface IDENavigatorIssueStatusView : NSView
{
    NSButton *_button;
    NSLayoutConstraint *_widthConstraint;
    IDEActivityLogSection *_issueLog;
}

@property(retain, nonatomic) IDEActivityLogSection *issueLog; // @synthesize issueLog=_issueLog;
- (void).cxx_destruct;
- (void)setTarget:(id)arg1 andAction:(SEL)arg2;
- (void)updateStatusViewForIssueLog:(id)arg1;
- (id)init;

@end

