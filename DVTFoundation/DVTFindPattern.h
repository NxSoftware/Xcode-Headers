//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DVTFoundation/NSCoding-Protocol.h>
#import <DVTFoundation/NSCopying-Protocol.h>

@class NSString;

@interface DVTFindPattern : NSObject <NSCoding, NSCopying>
{
    NSString *regularExpression;
    NSString *tokenString;
    NSString *displayString;
    NSString *replacementString;
    NSString *uniqueID;
    BOOL allowsBackreferences;
    BOOL isNegation;
    int groupID;
    int captureGroupID;
    int repeatedPatternID;
}

+ (id)displayStringDepictingPatterns:(id)arg1;
+ (id)replacementExpressionFromPatternArray:(id)arg1;
+ (id)regularExpressionFromPatternArray:(id)arg1 escapingStrings:(BOOL)arg2 usingBackreferences:(BOOL)arg3;
+ (id)placeholderFindPattern;
@property(copy) NSString *replacementString; // @synthesize replacementString;
@property int repeatedPatternID; // @synthesize repeatedPatternID;
@property(readonly) NSString *uniqueID; // @synthesize uniqueID;
@property int captureGroupID; // @synthesize captureGroupID;
@property BOOL isNegation; // @synthesize isNegation;
@property BOOL allowsBackreferences; // @synthesize allowsBackreferences;
@property int groupID; // @synthesize groupID;
@property(copy) NSString *tokenString; // @synthesize tokenString;
@property(copy) NSString *regularExpression; // @synthesize regularExpression;
@property(copy) NSString *displayString; // @synthesize displayString;
- (void).cxx_destruct;
- (id)backreferenceExpression;
- (id)replaceExpression;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithPropertyListRepresentation:(id)arg1;
- (id)propertyListRepresentation;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)generateNewUniqueID;
- (void)_setUniqueID:(id)arg1;
- (id)description;
- (BOOL)isEqual:(id)arg1;

@end

