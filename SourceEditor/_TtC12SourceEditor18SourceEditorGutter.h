//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSFont, NSView, _TtC12SourceEditor16SourceEditorView, _TtC12SourceEditor35SourceEditorGutterMarginContentView, _TtC12SourceEditor38SourceEditorGutterMarginBackgroundView;

@interface _TtC12SourceEditor18SourceEditorGutter : NSObject
{
    // Error parsing type: , name: sourceEditorView
    // Error parsing type: , name: interactionDelegate
    // Error parsing type: , name: annotationInteractionDelegate
    // Error parsing type: , name: backgroundView
    // Error parsing type: , name: contentView
    // Error parsing type: , name: marginAnchor
    // Error parsing type: , name: marginBackgroundView
    // Error parsing type: , name: marginContentView
}

- (CDUnknownBlockType).cxx_destruct;
- (void)didLayoutInContentView:(id)arg1;
- (void)willLayoutInContentView:(id)arg1;
- (void)removeAllAnnotations;
@property(nonatomic, retain) NSFont *lineNumberFont;
- (void)disableLineNumbers;
- (void)enableLineNumbers;
@property(nonatomic, retain) NSView *marginContentView; // @synthesize marginContentView;
@property(nonatomic, retain) NSView *marginBackgroundView; // @synthesize marginBackgroundView;
@property(nonatomic, readonly) double marginWidth;
@property(nonatomic, readonly) _TtC12SourceEditor35SourceEditorGutterMarginContentView *contentView; // @synthesize contentView;
@property(nonatomic, readonly) _TtC12SourceEditor38SourceEditorGutterMarginBackgroundView *backgroundView; // @synthesize backgroundView;
- (id)init;
@property(nonatomic) __weak _TtC12SourceEditor16SourceEditorView *sourceEditorView; // @synthesize sourceEditorView;

@end
