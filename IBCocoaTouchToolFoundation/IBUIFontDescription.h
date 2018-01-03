//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IBCocoaTouchToolFoundation/IBBinaryArchiving-Protocol.h>
#import <IBCocoaTouchToolFoundation/NSCoding-Protocol.h>
#import <IBCocoaTouchToolFoundation/NSCopying-Protocol.h>

@class NSString;

@interface IBUIFontDescription : NSObject <NSCopying, NSCoding, IBBinaryArchiving>
{
    long long _type;
    long long _size;
    long long _weightCategory;
    NSString *_name;
    NSString *_family;
    double _pointSize;
}

- (void).cxx_destruct;
- (void)encodeWithBinaryArchiver:(id)arg1;
- (id)instanceForBinaryArchiver:(id)arg1;
- (id)initWithBinaryUnarchiver:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)_traits;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy) NSString *description;
- (BOOL)isSystemFont;
- (id)displayName;
@property(readonly) NSString *textStyle;
@property(readonly) double pointSize;
@property(readonly) NSString *family;
@property(readonly) NSString *name;
@property(readonly) long long weightCategory;
@property(readonly) long long size;
@property(readonly) long long type;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToFontDescription:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)initWithTextStylePlistRepresentation:(id)arg1;
- (id)initWithName:(id)arg1 family:(id)arg2 andPointSize:(double)arg3;
- (id)initWithName:(id)arg1 family:(id)arg2 andSize:(long long)arg3;
- (id)initWithTextStyle:(id)arg1;
- (id)initWithType:(long long)arg1 pointSize:(double)arg2 andWeightCategory:(long long)arg3;
- (id)initWithType:(long long)arg1 size:(long long)arg2 andWeightCategory:(long long)arg3;
- (id)initWithType:(long long)arg1 size:(long long)arg2 weightCategory:(long long)arg3 name:(id)arg4 family:(id)arg5 pointSize:(double)arg6;
- (id)resolveToFontLocally;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

