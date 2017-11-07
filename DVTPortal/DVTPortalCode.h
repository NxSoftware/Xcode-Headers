//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface DVTPortalCode : NSObject
{
    NSString *_identifier;
    long long _code;
}

+ (id)portalCodeWithIdentifier:(id)arg1;
+ (id)_orderedPortalCodeIdentifierToCodeMap;
+ (id)_orderedPortalCodeIdentifierToCodeMap:(id)arg1;
+ (id)successCode;
+ (id)portalCodes;
@property(readonly, nonatomic) long long code; // @synthesize code=_code;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (id)initWithCode:(long long)arg1 identifier:(id)arg2;
- (id)initWithExtension:(id)arg1;

@end

