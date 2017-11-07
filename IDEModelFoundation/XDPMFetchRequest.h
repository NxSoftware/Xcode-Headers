//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEModelFoundation/NSCoding-Protocol.h>

@class NSMutableDictionary, NSString, XDPMEntity, XDPMFetchedProperty;

@interface XDPMFetchRequest : NSObject <NSCoding>
{
    NSString *_name;
    XDPMEntity *_entity;
    NSString *_predicateString;
    XDPMFetchedProperty *_fetchedProperty;
    NSMutableDictionary *_initializationPendingKeys;
}

+ (id)fetchRequestFromPasteboardPlist:(id)arg1 model:(id)arg2;
- (void).cxx_destruct;
- (id)undoManager;
- (void)setFetchBatchSize:(unsigned long long)arg1;
- (unsigned long long)fetchBatchSize;
- (void)setFetchOffset:(unsigned long long)arg1;
- (unsigned long long)fetchOffset;
- (void)setReturnsDistinctResults:(BOOL)arg1;
- (BOOL)returnsDistinctResults;
- (void)setIncludesPendingChanges:(BOOL)arg1;
- (BOOL)includesPendingChanges;
- (void)setReturnsObjectsAsFaults:(BOOL)arg1;
- (BOOL)returnsObjectsAsFaults;
- (void)setIncludesPropertyValues:(BOOL)arg1;
- (BOOL)includesPropertyValues;
- (void)setIncludesSubentities:(BOOL)arg1;
- (BOOL)includesSubentities;
- (void)setResultType:(unsigned long long)arg1;
- (unsigned long long)resultType;
- (void)setFetchLimit:(unsigned long long)arg1;
- (unsigned long long)fetchLimit;
- (void)setFetchedProperty:(id)arg1;
- (id)fetchedProperty;
- (void)setPredicateString:(id)arg1;
- (id)predicateString;
- (void)setEntity:(id)arg1;
- (id)entity;
- (void)setName:(id)arg1;
- (id)name;
- (id)undoTarget;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)addKeysToDictionary:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (void)dealloc;
- (id)initWithName:(id)arg1;

@end

