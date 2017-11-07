//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <HexFiend/HFRepresenterTextView.h>

@interface HFRepresenterHexTextView : HFRepresenterTextView
{
    unsigned short glyphTable[16];
    unsigned short ligatureTable[256];
    double glyphAdvancement;
    double spaceAdvancement;
}

- (unsigned long long)maximumGlyphCountForByteCount:(unsigned long long)arg1;
- (double)advanceBetweenColumns;
- (double)advancePerByte;
- (void)extractGlyphsForBytes:(const char *)arg1 count:(unsigned long long)arg2 offsetIntoLine:(unsigned long long)arg3 intoArray:(unsigned short *)arg4 advances:(struct CGSize *)arg5 resultingGlyphCount:(unsigned long long *)arg6;
- (id)initWithCoder:(id)arg1;
- (void)setFont:(id)arg1;
- (void)generateGlyphTable;

@end

