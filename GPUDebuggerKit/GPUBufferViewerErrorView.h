//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSImageView, NSTextField;

__attribute__((visibility("hidden")))
@interface GPUBufferViewerErrorView : NSView
{
    NSImageView *_imageView;
    NSTextField *_textView;
}

@property(retain, nonatomic) NSTextField *textView; // @synthesize textView=_textView;
@property(retain, nonatomic) NSImageView *imageView; // @synthesize imageView=_imageView;
- (void).cxx_destruct;
- (void)resizeSubviewsWithOldSize:(struct CGSize)arg1;
- (void)setBackgroundStyle:(long long)arg1;
- (void)setError:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

