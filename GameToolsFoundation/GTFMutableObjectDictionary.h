//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSMutableDictionary.h"

@class NSMapTable;

@interface GTFMutableObjectDictionary : NSMutableDictionary
{
    NSMapTable *_table;
    BOOL _strong;
}

+ (id)dictionaryWithObjects:(id)arg1 forKeys:(id)arg2;
+ (id)dictionaryWithCapacity:(unsigned long long)arg1;
+ (id)dictionary;
+ (id)weakKeyDictionaryWithObjects:(id)arg1 forKeys:(id)arg2;
+ (id)weakKeyDictionaryWithCapacity:(unsigned long long)arg1;
+ (id)weakKeyDictionary;
@property(readonly, nonatomic, getter=isStrong) BOOL strong; // @synthesize strong=_strong;
- (void).cxx_destruct;
- (void)removeObjectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (id)keyEnumerator;
- (id)allKeys;
- (id)objectForKey:(id)arg1;
- (unsigned long long)count;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (Class)classForCoder;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_strongDictionaryMapTableWithCapacity:(unsigned long long)arg1;
- (id)_weakDictionaryMapTableWithCapacity:(unsigned long long)arg1;
- (id)init;
- (id)initWithCapacity:(unsigned long long)arg1;
- (id)initWithObjects:(id)arg1 forKeys:(id)arg2;
- (id)initWeak;
- (id)initWeakTableWithCapacity:(unsigned long long)arg1;
- (id)initWeakTableWithObjects:(id)arg1 forKeys:(id)arg2;

@end

