//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEInterfaceBuilderKit/NSCoding-Protocol.h>

@class DVTMutableOrderedSet, IBMutableBijectiveDictionary;
@protocol IBGroupDelegate;

@interface IBGroup : NSObject <NSCoding>
{
    DVTMutableOrderedSet *_objectRecords;
    IBMutableBijectiveDictionary *_identifierToRecordBijectiveDictionary;
    DVTMutableOrderedSet *_objects;
    id <IBGroupDelegate> _delegate;
}

+ (long long)ibMemberType;
@property __weak id <IBGroupDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly) DVTMutableOrderedSet *objects; // @synthesize objects=_objects;
- (void).cxx_destruct;
- (id)ibMemberIDInObjectContainer:(id)arg1;
- (id)objectWithIdentifier:(id)arg1;
- (id)identifierForObject:(id)arg1;
- (void)removeIdentifierForObject:(id)arg1;
- (void)setIdentifier:(id)arg1 forObject:(id)arg2;
- (void)removeObject:(id)arg1;
- (void)moveObject:(id)arg1 toIndex:(long long)arg2;
- (void)insertObject:(id)arg1 atIndex:(long long)arg2;
- (void)addObject:(id)arg1;
- (BOOL)containsObject:(id)arg1;
- (id)description;
- (id)objectRecordForObject:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

