//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEInspectorViewController.h>

@class NSArray, NSMenu;

@interface _TtC18IDESourceControlUI42SourceControlCommitInspectorViewController : IDEInspectorViewController
{
    // Error parsing type: , name: commitInspectorDomainObject
    // Error parsing type: , name: authorMenu
    // Error parsing type: , name: committerMenu
    // Error parsing type: , name: _reachableBranches
    // Error parsing type: , name: reachableBranchesOperation
}

+ (id)keyPathsForValuesAffectingReachableBranches;
- (CDUnknownBlockType).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
@property(nonatomic, readonly) BOOL branchesVisible;
@property(nonatomic, readonly) NSArray *reachableBranches;
@property(nonatomic, copy) NSArray *_reachableBranches; // @synthesize _reachableBranches;
- (BOOL)validateMenuItem:(id)arg1;
- (void)menuNeedsUpdate:(id)arg1;
- (void)copyEmailWithSender:(id)arg1;
- (void)sendEmailWithSender:(id)arg1;
- (void)didSetInspectedObjects:(id)arg1;
@property(nonatomic, retain) NSMenu *committerMenu; // @synthesize committerMenu;
@property(nonatomic, retain) NSMenu *authorMenu; // @synthesize authorMenu;

@end

