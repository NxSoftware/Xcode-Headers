//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <IDEKit/IDEViewController.h>

@class DVTReplacementView, DVTSourceControlWorkingCopy, NSTabView, _TtC18IDESourceControlUI23TrainyardViewController;

@interface IDESourceControlUI.WorkingCopySubEditorViewController : IDEViewController
{
    // Error parsing type: , name: tabView
    // Error parsing type: , name: detailReplacementView
    // Error parsing type: , name: historyReplacementView
    // Error parsing type: , name: workingCopy
}

+ (id)defaultViewNibName;
- (CDUnknownBlockType).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewDidAppear;
- (void)primitiveInvalidate;
@property(nonatomic, readonly) _TtC18IDESourceControlUI23TrainyardViewController *trainyardViewController;
@property(nonatomic) __weak DVTSourceControlWorkingCopy *workingCopy; // @synthesize workingCopy;
@property(nonatomic) __weak DVTReplacementView *historyReplacementView; // @synthesize historyReplacementView;
@property(nonatomic) __weak DVTReplacementView *detailReplacementView; // @synthesize detailReplacementView;
@property(nonatomic) __weak NSTabView *tabView; // @synthesize tabView;

@end

