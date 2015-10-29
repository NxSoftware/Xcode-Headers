//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CALayer, CARenderer, NSDictionary, NSString;

@interface DVTLayerImageExporter : NSObject
{
    CALayer *_layer;
    struct CGRect _bounds;
    NSDictionary *_options;
    struct CGColorSpace *_colorSpace;
    NSString *_format;
    BOOL _flipped;
    CARenderer *_renderer;
    struct _CGLContextObject *_cgl_ctx;
    struct _CGLPixelFormatObject *_pixelFormat;
}

@property(retain, nonatomic) NSDictionary *options; // @synthesize options=_options;
@property(nonatomic) struct CGRect bounds; // @synthesize bounds=_bounds;
@property(retain, nonatomic) CALayer *layer; // @synthesize layer=_layer;
- (void).cxx_destruct;
- (BOOL)exportFromTime:(double)arg1 data:(id)arg2;
- (BOOL)exportFromTime:(double)arg1 URL:(id)arg2;
- (struct CGImage *)copyImageForTime:(double)arg1;
- (id)_makeRendererForContext:(struct _CGLContextObject *)arg1;
- (void)dealloc;
- (id)initWithOptions:(id)arg1;

@end

