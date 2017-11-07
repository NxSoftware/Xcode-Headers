//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <DVTKit/DVTTextVisualization.h>

@class NSColor;

@interface DVTTextPageGuideVisualization : DVTTextVisualization
{
    unsigned long long _columnNumber;
    double _pageGuideX;
    NSColor *_verticalLineColor;
    NSColor *_outOfBoundsColor;
}

+ (unsigned long long)defaultDrawOrdering;
@property(nonatomic) unsigned long long columnNumber; // @synthesize columnNumber=_columnNumber;
- (void).cxx_destruct;
- (void)drawUnderTextInRect:(struct CGRect)arg1;
- (void)drawUnderCurrentLineHighlightInRect:(struct CGRect)arg1;
- (void)fontAndColorThemeChanged;
- (void)_updatePageGuideXCoordinate;

@end

