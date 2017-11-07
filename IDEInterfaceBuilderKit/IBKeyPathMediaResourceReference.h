//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <IDEInterfaceBuilderKit/IBMediaResourceReference.h>

@class IBMemberConfiguration, NSNumber, NSString;

@interface IBKeyPathMediaResourceReference : IBMediaResourceReference
{
    IBMemberConfiguration *_memberConfiguration;
    NSString *_keyPath;
    NSNumber *_index;
}

+ (id)referenceToVariantSet:(id)arg1 fromDocumentObject:(id)arg2 originalValue:(id)arg3 keyPath:(id)arg4 memberConfiguration:(id)arg5 index:(id)arg6 transformer:(id)arg7;
- (void).cxx_destruct;
- (BOOL)updateValueFromResourceValueIfNeeded:(id)arg1 inDocument:(id)arg2;
- (BOOL)isArrayBased;
- (id)initWithVariantSet:(id)arg1 documentObject:(id)arg2 originalValue:(id)arg3 keyPath:(id)arg4 memberConfiguration:(id)arg5 index:(id)arg6 transformer:(id)arg7;

@end

