//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DVTSourceControlWorkingCopy, IDESourceControlWorkingTree, NSAttributedString, NSMenuItem, NSString;

@interface IDESourceControlWorkingCopyMenuObject : NSObject
{
    DVTSourceControlWorkingCopy *_workingCopy;
    IDESourceControlWorkingTree *_workingTree;
    NSMenuItem *_menuItem;
    NSString *_workingCopyName;
    NSString *_currentBranchName;
    NSAttributedString *_menuItemAttributedTitle;
}

+ (id)titleForWorkingCopyName:(id)arg1 branchName:(id)arg2 dimmingIcons:(BOOL)arg3 warningIcon:(BOOL)arg4 includeIconInTitles:(BOOL)arg5;
+ (id)titleForWorkingCopyName:(id)arg1 branchName:(id)arg2 dimmingIcons:(BOOL)arg3 includeIconInTitles:(BOOL)arg4;
+ (id)_iconAsAttributedStringForImage:(id)arg1;
+ (id)_warningImage;
+ (id)_branchImage;
+ (id)_workingCopyConfigurationImage;
+ (id)_workingCopyImage;
@property(readonly) DVTSourceControlWorkingCopy *workingCopy; // @synthesize workingCopy=_workingCopy;
- (void).cxx_destruct;
- (void)dealloc;
- (void)menuDidClose;
- (void)teardown;
@property(readonly) NSMenuItem *menuItem;
- (void)loadMenuItem;
- (id)initWithWorkingCopy:(id)arg1;

@end

