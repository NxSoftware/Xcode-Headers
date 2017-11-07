//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Xcode3UI/Xcode3BuildFileGroup.h>

@class NSMapTable, NSString;

@interface Xcode3BuildFileRoleGroup : Xcode3BuildFileGroup
{
    NSString *_role;
    NSMapTable *_primaryAttributeObservers;
    BOOL _hasRole;
}

+ (unsigned long long)assertionBehaviorAfterEndOfEventForSelector:(SEL)arg1;
+ (void)initialize;
@property(copy, nonatomic) NSString *role; // @synthesize role=_role;
- (void).cxx_destruct;
- (BOOL)insertItems:(id)arg1 atIndex:(unsigned long long)arg2;
- (BOOL)canInsertItems:(id)arg1;
- (BOOL)removeItemsAtIndexes:(id)arg1;
- (void)_primaryAttributeChanged:(id)arg1;
- (void)_buildFilesReordered:(id)arg1;
- (void)_buildFileRemoved:(id)arg1;
- (void)_buildFileAdded:(id)arg1;
- (void)_removeBuildFile:(id)arg1 invalidate:(BOOL)arg2;
- (void)_insertBuildFile:(id)arg1;
- (BOOL)_roleMatchesPrimaryAttributeOfBuildFile:(id)arg1;
- (void)initializeGroup;
- (void)_addObserversForBuildFile:(id)arg1;
- (void)primitiveInvalidate;
- (void)setName:(id)arg1;
- (id)name;
- (id)initWithRole:(id)arg1;

@end

