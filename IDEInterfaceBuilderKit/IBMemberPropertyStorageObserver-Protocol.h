//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <IDEInterfaceBuilderKit/NSObject-Protocol.h>

@class IBMemberConfiguration, IBMemberPropertyStorage, IBMemberPropertyValue, NSOrderedSet, NSString;

@protocol IBMemberPropertyStorageObserver <NSObject>

@optional
- (void)propertyStorage:(IBMemberPropertyStorage *)arg1 didChangeCandidatesForRelationship:(NSString *)arg2 fromValue:(NSOrderedSet *)arg3 toValue:(NSOrderedSet *)arg4;
- (void)propertyStorage:(IBMemberPropertyStorage *)arg1 willChangeCandidatesForRelationship:(NSString *)arg2 fromValue:(NSOrderedSet *)arg3 toValue:(NSOrderedSet *)arg4;
- (void)propertyStorage:(IBMemberPropertyStorage *)arg1 didChangeValueForProperty:(NSString *)arg2 inConfiguration:(IBMemberConfiguration *)arg3 fromValue:(IBMemberPropertyValue *)arg4 toValue:(IBMemberPropertyValue *)arg5;
- (void)propertyStorage:(IBMemberPropertyStorage *)arg1 willChangeValueForProperty:(NSString *)arg2 inConfiguration:(IBMemberConfiguration *)arg3 fromValue:(IBMemberPropertyValue *)arg4 toValue:(IBMemberPropertyValue *)arg5;
@end

