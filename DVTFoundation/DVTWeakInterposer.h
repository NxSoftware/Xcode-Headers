//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DVTStackBacktrace, NSString;

@interface DVTWeakInterposer : NSObject
{
    unsigned long long _hash;
}

+ (id)assertingWeakInterposerForRepresentedObject:(id)arg1;
+ (id)weakInterposerForRepresentedObject:(id)arg1;
+ (void)_setupWeakInterposerForObject:(id)arg1 withRuntimeWeakReferenceInterposer:(id)arg2 interposerKey:(void *)arg3;
+ (void)_setupWeakInterposerForObject:(id)arg1 withProxyHelperReferenceInterposer:(id)arg2 helperKey:(void *)arg3 interposerKey:(void *)arg4;
@property unsigned long long hash; // @synthesize hash=_hash;
- (BOOL)isEqual:(id)arg1;
- (void)_customSetup;
@property(readonly) DVTStackBacktrace *representedObjectDeallocatedStackBacktrace;
@property(readonly) __weak id representedObject;
@property(readonly) void *representedObjectAddress;
@property(readonly) Class representedObjectClass;
@property(readonly) NSString *assertionMessage;

@end

