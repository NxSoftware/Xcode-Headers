//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IBFoundation/NSCoding-Protocol.h>
#import <IBFoundation/NSCopying-Protocol.h>

@class NSString;

@interface IBICCatalogContentReference : NSObject <NSCoding, NSCopying>
{
    NSString *_name;
    NSString *_type;
    long long _matchingStyle;
}

+ (BOOL)validateJSONRepresentationForArchivist:(id)arg1 forKey:(id)arg2 results:(id)arg3 inDictionary:(id)arg4;
+ (id)catalogContentReferenceFromValidatedJSONRepresentation:(id)arg1;
@property(readonly) long long matchingStyle; // @synthesize matchingStyle=_matchingStyle;
@property(readonly) NSString *type; // @synthesize type=_type;
@property(readonly) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToCatalogContentReference:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)resolveReferenceRestrictedToType:(Class)arg1 usingGenerator:(CDUnknownBlockType)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)serializedJSONRepresentation;
- (id)initWithType:(id)arg1 name:(id)arg2 matchingStyle:(long long)arg3;

@end

