//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <QuartzCore/CALayer.h>

@class CAShapeLayer, NSString, _TtC12SourceEditor18CoverageCountLayer;

@interface SourceEditor.CoverageRangeLayer : CALayer
{
    // Error parsing type: , name: font
    // Error parsing type: , name: fontSize
    // Error parsing type: , name: foregroundColor
    // Error parsing type: , name: representsPartialCoverage
    // Error parsing type: , name: textLayer
    // Error parsing type: , name: decorationLayer
    // Error parsing type: , name: string
    // Error parsing type: , name: shapeLayerEnlargment
}

+ (id)defaultActionForKey:(id)arg1;
- (CDUnknownBlockType).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithLayer:(id)arg1;
- (id)init;
- (void)updateTextLayer;
- (void)updateDecorationLayer;
@property(nonatomic, readonly) const struct CGPath *decorationPath;
@property(nonatomic, readonly) double shapeLayerEnlargment; // @synthesize shapeLayerEnlargment;
@property(nonatomic, copy) NSString *string; // @synthesize string;
@property(nonatomic, retain) CAShapeLayer *decorationLayer; // @synthesize decorationLayer;
@property(nonatomic, retain) _TtC12SourceEditor18CoverageCountLayer *textLayer; // @synthesize textLayer;
@property(nonatomic) BOOL representsPartialCoverage; // @synthesize representsPartialCoverage;
@property(nonatomic, retain) struct CGColor *foregroundColor; // @synthesize foregroundColor;
@property(nonatomic) double fontSize; // @synthesize fontSize;
@property(nonatomic, retain) id font; // @synthesize font;

@end

