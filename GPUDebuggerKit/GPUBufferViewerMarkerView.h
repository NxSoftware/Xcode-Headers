//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSControl.h"

@class CATextLayer, NSColor;

__attribute__((visibility("hidden")))
@interface GPUBufferViewerMarkerView : NSControl
{
    id <GPUBufferViewerMarker> _marker;
    unsigned long long _level;
    NSColor *_backgroundColor;
    NSColor *_borderColor;
    CATextLayer *_labelLayer;
    double _labelLayerStringWidth;
}

@property(nonatomic) double labelLayerStringWidth; // @synthesize labelLayerStringWidth=_labelLayerStringWidth;
@property(retain, nonatomic) CATextLayer *labelLayer; // @synthesize labelLayer=_labelLayer;
@property(copy, nonatomic) NSColor *borderColor; // @synthesize borderColor=_borderColor;
@property(copy, nonatomic) NSColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(nonatomic) unsigned long long level; // @synthesize level=_level;
@property(retain, nonatomic) id <GPUBufferViewerMarker> marker; // @synthesize marker=_marker;
- (void).cxx_destruct;
- (void)updateLabelWithContentView:(id)arg1 origin:(struct CGPoint)arg2;
- (void)drawRect:(struct CGRect)arg1;
- (void)setFrameSize:(struct CGSize)arg1;
- (void)notifyLabelContainerViewSet:(id)arg1;
- (id)initWithMarker:(id)arg1;

@end

