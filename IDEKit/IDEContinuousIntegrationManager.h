//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface IDEContinuousIntegrationManager : NSObject
{
}

+ (id)preferencePaneIdentifier;
+ (id)statusImagesForXCSItem:(id)arg1 renderInWindow:(id)arg2 rowIsDisclosed:(BOOL)arg3;
+ (id)documentLocationForLoadMoreItemWithNavigable:(id)arg1;
+ (void)loadMoreBotsInBotNavigable:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
+ (id)webURLForIntegration:(id)arg1;
+ (id)webURLForBot:(id)arg1;
+ (BOOL)canUserDuplicateBot:(id)arg1;
+ (BOOL)canUserCreateAndDeleteBotsOnServiceForBotOrIntegration:(id)arg1;
+ (void)addServerOnHostWindow:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
+ (void)showBotEditorForWorkspaceTabController:(id)arg1 bot:(id)arg2 errorPresenter:(id)arg3 errorWindow:(id)arg4 editingMode:(long long)arg5 completionBlock:(CDUnknownBlockType)arg6;
+ (void)showBotRedefinitionForWorkspaceTabController:(id)arg1 bot:(id)arg2 errorPresenter:(id)arg3 errorWindow:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;
+ (void)showBotEditorForWorkspaceTabController:(id)arg1 bot:(id)arg2 errorPresenter:(id)arg3 errorWindow:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;
+ (id)createEditBotAlertWithError:(id)arg1 validationErrors:(id)arg2;
+ (void)redefineBot:(id)arg1 workspaceTabController:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
+ (void)showNewBotEditorForWorkspaceTabController:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
+ (BOOL)verifySCMEnabled:(id *)arg1;
+ (void)deleteIntegration:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
+ (void)cancelIntegration:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
+ (id)actionManager;
+ (id)serviceManager;
+ (void)compoundStatusForIntegrationOrBot:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
+ (long long)statusOfIntegration:(id)arg1;
+ (BOOL)isIntegrationFinished:(id)arg1;
+ (id)logNavigatorHelper;
+ (void)performAction:(SEL)arg1 forNavigableItemSelection:(id)arg2 withNavigator:(id)arg3;
+ (id)titleForNavigableItemSelection:(id)arg1 action:(SEL)arg2;
+ (BOOL)navigableItemSelection:(id)arg1 allowsAction:(SEL)arg2;
+ (id)navigableItemForIntegration:(id)arg1;
+ (id)navigableItemForBot:(id)arg1;
+ (id)navigableItemForService:(id)arg1;
+ (id)projectNameInBlueprintForBot:(id)arg1;
+ (id)botIdentifierForIntegrationNavigableItem:(id)arg1;
+ (Class)loadMoreItemClass;
+ (Class)serviceNavigableItemClass;
+ (Class)integrationNavigableItemClass;
+ (Class)botNavigableItemClass;
+ (id)xcsLocalServiceProtocol;
+ (id)xcsLocalObjectProtocol;
+ (Class)serviceClass;

@end

