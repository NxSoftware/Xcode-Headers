//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSBezierPath, NSColor, NSShadow;

@interface IDEAnalyzerResultStepDrawable : NSObject
{
    NSBezierPath *_arrowStemPath;
    NSBezierPath *_arrowHeadPath;
    NSColor *_pathColor;
    NSShadow *_shadow;
}

@property(readonly) NSShadow *shadow; // @synthesize shadow=_shadow;
@property(readonly) NSColor *pathColor; // @synthesize pathColor=_pathColor;
@property(readonly) NSBezierPath *arrowHeadPath; // @synthesize arrowHeadPath=_arrowHeadPath;
@property(readonly) NSBezierPath *arrowStemPath; // @synthesize arrowStemPath=_arrowStemPath;
- (void).cxx_destruct;
- (void)drawInRect:(struct CGRect)arg1;
- (id)initWithArrowStemPath:(id)arg1 headPath:(id)arg2 color:(id)arg3 shadow:(id)arg4;

@end

