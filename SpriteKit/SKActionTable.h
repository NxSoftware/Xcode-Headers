//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSDictionary, NSMutableDictionary;

@interface SKActionTable : NSObject <NSCoding>
{
    NSDictionary *_actionTableDictionary;
    NSMutableDictionary *__info;
}

+ (id)actionTableWithContentsOfDictionary:(id)arg1;
@property(retain, nonatomic) NSMutableDictionary *_info; // @synthesize _info=__info;
@property(readonly, retain, nonatomic) NSDictionary *actionTableDictionary; // @synthesize actionTableDictionary=_actionTableDictionary;
- (void).cxx_destruct;
- (id)actionForName:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithContentsOfDictionary:(id)arg1;

@end

