//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IBFoundation/IBICSlotMask.h>

@class NSDictionary;

@interface IBICConcreteSlotMask : IBICSlotMask
{
    NSDictionary *_identifiersBySlotComponentClass;
}

- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqualToSlotMaskWithIdenticalClass:(id)arg1;
- (id)descriptionWithIndent:(long long)arg1;
- (BOOL)matchesSlot:(id)arg1;
- (void)encodeWithBinaryArchiver:(id)arg1;
- (id)initWithBinaryUnarchiver:(id)arg1;
- (id)initWithComponentIdentifiersByComponentClass:(id)arg1;

@end

