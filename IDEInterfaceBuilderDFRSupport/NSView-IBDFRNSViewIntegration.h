//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class IBNSTouchBar, NSArray, NSTouchBar;

@interface NSView (IBDFRNSViewIntegration)
+ (void)ibDFRReplaceNSViewInstanceMethods;
- (id)ibHitTestingView;
- (void)ibDFRSwizzledEncodeWithCoder:(id)arg1;
- (BOOL)ibDFRShouldAcceptChildTouchBarInDocument:(id)arg1;

// Remaining properties
@property(retain) IBNSTouchBar *ibTouchBar; // @dynamic ibTouchBar;
@property(retain) NSArray *ibTouchBarItems; // @dynamic ibTouchBarItems;
@property(retain) NSTouchBar *touchBar;
@end

