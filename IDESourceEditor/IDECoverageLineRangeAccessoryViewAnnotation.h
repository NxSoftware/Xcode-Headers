//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <DVTKit/DVTAccessoryViewAnnotation.h>

@class IDECoverageAnnotationLineCoverageRange, IDECoverageAnnotationManager, IDECoverageTextVisualization, NSIndexSet, NSTimer;

@interface IDECoverageLineRangeAccessoryViewAnnotation : DVTAccessoryViewAnnotation
{
    id _textViewSelectionChangedObserver;
    NSTimer *_hoverTimer;
    BOOL _isSelected;
    NSIndexSet *_lineIndexes;
    unsigned long long _executionCount;
    IDECoverageTextVisualization *_textVisualization;
    IDECoverageAnnotationManager *_manager;
    IDECoverageAnnotationLineCoverageRange *_coverageRange;
}

+ (id)lineNumberFont;
@property(nonatomic) BOOL isSelected; // @synthesize isSelected=_isSelected;
@property(retain, nonatomic) IDECoverageAnnotationLineCoverageRange *coverageRange; // @synthesize coverageRange=_coverageRange;
@property(nonatomic) __weak IDECoverageAnnotationManager *manager; // @synthesize manager=_manager;
@property(retain, nonatomic) IDECoverageTextVisualization *textVisualization; // @synthesize textVisualization=_textVisualization;
@property(nonatomic) unsigned long long executionCount; // @synthesize executionCount=_executionCount;
@property(retain, nonatomic) NSIndexSet *lineIndexes; // @synthesize lineIndexes=_lineIndexes;
- (void).cxx_destruct;
- (void)select:(BOOL)arg1;
- (id)view;
- (void)dealloc;
- (id)initWithViewControllerClass:(Class)arg1 documentLocation:(id)arg2 executionCount:(unsigned long long)arg3 textVisualization:(id)arg4 manager:(id)arg5 coverageRange:(id)arg6;

@end

