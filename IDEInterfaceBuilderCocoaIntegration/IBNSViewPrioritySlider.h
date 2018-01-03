//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSSlider.h>

@protocol IBNSViewPrioritySliderDelegate;

@interface IBNSViewPrioritySlider : NSSlider
{
    id <IBNSViewPrioritySliderDelegate> _delegate;
}

+ (Class)cellClass;
@property __weak id <IBNSViewPrioritySliderDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)cellDidStopTrackingFromLastPoint:(struct CGPoint)arg1 to:(struct CGPoint)arg2 mouseIsUp:(BOOL)arg3;
- (void)cellDidContinueTrackingFromLastPoint:(struct CGPoint)arg1 to:(struct CGPoint)arg2;
- (void)cellDidStartTrackingAt:(struct CGPoint)arg1;

@end

