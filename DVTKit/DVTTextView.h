//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSTextView.h>

@interface DVTTextView : NSTextView
{
    BOOL _settingMinSizeForClipView;
    BOOL _minWidthTracksClipView;
    BOOL _minHeightTracksClipView;
}

@property BOOL minHeightTracksClipView; // @synthesize minHeightTracksClipView=_minHeightTracksClipView;
@property BOOL minWidthTracksClipView; // @synthesize minWidthTracksClipView=_minWidthTracksClipView;
- (void)setMinSize:(struct CGSize)arg1;
- (void)_superviewClipViewFrameChanged:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 textContainer:(id)arg2;

@end

