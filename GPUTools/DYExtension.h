//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSBundle, NSDictionary, NSString;

@interface DYExtension : NSObject
{
    NSString *_slot;
    NSString *_identifier;
    NSBundle *_bundle;
    NSDictionary *_dictionary;
}

@property(readonly, retain, nonatomic) NSBundle *bundle; // @synthesize bundle=_bundle;
@property(readonly, retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, retain, nonatomic) NSString *slot; // @synthesize slot=_slot;
- (id)objectForKey:(id)arg1;
- (id)description;
- (void)dealloc;
- (id)_initWithDictionary:(id)arg1 bundle:(id)arg2;
- (id)init;

@end

