//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <swiftCore/_TtPs10_NSCopying_-Protocol.h>
#import <swiftCore/_TtPs18_NSFastEnumeration_-Protocol.h>

@protocol _TtPs13_NSEnumerator_;

@protocol _TtPs17_NSDictionaryCore_ <_TtPs10_NSCopying_, _TtPs18_NSFastEnumeration_>
- (long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(long long)arg3;
- (void)getObjects:(id *)arg1 andKeys:(id *)arg2;
- (id)copyWithZone:(void *)arg1;
- (id <_TtPs13_NSEnumerator_>)keyEnumerator;
- (id)objectForKey:(id)arg1;
@property(nonatomic, readonly) long long count;
- (id)initWithObjects:(const id *)arg1 forKeys:(void *)arg2 count:(long long)arg3;
@end

