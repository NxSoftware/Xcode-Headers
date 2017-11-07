//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <IBFoundation/IBICSlotComponent.h>

#import <IBFoundation/IBICCoreUISlotComponent-Protocol.h>

@class NSString;

@interface IBICColorSpace : IBICSlotComponent <IBICCoreUISlotComponent>
{
    long long _coreUIValue;
}

+ (id)identifierFromFileName:(id)arg1 inRange:(struct _NSRange *)arg2;
+ (id)sRGBColorSpace;
+ (id)p3ColorSpace;
+ (id)itemWithIdentifier:(id)arg1 fileNameComponent:(id)arg2 title:(id)arg3 coreUIValue:(long long)arg4 displayOrder:(double)arg5;
+ (id)displayName;
+ (id)fallbackContentsJSONKeys;
+ (id)contentsJSONKey;
+ (void)setComponentID:(long long)arg1;
+ (long long)componentID;
+ (id)unspecifiedValuePlaceholder;
@property(readonly, nonatomic) long long coreUIValue; // @synthesize coreUIValue=_coreUIValue;
- (void)encodeWithBinaryArchiver:(id)arg1;
- (id)initWithBinaryUnarchiver:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly, nonatomic) struct CGColorSpace *CGColorSpace;
@property(readonly, nonatomic) int colorModel;
- (BOOL)isEqualToSlotComponentCounterpartWithKnownEqualClass:(id)arg1;
- (id)initWithIdentifier:(id)arg1 fileNameComponent:(id)arg2 title:(id)arg3 coreUIValue:(long long)arg4 displayOrder:(double)arg5;
- (long long)componentID;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

