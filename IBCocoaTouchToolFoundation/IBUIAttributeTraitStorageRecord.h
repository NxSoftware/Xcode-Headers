//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IBCocoaTouchToolFoundation/IBBinaryArchiving-Protocol.h>

@class IBUITraitCollection, NSString;
@protocol IBBinaryArchiving;

@interface IBUIAttributeTraitStorageRecord : NSObject <IBBinaryArchiving>
{
    IBUITraitCollection *_traitCollection;
    NSObject<IBBinaryArchiving> *_value;
}

@property(readonly, copy, nonatomic) NSObject<IBBinaryArchiving> *value; // @synthesize value=_value;
@property(readonly, copy, nonatomic) IBUITraitCollection *traitCollection; // @synthesize traitCollection=_traitCollection;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (id)descriptionWithLocale:(id)arg1 indent:(unsigned long long)arg2;
- (void)encodeWithBinaryArchiver:(id)arg1;
- (id)initWithBinaryUnarchiver:(id)arg1;
- (id)initWithTraitCollection:(id)arg1 value:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

