//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSAttributedString.h>

@interface NSAttributedString (DVTNSAttributedStringAdditions)
- (id)dvt_attributedStringByAppendingString:(id)arg1 withAttributes:(id)arg2;
- (struct _NSRange)dvt_fullRange;
- (id)dvt_attributedStringByApplyingFallbackAttributes:(id)arg1;
- (struct CGSize)dvt_sizeConstrainedToWidth:(double)arg1;
- (void)dvt_drawInRectByVerticallyCenteringAndTruncating:(struct CGRect)arg1;
- (id)dvt_stringByTruncatingMultilineTextToFitSize:(struct CGSize)arg1;
- (unsigned long long)dvt_nextSubwordFromIndex:(unsigned long long)arg1 forward:(BOOL)arg2;
- (unsigned long long)dvt_nextWordFromIndex:(unsigned long long)arg1 forward:(BOOL)arg2;
@end

