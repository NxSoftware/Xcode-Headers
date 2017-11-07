//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSView.h>

#import <IDEKit/DVTTableCellViewStatusView-Protocol.h>

@class IDEIssueStatusImageView, NSArray, NSImage, NSProgressIndicator;

@interface IDELogNavigatorStatusView : NSView <DVTTableCellViewStatusView>
{
    IDEIssueStatusImageView *_statusImageView;
    NSProgressIndicator *_progressIndicator;
    BOOL _showStatusView;
    BOOL _showProgressIndicator;
    long long _progressValue;
}

@property(nonatomic) BOOL showProgressIndicator; // @synthesize showProgressIndicator=_showProgressIndicator;
@property(nonatomic) BOOL showStatusView; // @synthesize showStatusView=_showStatusView;
@property(nonatomic) long long progressValue; // @synthesize progressValue=_progressValue;
- (void).cxx_destruct;
- (void)rowSizeStyleDidChange:(long long)arg1;
- (void)_updateSubviewsVisibility;
- (void)setBackgroundStyle:(long long)arg1;
@property(retain, nonatomic) NSArray *statusImages;
@property(retain, nonatomic) NSImage *statusImage;
- (id)init;

@end

