//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface _IDEProvisioningTeamDisambiguationProperty : NSObject
{
    NSString *_key;
    NSString *_emptyValue;
}

+ (id)disambiguationPropertyWithKey:(id)arg1 emptyValue:(id)arg2;
@property(readonly) NSString *emptyValue; // @synthesize emptyValue=_emptyValue;
@property(readonly) NSString *key; // @synthesize key=_key;
- (void).cxx_destruct;
- (id)valueForTeam:(id)arg1;

@end

