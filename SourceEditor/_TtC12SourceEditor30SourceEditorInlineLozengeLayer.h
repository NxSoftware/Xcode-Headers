//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SourceEditor/_TtC12SourceEditor24SourceEditorLozengeLayer.h>

@class CALayer, NSArray;

@interface _TtC12SourceEditor30SourceEditorInlineLozengeLayer : _TtC12SourceEditor24SourceEditorLozengeLayer
{
    // Error parsing type: , name: horizontalBarThickness
    // Error parsing type: , name: startFrame
    // Error parsing type: , name: endFrame
    // Error parsing type: , name: interiorFrames
    // Error parsing type: , name: horizontalDrag
    // Error parsing type: , name: previewExpansionLayer
}

- (CDUnknownBlockType).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithLayer:(id)arg1;
- (id)init;
- (const struct CGPath *)createPath;
@property(nonatomic, retain) CALayer *previewExpansionLayer; // @synthesize previewExpansionLayer;
@property(nonatomic) BOOL horizontalDrag; // @synthesize horizontalDrag;
@property(nonatomic, copy) NSArray *interiorFrames; // @synthesize interiorFrames;
@property(nonatomic) struct CGRect endFrame; // @synthesize endFrame;
@property(nonatomic) struct CGRect startFrame; // @synthesize startFrame;
@property(nonatomic) double horizontalBarThickness; // @synthesize horizontalBarThickness;

@end
