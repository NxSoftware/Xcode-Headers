//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTKit/DVTTableRowView.h>

@class NSView;

@interface IDEDebugNavigatorStackFrameRowView : DVTTableRowView
{
    BOOL _showsPointerAnnotationView;
    NSView *_pointerAnnotationView;
}

+ (void)registerNibWithOutlineView:(id)arg1 forIdentifier:(id)arg2;
@property(nonatomic) BOOL showsPointerAnnotationView; // @synthesize showsPointerAnnotationView=_showsPointerAnnotationView;
@property(retain) NSView *pointerAnnotationView; // @synthesize pointerAnnotationView=_pointerAnnotationView;
- (void).cxx_destruct;
- (void)_updatepointerAnnotationViewFrame;
- (void)_updateInstructionPointerAnnotation;
- (void)setFrameSize:(struct CGSize)arg1;

@end

