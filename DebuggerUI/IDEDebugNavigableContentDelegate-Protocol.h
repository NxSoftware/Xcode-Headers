//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class DVTOutlineView, DVTTableCellView, DVTTableRowView, IDEDebugNavigator, IDELaunchSession, IDENavigableItem, IDEProcessActionPopUpCell, NSArray, NSDictionary, NSMenu, NSMutableDictionary, NSOutlineView, NSSet, NSString, NSTableCellView, NSView;

@protocol IDEDebugNavigableContentDelegate <NSObject>
@property(readonly) NSString *associatedProcessUUID;
- (NSArray *)representedObjectsToReveal;
- (NSString *)pasteboardStringForRepresentedObject:(id)arg1;
- (BOOL)shouldHandleUserDirectMoveUpOrDown:(BOOL)arg1 forRepresentedObject:(id)arg2 newRow:(long long *)arg3;
- (NSArray *)expandableItemsForProcessItem:(IDENavigableItem *)arg1 tokens:(NSSet *)arg2;
- (NSString *)tokenForExpandedRepresentedObject:(id)arg1;
- (IDELaunchSession *)launchSessionForSelectedRepresentedObject:(id)arg1;
- (void)openSelectedRepresentedObject:(id)arg1 withEventType:(unsigned long long)arg2;
- (BOOL)shouldSelectItemForRepresentedObject:(id)arg1 withPrevious:(id)arg2 next:(id)arg3;
- (void)registerTableCellViewsWithOutlineView:(DVTOutlineView *)arg1;
- (NSTableCellView *)tableCellViewForRepresentedObject:(id)arg1 withOutlineView:(NSOutlineView *)arg2;
- (void)willDisplayCell:(id)arg1 forRepresentedObject:(id)arg2 item:(id)arg3;
- (void)updateForNewFilterString:(NSString *)arg1;
- (NSView *)filterView;
- (void)debugNavigatorViewWillUninstall;
- (void)debugNavigatorViewDidInstall;
- (id)initWithTopNavigableModel:(id <IDEDebugTopNavigableModel>)arg1 debugNavigator:(IDEDebugNavigator *)arg2;

@optional
- (NSDictionary *)tableViewCellPropertyBindingsForCell:(DVTTableCellView *)arg1;
- (BOOL)shouldShowOutlineCellForRepresentedObject:(id)arg1;
- (DVTTableRowView *)tableRowViewForRepresentedObject:(id)arg1 withOutlineView:(NSOutlineView *)arg2;
- (DVTTableCellView *)tableCellViewForTopLevelItem:(id)arg1 withOutlineView:(NSOutlineView *)arg2;
- (IDENavigableItem *)outputSelectionNavItemForSelectedNavItem:(IDENavigableItem *)arg1;
- (void)commitStateToDictionary:(NSMutableDictionary *)arg1;
- (void)revertStateWithDictionary:(NSDictionary *)arg1;
- (void)contextualMenuNeedsUpdate:(NSMenu *)arg1;
- (BOOL)validateUserInterfaceAction:(SEL)arg1 forRepresentedObject:(id)arg2;
- (BOOL)validateUserInterfaceAction:(SEL)arg1;
- (void)didCollapseForItem:(id)arg1;
- (void)didExpandForItem:(id)arg1;
- (void)willExpandForItem:(id)arg1;
- (void)handleUserDirectDeleteRepresentedObject:(id)arg1;
- (BOOL)shouldExpandItemAsResultOfOptionClick:(id)arg1 clickedItem:(id)arg2;
- (double)heightOfRowForRepresentedObject:(id)arg1;
- (NSString *)persistentNameForRepresentedObject:(id)arg1;
- (NSArray *)trayCellsForProcessHeader;
- (void)configureMenuForProcessHeaderActionPopUpCell:(IDEProcessActionPopUpCell *)arg1;
- (id)controllerForQueryingDescendantItem;
@end

