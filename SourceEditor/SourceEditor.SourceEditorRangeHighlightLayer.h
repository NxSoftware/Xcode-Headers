//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <QuartzCore/CAShapeLayer.h>

@interface SourceEditor.SourceEditorRangeHighlightLayer : CAShapeLayer
{
    // Error parsing type: , name: rangeHighlights
    // Error parsing type: , name: mutablePath
    // Error parsing type: , name: pathCornerRadius
    // Error parsing type: , name: drawsTokenShadow
    // Error parsing type: , name: rightEndSquared
}

+ (id)defaultActionForKey:(id)arg1;
- (CDUnknownBlockType).cxx_destruct;
- (void)addMultilineHighlightPathFrom:(id)arg1 to:(struct CGPath *)arg2 cornerRadius:(double)arg3;
- (void)addSquaredSingleLineHighlightPathFrom:(struct CGRect)arg1 to:(struct CGPath *)arg2 cornerRadius:(double)arg3;
- (void)addSingleLineHighlightPathFrom:(struct CGRect)arg1 to:(struct CGPath *)arg2 cornerRadius:(double)arg3;
- (void)addHighlightPathFrom:(id)arg1 to:(struct CGPath *)arg2;
- (void)resetPaths;
@property(nonatomic) BOOL rightEndSquared; // @synthesize rightEndSquared;
@property(nonatomic) BOOL drawsTokenShadow; // @synthesize drawsTokenShadow;
@property(nonatomic) double pathCornerRadius; // @synthesize pathCornerRadius;
- (id)initWithCoder:(id)arg1;
- (id)initWithLayer:(id)arg1;
- (id)init;

@end
