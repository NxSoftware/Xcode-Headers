//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DVTFoundation/NSCoding-Protocol.h>

@class NSData, NSString;

@interface DVTRegularExpressionMatch : NSObject <NSCoding>
{
    struct _NSRange _searchRange;
    NSString *_candidateString;
    unsigned long long _groupCount;
    struct _NSRange *_ranges;
    NSData *_rangeData;
}

+ (id)_NSErrorForUErrorCode:(int)arg1 withDescription:(id)arg2;
@property(retain) NSData *rangeData; // @synthesize rangeData=_rangeData;
@property struct _NSRange *ranges; // @synthesize ranges=_ranges;
@property unsigned long long groupCount; // @synthesize groupCount=_groupCount;
@property(copy) NSString *candidateString; // @synthesize candidateString=_candidateString;
@property struct _NSRange searchRange; // @synthesize searchRange=_searchRange;
- (void).cxx_destruct;
- (id)description;
- (id)stringByExpandingTemplate:(id)arg1;
- (struct _NSRange)rangeForGroupAtIndex:(unsigned long long)arg1;
- (id)substringForGroupAtIndex:(unsigned long long)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithURegularExpression:(struct URegularExpression *)arg1 candidateString:(id)arg2 searchRange:(struct _NSRange)arg3;

@end

