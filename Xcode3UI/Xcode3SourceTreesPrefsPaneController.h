//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTKit/DVTViewController.h>

#import <Xcode3UI/DVTTableViewDelegate-Protocol.h>

@class DVTBorderedView, DVTGradientImageButton, DVTTableView, IDEControlGroup, NSArray, NSArrayController, NSMutableArray, NSString;

@interface Xcode3SourceTreesPrefsPaneController : DVTViewController <DVTTableViewDelegate>
{
    NSMutableArray *_sourceTreeDescriptors;
    NSArrayController *_sourceTreeDescriptorsController;
    DVTTableView *_tableView;
    DVTBorderedView *_tableBorderedView;
    IDEControlGroup *_controlGroup;
    DVTBorderedView *_controlGroupBorderedView;
    DVTGradientImageButton *_addSourceTreeDescriptorButton;
    DVTGradientImageButton *_removeSourceTreeDescriptorButton;
}

+ (void)initialize;
@property(copy) NSArray *sourceTreeDescriptors; // @synthesize sourceTreeDescriptors=_sourceTreeDescriptors;
- (void).cxx_destruct;
- (void)removeSourceTreeDescriptor:(id)arg1;
- (void)addSourceTreeDescriptor:(id)arg1;
- (BOOL)tableView:(id)arg1 doCommandBySelector:(SEL)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4;
- (void)viewWillUninstall;
- (void)viewDidInstall;
- (void)loadView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

