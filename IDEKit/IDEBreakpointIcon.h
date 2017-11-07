//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface IDEBreakpointIcon : NSObject
{
    BOOL _includeBottomHighlight;
    BOOL _useDarkerBorderColor;
    struct CGSize _size;
}

+ (id)_createPressedImageFromImage:(id)arg1;
+ (double)tipLengthForBreakpointHeight:(double)arg1;
@property(readonly) struct CGSize size; // @synthesize size=_size;
- (id)_createBreakpointPathsWithFrame:(struct CGRect)arg1 breakpointModified:(BOOL)arg2;
- (id)_createImageUsingStrokeColor:(id)arg1 fillColor:(id)arg2 breakpointModified:(BOOL)arg3;
- (void)_drawModifiedBreakpointIndicatorPath:(id)arg1;
- (void)_drawFullBreakpointPath:(id)arg1 fillColor:(id)arg2 strokeColor:(id)arg3;
- (id)_deactivatedDisabledImage:(BOOL)arg1;
- (id)_deactivatedEnabledImage:(BOOL)arg1;
- (id)_activatedDisabledImage:(BOOL)arg1;
- (id)_activatedEnabledImage:(BOOL)arg1;
- (id)_imageKeyWithPrefix:(id)arg1 breakpointModified:(BOOL)arg2;
- (id)cachedImageForBreakpointsActivated:(BOOL)arg1 breakpointEnabled:(BOOL)arg2 breakpointModified:(BOOL)arg3;
- (void)drawBreakpointAtPoint:(struct CGPoint)arg1 inView:(id)arg2 breakpointsActivated:(BOOL)arg3 breakpointEnabled:(BOOL)arg4 breakpointModified:(BOOL)arg5 pressed:(BOOL)arg6;
- (id)initWithSize:(struct CGSize)arg1 includeBottomHighlight:(BOOL)arg2 useDarkerBorderColor:(BOOL)arg3;
- (id)init;

@end

