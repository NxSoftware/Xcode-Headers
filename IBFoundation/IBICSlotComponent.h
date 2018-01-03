//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IBFoundation/IBBinaryArchiving-Protocol.h>
#import <IBFoundation/IBICDetailAreaPathComponent-Protocol.h>
#import <IBFoundation/NSCoding-Protocol.h>
#import <IBFoundation/NSCopying-Protocol.h>

@class NSString;

@interface IBICSlotComponent : NSObject <NSCopying, NSCoding, IBICDetailAreaPathComponent, IBBinaryArchiving>
{
    unsigned long long _cachedHash;
    BOOL _deprecated;
    NSString *_title;
    NSString *_identifier;
    NSString *_fileNameComponent;
    double _displayOrder;
}

+ (id)valueFromFileName:(id)arg1 inRange:(struct _NSRange *)arg2 returningDefaultValue:(BOOL)arg3;
+ (id)identifierFromFileName:(id)arg1 inRange:(struct _NSRange *)arg2;
+ (id)fallbackContentsJSONKeys;
+ (id)displayName;
+ (id)contentsJSONKey;
+ (void)setComponentID:(long long)arg1;
+ (long long)componentID;
+ (id)unspecifiedValuePlaceholder;
+ (id)componentFilterMatchingIdentifiers:(id)arg1;
+ (id)componentFilterMatching:(id)arg1;
+ (id)unspecifiedValueFilter;
+ (id)allComponentsFilterForSlotClass:(Class)arg1;
@property(readonly) BOOL deprecated; // @synthesize deprecated=_deprecated;
@property(readonly) double displayOrder; // @synthesize displayOrder=_displayOrder;
@property(readonly) NSString *fileNameComponent; // @synthesize fileNameComponent=_fileNameComponent;
@property(readonly) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (void)encodeWithBinaryArchiver:(id)arg1;
- (id)initWithBinaryUnarchiver:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)ibic_generateAttributes:(CDUnknownBlockType)arg1;
- (long long)compareDisplayOrder:(id)arg1;
@property(readonly, copy) NSString *description;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToSlotComponent:(id)arg1;
- (BOOL)isEqualToSlotComponentCounterpartWithKnownEqualClass:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithIdentifier:(id)arg1 fileNameComponent:(id)arg2 title:(id)arg3 displayOrder:(double)arg4 deprecated:(BOOL)arg5;
- (id)initWithIdentifier:(id)arg1 fileNameComponent:(id)arg2 title:(id)arg3 displayOrder:(double)arg4;
@property(readonly) long long componentID;
- (BOOL)isSpecifiedExplicitValue;
- (BOOL)isUnspecifiedValuePlaceholder;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

