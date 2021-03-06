//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <DVTKit/DVTLibraryDetailController.h>

@class NSButton, NSSound, NSString, NSTimer, NSView;

@interface DVTAudioLibraryDetailController : DVTLibraryDetailController
{
    NSButton *_playButton;
    NSView *_contentView;
    NSString *_durationString;
    NSTimer *_playbackTimer;
    NSSound *_audio;
}

@property(copy) NSString *durationString; // @synthesize durationString=_durationString;
- (void).cxx_destruct;
- (void)viewWillUninstall;
- (void)toggleAudioPlayback:(id)arg1;
- (void)sizeToFitSuggestedSize:(struct CGSize)arg1 forAsset:(id)arg2;
- (void)refreshWithAsset:(id)arg1 representedObject:(id)arg2;
- (void)reflectPlaybackState;
- (id)durationStringForDuration:(double)arg1;

@end

