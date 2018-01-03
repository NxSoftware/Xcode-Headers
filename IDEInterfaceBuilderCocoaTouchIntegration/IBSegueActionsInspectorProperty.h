//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEInspectorProperty.h>

@class IBAutoCompletingComboBoxDataSource, IBButtonComboBox, IBStoryboardDocument, IDEInspectorKeyPath, IDEWorkspaceTabController, NSArray;
@protocol DVTCancellable;

@interface IBSegueActionsInspectorProperty : IDEInspectorProperty
{
    IBButtonComboBox *comboBox;
    IBAutoCompletingComboBoxDataSource *comboBoxDatasource;
    id <DVTCancellable> _windowInstallToken;
    IDEInspectorKeyPath *_valueKeyPath;
    NSArray *_availableSegueActions;
}

@property(copy, nonatomic) NSArray *availableSegueActions; // @synthesize availableSegueActions=_availableSegueActions;
- (void).cxx_destruct;
- (id)findIndicatorContentViewWithContext:(id)arg1;
- (void)awakeFromNib;
- (void)setupRefreshTriggersAndConfigure;
- (void)refresh;
- (void)propertyViewWillUninstallFromWindow;
- (void)propertyViewDidInstallIntoWindow;
- (void)refreshComboBox;
- (void)changeSegueAction:(id)arg1;
- (void)revealActionInEditor:(id)arg1;
- (void)fetchDataFromClassDescriber;
- (double)baseline;
@property(readonly, nonatomic) NSArray *inspectedSegues;
@property(readonly, nonatomic) IBStoryboardDocument *inspectedDocument;
- (id)inspectorController;
@property(readonly, nonatomic) IDEWorkspaceTabController *activeWorkspaceTabController;
- (id)workspaceWindowController;
- (void)primitiveInvalidate;
- (id)initWithPropertyDefinition:(id)arg1 andController:(id)arg2;

@end

