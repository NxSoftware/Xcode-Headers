//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSValueTransformer.h>

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface SCNUID_ConstantTransformer : NSValueTransformer
{
    NSDictionary *constantToString;
}

+ (BOOL)allowsReverseTransformation;
+ (Class)transformedValueClass;
@property(retain, nonatomic) NSDictionary *constantToString; // @synthesize constantToString;
- (void).cxx_destruct;
- (id)reverseTransformedValue:(id)arg1;
- (id)transformedValue:(id)arg1;

@end

