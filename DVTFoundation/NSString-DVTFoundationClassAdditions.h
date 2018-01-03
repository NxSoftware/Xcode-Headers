//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSString.h>

@interface NSString (DVTFoundationClassAdditions)
+ (id)dvt_stringWithListComponentsJoinedByCommasAndOr:(id)arg1;
+ (id)dvt_stringWithListComponentsJoinedByCommasAndAnd:(id)arg1;
+ (id)dvt_stringWithUniqueFileNameSuffixForDistinguishingStrings:(id)arg1;
+ (BOOL)dvt_isFileUTF8WithBOM:(id)arg1 fileData:(id)arg2;
+ (BOOL)dvt_isFileUnicode:(id)arg1 fileData:(id)arg2;
+ (id)dvt_stringWithUnsignedLong:(unsigned long long)arg1 base:(unsigned long long)arg2;
+ (id)dvt_UUIDString;
+ (id)dvt_localizedNameOfLineEnding:(unsigned long long)arg1;
+ (id)dvt_stringWithFileSystemRepresentation:(const char *)arg1 length:(unsigned long long)arg2;
+ (id)dvt_stringWithFileSystemRepresentation:(const char *)arg1;
- (BOOL)dvt_isComposedEntirelyOfCharactersFromSet:(id)arg1;
- (BOOL)dvt_isRange:(struct _NSRange)arg1 composedEntirelyOfCharactersFromSet:(id)arg2;
- (struct _NSRange)dvt_interiorRangeAfterTrimmingCharactesFromSet:(id)arg1 preservingRange:(struct _NSRange)arg2;
- (struct _NSRange)dvt_interiorRangeAfterTrimmingCharactesFromSet:(id)arg1;
- (id)dvt_stringByReplacingCharactersFromSet:(id)arg1 withString:(id)arg2;
- (id)dvt_stringByReplacingCharactersFromSet:(id)arg1 inRange:(struct _NSRange)arg2 withString:(id)arg3;
- (struct _NSRange)dvt_fullRange;
- (void)dvt_invokeWithAccessToCharacters:(CDUnknownBlockType)arg1;
- (void)dvt_invokeWithAccessToUTF8Bytes:(CDUnknownBlockType)arg1;
- (BOOL)dvt_canBeEncodedWithEncoding:(unsigned long long)arg1;
- (BOOL)dvt_range:(struct _NSRange)arg1 isEqualToString:(id)arg2;
- (BOOL)dvt_hasCaseInsensitivePrefix:(id)arg1;
- (id)dvt_arrayByParsingAsStringList;
- (void)dvt_enumerateWhitespaceSeparatedSubstringsInRange:(struct _NSRange)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)dvt_enumerateOccurrencesOfSubstring:(id)arg1 options:(unsigned long long)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (id)dvt_md5Hash;
- (id)dvt_stringByRepeating:(unsigned long long)arg1;
- (id)dvt_componentsSeparatedByUnquotedWhitespacePreservingQuotes:(BOOL)arg1;
- (id)dvt_stringByMakingAbsolutePathWithBasePath:(id)arg1;
- (id)dvt_stringByMakingPathRelativeToBasePath:(id)arg1;
- (id)dvt_stringByStrippingExtraZeroesAfterDecimalPlace;
- (id)dvt_capitalizedWordsFromString;
- (id)dvt_wordsFromString;
- (id)dvt_wordsFromStringWithLetterCasing:(unsigned long long)arg1;
- (id)dvt_stringByManglingToLegalC99ExtendedIdentifier;
- (id)dvt_stringByManglingToLegalCIdentifier;
- (id)dvt_stringByManglingToLegalRFC1034Identifier;
- (id)dvt_stringByManglingToLegalBundleIdentifier;
- (id)dvt_stringByManglingToLegalIdentifierOfType:(int)arg1;
- (long long)dvt_versionNumberComparison:(id)arg1;
- (id)dvt_dataForHexString;
- (BOOL)dvt_isLegalCIdentifier;
- (BOOL)dvt_isNonEmpty;
- (BOOL)dvt_isEmpty;
- (id)dvt_stringByEscapingForXML;
- (id)dvt_stringByDecodingXMLEntities;
- (id)dvt_stringByRemovingCStringEscapeSequences;
- (id)dvt_stringByQuotingOnlyIfNeeded:(BOOL)arg1 quoteTabsAndEOLs:(BOOL)arg2 quoteHighBitUnichars:(BOOL)arg3;
- (id)dvt_stringByQuotingIfNeeded;
- (id)dvt_stringByTranslatingSmartQuotesToReal;
- (unsigned long long)dvt_numberOfLines;
- (struct _NSRange)dvt_lineIndexRangeForCharacterRange:(struct _NSRange)arg1;
- (struct _NSRange)dvt_characterRangeForLineRange:(struct _NSRange)arg1;
- (id)dvt_UUIDStringWithHyphens;
- (unsigned long long)dvt_adlerHashWithRange:(struct _NSRange)arg1;
- (id)dvt_stringByStandardizingWithLineEnding:(unsigned long long)arg1;
- (id)dvt_stringByLowercasingFirstCharacter;
- (id)dvt_stringByCapitalizingFirstCharacter;
- (id)dvt_lastKeyPathComponent;
- (id)dvt_firstKeyPathComponent;
- (id)dvt_stringByReplacingWhitespaceRunsWithCharacter:(unsigned short)arg1 range:(struct _NSRange)arg2;
- (id)dvt_stringByAppendingSuffixIfMissing:(id)arg1;
- (id)dvt_stringByRemovingSuffix:(id)arg1;
- (id)dvt_stringByRemovingPrefix:(id)arg1;
- (BOOL)dvt_getFileSystemRepresentation:(char *)arg1 maxLength:(unsigned long long)arg2;
@end

