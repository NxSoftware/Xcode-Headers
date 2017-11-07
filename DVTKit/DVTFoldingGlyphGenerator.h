//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSGlyphGenerator.h>

@class DVTFoldingLayoutManager;

@interface DVTFoldingGlyphGenerator : NSGlyphGenerator
{
    DVTFoldingLayoutManager *_layoutManager;
    NSGlyphGenerator *_underlyingGlyphGenerator;
}

@property(readonly) NSGlyphGenerator *underlyingGlyphGenerator; // @synthesize underlyingGlyphGenerator=_underlyingGlyphGenerator;
- (void).cxx_destruct;
- (void)generateGlyphsForGlyphStorage:(id)arg1 desiredNumberOfCharacters:(unsigned long long)arg2 glyphIndex:(unsigned long long *)arg3 characterIndex:(unsigned long long *)arg4;
- (void)_fillFoldedGlyphsForRange:(struct _NSRange)arg1 glyphStorage:(id)arg2 glyphIndex:(unsigned long long *)arg3;
- (id)initWithUnderlyingGlyphGenerator:(id)arg1 layoutManager:(id)arg2;

@end

