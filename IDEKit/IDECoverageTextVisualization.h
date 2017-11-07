//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <DVTKit/DVTTextVisualization.h>

@class IDESchemeActionCodeCoverageFile, NSArray;

@interface IDECoverageTextVisualization : DVTTextVisualization
{
    NSArray *_processedUncoveredRanges;
    NSArray *_processedCoveredRanges;
    IDESchemeActionCodeCoverageFile *_coverageFile;
    unsigned long long _showFlagsForLine;
    id _textViewSelectionChangedObserver;
}

+ (unsigned long long)defaultDrawOrdering;
+ (id)coveredSegmentColor;
+ (id)uncoveredSegmentColor;
+ (id)colorFromUserDefaults:(id)arg1;
@property(retain, nonatomic) id textViewSelectionChangedObserver; // @synthesize textViewSelectionChangedObserver=_textViewSelectionChangedObserver;
@property(nonatomic) unsigned long long showFlagsForLine; // @synthesize showFlagsForLine=_showFlagsForLine;
@property(retain, nonatomic) IDESchemeActionCodeCoverageFile *coverageFile; // @synthesize coverageFile=_coverageFile;
@property(retain, nonatomic) NSArray *processedCoveredRanges; // @synthesize processedCoveredRanges=_processedCoveredRanges;
@property(retain, nonatomic) NSArray *processedUncoveredRanges; // @synthesize processedUncoveredRanges=_processedUncoveredRanges;
- (void).cxx_destruct;
- (void)drawUnderTextInRect:(struct CGRect)arg1;
- (void)findCoverageRangesInDocumentLocation:(id)arg1;
- (void)highlightLocation:(id)arg1;
- (void)tearDown;
- (void)unhighlight;
- (void)dealloc;
- (id)initWithCoverageFile:(id)arg1;

@end

