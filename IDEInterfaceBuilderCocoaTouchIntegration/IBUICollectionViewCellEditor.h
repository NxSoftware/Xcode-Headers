//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <IDEInterfaceBuilderCocoaTouchIntegration/IBUIViewEditor.h>

@interface IBUICollectionViewCellEditor : IBUIViewEditor
{
    struct CGRect overlayDrawingRect;
}

+ (Class)ibDropTargetResolverClass;
- (void)setOverlayDrawingRect:(struct CGRect)arg1;
- (struct CGRect)overlayDrawingRect;
- (void)failToAcceptDragInfo:(id)arg1;
- (id)acceptDragInfo:(id)arg1 context:(id)arg2;
- (void)prepareToAcceptDragInfo:(id)arg1;
- (BOOL)shouldAcceptDragIntoContentView:(id)arg1;
- (BOOL)wantsDefaultDragInsertionIndicatorForDragInfo:(id)arg1;
- (void)drawDragAndDropInsertionHints;
- (id)dragInsertionIndicatorPathInView:(id)arg1;
- (id)editedCollectionViewCell;

@end

