//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <IDEFoundation/IDEGroup.h>

@class NSString;

@interface IDEGroup (IDEKitGroupSourceControlPropertyAdditions)
+ (id)keyPathsForValuesAffectingNavigableItem_sourceControlServerStatusFlag;
+ (id)keyPathsForValuesAffectingNavigableItem_sourceControlServerStatus;
+ (id)keyPathsForValuesAffectingNavigableItem_sourceControlLocalStatusFlag;
+ (id)keyPathsForValuesAffectingNavigableItem_sourceControlLocalStatus;
@property(readonly) unsigned long long navigableItem_conflictStateForUpdateOrMerge;
- (int)navigableItem_sourceControlServerStatusFlag;
@property(readonly) NSString *navigableItem_sourceControlServerStatus;
- (int)navigableItem_sourceControlLocalStatusFlag;
@property(readonly) NSString *navigableItem_sourceControlLocalStatus;
@end

