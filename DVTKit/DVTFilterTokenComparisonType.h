//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <DVTKit/DVTFilterTokenType.h>

#import <DVTKit/NSCopying-Protocol.h>
#import <DVTKit/NSSecureCoding-Protocol.h>

@interface DVTFilterTokenComparisonType : DVTFilterTokenType <NSCopying, NSSecureCoding>
{
    BOOL _isExclusion;
}

@property(readonly, nonatomic) BOOL isExclusion; // @synthesize isExclusion=_isExclusion;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithIdentifier:(id)arg1 displayString:(id)arg2 displayImage:(id)arg3 isExclusion:(BOOL)arg4;
- (id)initWithIdentifier:(id)arg1 andDisplayString:(id)arg2 displayImage:(id)arg3;

@end

