//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTKit/DVTAnnotatingTypesetter.h>

@class IDEPlaygroundLayoutManager;

@interface IDEPlaygroundTypesetter : DVTAnnotatingTypesetter
{
}

- (double)paragraphSpacingAfterGlyphAtIndex:(unsigned long long)arg1 withProposedLineFragmentRect:(struct CGRect)arg2;
- (unsigned long long)_getRemainingNominalParagraphRange:(struct _NSRange *)arg1 andParagraphSeparatorRange:(struct _NSRange *)arg2 charactarIndex:(unsigned long long)arg3 layoutManager:(id)arg4 string:(id)arg5;
- (unsigned long long)actionForControlCharacterAtIndex:(unsigned long long)arg1;
- (void)endParagraph;

// Remaining properties
@property(readonly) IDEPlaygroundLayoutManager *layoutManager; // @dynamic layoutManager;

@end

