//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <GPUDebuggerKit/GPUBufferViewerElementTableCellView.h>

@class GPUBufferViewerDefaults, GPUBufferViewerTableTextField, NSButton, NSImageView;
@protocol GPUBufferViewerResourceValue;

__attribute__((visibility("hidden")))
@interface GPUBufferViewerTextureResourceElementTableCellView : GPUBufferViewerElementTableCellView
{
    GPUBufferViewerDefaults *_defaults;
    NSImageView *_imageView;
    GPUBufferViewerTableTextField *_nameView;
    NSButton *_linkView;
    id <GPUBufferViewerResourceValue> _value;
}

@property(readonly, nonatomic) id <GPUBufferViewerResourceValue> value; // @synthesize value=_value;
- (void).cxx_destruct;
- (void)resizeSubviewsWithOldSize:(struct CGSize)arg1;
- (void)setValue:(id)arg1 forComponent:(unsigned long long)arg2 row:(unsigned long long)arg3;
- (id)initWithTableColumn:(id)arg1;

@end

