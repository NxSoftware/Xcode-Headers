//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEFoundation/IDETimestampedPlaygroundResult.h>

@interface IDEViewToyResult : IDETimestampedPlaygroundResult
{
    double _height;
    double _width;
    double _screenScale;
    struct CGPoint _windowOffset;
}

@property(readonly) double screenScale; // @synthesize screenScale=_screenScale;
@property(readonly) struct CGPoint windowOffset; // @synthesize windowOffset=_windowOffset;
@property(readonly) double width; // @synthesize width=_width;
@property(readonly) double height; // @synthesize height=_height;
- (id)initWithHeight:(double)arg1 width:(double)arg2 windowOffset:(struct CGPoint)arg3 screenScale:(double)arg4 subjectIdentifier:(id)arg5 resultDate:(id)arg6;
- (id)initWithChannelIdentifier:(id)arg1 subjectIdentifier:(id)arg2 resultDate:(id)arg3;
- (id)initWithChannelIdentifier:(id)arg1 subjectIdentifier:(id)arg2;

@end

