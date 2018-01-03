//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEKeyDrivenNavigableItem.h>

@class NSString;

@interface IDEGroupNavigableItem : IDEKeyDrivenNavigableItem
{
    NSString *_scmLocalStatus;
    NSString *_scmServerStatus;
}

+ (id)keyPathsForValuesAffecting_group;
+ (id)_createExtraInfoObject;
- (void).cxx_destruct;
- (unsigned long long)indexOfChildItemForIdentifier:(id)arg1;
- (id)identifierForChildItem:(id)arg1;
- (unsigned long long)conflictStateForUpdateOrMerge;
- (id)sourceControlServerStatus;
- (int)sourceControlServerStatusFlag;
- (id)sourceControlLocalStatus;
- (int)sourceControlLocalStatusFlag;
- (void)updateAttributes;
- (void)updateChildRepresentedObjects;
- (id)textColor;
- (id)_group;
- (id)initWithRepresentedObject:(id)arg1;

@end

