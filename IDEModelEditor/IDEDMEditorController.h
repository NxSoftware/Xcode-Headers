//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <IDEKit/IDEViewController.h>

#import <IDEModelEditor/DVTStatefulObject-Protocol.h>

@class IDEDMSubViewControllerStateManager, NSString;

@interface IDEDMEditorController : IDEViewController <DVTStatefulObject>
{
    IDEDMSubViewControllerStateManager *_subViewControllerStateManager;
}

- (void).cxx_destruct;
- (void)primitiveInvalidate;
- (BOOL)automaticallyInvalidatesChildViewControllers;
- (void)endEditingForFirstResponder;
- (void)takeFocus;
- (void)setStateToken:(id)arg1;
- (id)allSubViewControllers;
- (id)selection;
- (id)identifier;
- (void)loadView;
- (id)nibBundle;

// Remaining properties
@property(readonly) BOOL canRevertWithEmptyStateDictionary;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

