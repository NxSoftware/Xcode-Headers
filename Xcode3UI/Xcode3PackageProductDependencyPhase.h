//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Xcode3UI/Xcode3BuildPhase.h>

@interface Xcode3PackageProductDependencyPhase : Xcode3BuildPhase
{
}

+ (id)packageProductDependencyBuildPhaseForTarget:(id)arg1;
+ (void)initialize;
- (BOOL)containsItemIdenticalTo:(id)arg1;
- (id)fileTypeForDisplay;
- (BOOL)acceptsItem:(id)arg1 checkFileType:(BOOL)arg2;
- (BOOL)acceptsItem:(id)arg1;
- (id)pbxBuildFiles;
- (id)name;
- (BOOL)canMove;
- (BOOL)canDelete;
- (BOOL)canRename;
- (id)pbxBuildPhase;
- (id)gid;
- (id)initWithRepresentedObject:(id)arg1 target:(id)arg2;

@end

