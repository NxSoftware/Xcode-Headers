//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEInterfaceBuilderKit/IDEMediaResourceVariantVariable-Protocol.h>

@class NSString;

@interface IBICMediaResourceVariantVariable : NSObject <IDEMediaResourceVariantVariable>
{
    Class _slotComponentClass;
}

@property(retain, nonatomic) Class slotComponentClass; // @synthesize slotComponentClass=_slotComponentClass;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (BOOL)isEqualToVariable:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)value:(id)arg1 matches:(id)arg2;
- (id)valueFromFileName:(id)arg1 foundInRange:(struct _NSRange *)arg2;
- (id)displayStringForValue:(id)arg1;
- (id)displayName;
- (id)type;
- (id)initWithSlotComponentClass:(Class)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

