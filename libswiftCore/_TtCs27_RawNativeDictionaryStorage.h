//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <swiftCore/_TtCs24_SwiftNativeNSDictionary.h>

#import <swiftCore/_TtPs17_NSDictionaryCore_-Protocol.h>

@interface _TtCs27_RawNativeDictionaryStorage : _TtCs24_SwiftNativeNSDictionary <_TtPs17_NSDictionaryCore_>
{
    // Error parsing type: , name: capacity
    // Error parsing type: , name: count
    // Error parsing type: , name: initializedEntries
    // Error parsing type: , name: keys
    // Error parsing type: , name: values
}

- (id)init;
- (void)getObjects:(id *)arg1 andKeys:(id *)arg2;
- (id)keyEnumerator;
- (id)objectForKey:(id)arg1;
- (id)initWithObjects:(const id *)arg1 forKeys:(void *)arg2 count:(long long)arg3;
- (long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(long long)arg3;
- (id)copyWithZone:(void *)arg1;
- (id)enumerator;
@property(nonatomic) long long count; // @synthesize count;

@end

