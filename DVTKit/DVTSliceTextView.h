//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSTextView.h>

@class DVTTextDocumentLocation, NSArray;

@interface DVTSliceTextView : NSTextView
{
    NSArray *_foundLocations;
    DVTTextDocumentLocation *_currentFoundLocation;
    int _findResultStyle;
}

@property int findResultStyle; // @synthesize findResultStyle=_findResultStyle;
- (void).cxx_destruct;
- (void)drawFoundLocationsInRange:(struct _NSRange)arg1;
- (id)_findResultUnderlineColor;
- (id)_findResultCurrentUnderlineColor;
- (id)_findResultGradient;
- (id)_findResultCurrentGradient;
- (void)setCurrentFoundLocation:(id)arg1;
- (void)setFoundLocations:(id)arg1;
- (void)_loadColorsFromCurrentTheme;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 textContainer:(id)arg2;

@end
