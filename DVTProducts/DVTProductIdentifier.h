//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DVTProducts/DVTServicesJSONSerialization-Protocol.h>
#import <DVTProducts/NSCopying-Protocol.h>

@class DVTProductCategory, NSString;

@interface DVTProductIdentifier : NSObject <DVTServicesJSONSerialization, NSCopying>
{
    NSString *_bundleIdentifier;
    DVTProductCategory *_productCategory;
}

+ (id)objectFromJSONRepresentation:(id)arg1 error:(id *)arg2;
+ (id)productIdentifierOrMalformedProductIdentifierForArchive:(id)arg1;
+ (id)productIdentifierWithBundleIdentifier:(id)arg1 productCategory:(id)arg2;
+ (id)productIdentifierForApplicationDescription:(id)arg1 session:(id)arg2 error:(id *)arg3;
@property(readonly) DVTProductCategory *productCategory; // @synthesize productCategory=_productCategory;
@property(readonly) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
- (void).cxx_destruct;
- (id)JSONRepresentation;
- (id)descriptionForUserDefaultsKeyWithError:(id *)arg1;
- (id)_stringRepresentation;
@property(readonly, copy) NSString *description;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (long long)compare:(id)arg1;
- (id)initWithBundleIdentifier:(id)arg1 productCategory:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

