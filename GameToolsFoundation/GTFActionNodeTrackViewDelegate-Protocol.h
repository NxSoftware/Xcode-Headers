//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GameToolsFoundation/NSObject-Protocol.h>

@class GTFActionModel, GTFActionNodeTrackView, GTFActionView, NSArray, NSData;

@protocol GTFActionNodeTrackViewDelegate <NSObject>
- (void)nodeTrackView:(GTFActionNodeTrackView *)arg1 reverseActions:(NSArray *)arg2;
- (void)nodeTrackView:(GTFActionNodeTrackView *)arg1 duplicateActions:(NSArray *)arg2;
- (void)pasteActionsIntoNodeTrackView:(GTFActionNodeTrackView *)arg1;
- (BOOL)pasteActionsAvailableForNodeTrackView:(GTFActionNodeTrackView *)arg1;
- (void)nodeTrackView:(GTFActionNodeTrackView *)arg1 copyActions:(NSArray *)arg2;
- (void)endCommandForNodeTrackView:(GTFActionNodeTrackView *)arg1;
- (void)beginCommandForNodeTrackView:(GTFActionNodeTrackView *)arg1;
- (void)nodeTrackView:(GTFActionNodeTrackView *)arg1 convertToReference:(NSArray *)arg2;
- (BOOL)shouldCreateReferenceActionWithActions:(NSArray *)arg1;
- (GTFActionModel *)unarchiveActionModel:(NSData *)arg1;
- (void)incrementPreviewStartTime:(double)arg1 startPreview:(BOOL)arg2;
- (void)resetCursorRectsInTrackOverviewForNodeTrackView:(GTFActionNodeTrackView *)arg1;
- (void)redrawTrackOverviewForNodeTrackView:(GTFActionNodeTrackView *)arg1 resetCursorRects:(BOOL)arg2;
- (struct CGRect)getVisibleRect;
- (void)nodeTrackViewUpdateEditorEndTime:(GTFActionNodeTrackView *)arg1;
- (double)nodeTrackViewGetTimelineEndTime:(GTFActionNodeTrackView *)arg1;
- (double)nodeTrackView:(GTFActionNodeTrackView *)arg1 getTrackEndTime:(int)arg2;
- (int)nodeTrackView:(GTFActionNodeTrackView *)arg1 getClosestTrackWithoutInfiniteLoops:(int)arg2;
- (BOOL)nodeTrackView:(GTFActionNodeTrackView *)arg1 isActionInGroup:(GTFActionView *)arg2;
- (int)nodeTrackView:(GTFActionNodeTrackView *)arg1 getBottomTrackForGroup:(int)arg2;
- (int)nodeTrackView:(GTFActionNodeTrackView *)arg1 getTopTrackForGroup:(int)arg2;
- (int)nodeTrackView:(GTFActionNodeTrackView *)arg1 getGroupIndexThatContainsActions:(NSArray *)arg2;
- (BOOL)nodeTrackView:(GTFActionNodeTrackView *)arg1 doesAnyGroupContainAtLeastOneAction:(NSArray *)arg2;
- (int)nodeTrackView:(GTFActionNodeTrackView *)arg1 getGroupIndexForTrack:(int)arg2;
- (NSArray *)nodeTrackView:(GTFActionNodeTrackView *)arg1 getActionsForGroup:(int)arg2 inTrack:(int)arg3;
- (NSArray *)nodeTrackView:(GTFActionNodeTrackView *)arg1 getActionsForGroup:(int)arg2;
- (int)nodeTrackView:(GTFActionNodeTrackView *)arg1 getActionCountForGroup:(int)arg2;
- (NSArray *)nodeTrackView:(GTFActionNodeTrackView *)arg1 getTracksForGroup:(int)arg2;
- (void)nodeTrackView:(GTFActionNodeTrackView *)arg1 setIterationTime:(double)arg2 forLoop:(int)arg3;
- (void)nodeTrackView:(GTFActionNodeTrackView *)arg1 setDuration:(double)arg2 forGroup:(int)arg3;
- (void)nodeTrackView:(GTFActionNodeTrackView *)arg1 offsetStartTime:(double)arg2 forGroup:(int)arg3;
- (void)nodeTrackView:(GTFActionNodeTrackView *)arg1 setStartTime:(double)arg2 forGroup:(int)arg3;
- (double)nodeTrackView:(GTFActionNodeTrackView *)arg1 getDurationForGroup:(int)arg2;
- (double)nodeTrackView:(GTFActionNodeTrackView *)arg1 getStartTimeForGroup:(int)arg2;
- (double)nodeTrackView:(GTFActionNodeTrackView *)arg1 getIterationTimeForLoop:(int)arg2;
- (void)nodeTrackView:(GTFActionNodeTrackView *)arg1 setLoopCount:(int)arg2 forLoop:(int)arg3;
- (int)nodeTrackView:(GTFActionNodeTrackView *)arg1 getLoopCountForGroup:(int)arg2;
- (int)nodeTrackViewGetNumGroups:(GTFActionNodeTrackView *)arg1;
- (void)nodeTrackView:(GTFActionNodeTrackView *)arg1 didDoubleClickAction:(GTFActionView *)arg2;
- (void)nodeTrackView:(GTFActionNodeTrackView *)arg1 performedIdleSelectOnAction:(GTFActionView *)arg2;
- (BOOL)nodeTrackView:(GTFActionNodeTrackView *)arg1 verifyCanMoveActions:(NSArray *)arg2 byTrackOffset:(int)arg3 ignoreEachOther:(BOOL)arg4;
- (void)nodeTrackView:(GTFActionNodeTrackView *)arg1 destroyGroup:(int)arg2;
- (BOOL)nodeTrackView:(GTFActionNodeTrackView *)arg1 createGroupReferenceForActions:(NSArray *)arg2;
- (void)nodeTrackView:(GTFActionNodeTrackView *)arg1 showPopoverForLoop:(int)arg2 relativeToRect:(struct CGRect)arg3;
- (int)nodeTrackView:(GTFActionNodeTrackView *)arg1 createLoopForActions:(NSArray *)arg2 withLoopCount:(int)arg3;
- (void)nodeTrackView:(GTFActionNodeTrackView *)arg1 setSelectedActionsFromViews:(NSArray *)arg2;
- (void)nodeTrackView:(GTFActionNodeTrackView *)arg1 getSmallestTimeMarginForGroup:(int)arg2 outLeftMargin:(double *)arg3 outRightMargin:(double *)arg4;
- (void)nodeTrackView:(GTFActionNodeTrackView *)arg1 getSmallestTimeMarginForActions:(NSArray *)arg2 ignoreEachOther:(BOOL)arg3 outLeftMargin:(double *)arg4 outRightMargin:(double *)arg5;
- (void)nodeTrackView:(GTFActionNodeTrackView *)arg1 updateActionWidth:(GTFActionView *)arg2 enableSnapping:(BOOL)arg3;
- (void)nodeTrackView:(GTFActionNodeTrackView *)arg1 updateActionWidth:(GTFActionView *)arg2;
- (void)nodeTrackView:(GTFActionNodeTrackView *)arg1 noteActionStartTimesAndDurationsForTrack:(int)arg2;
- (void)nodeTrackView:(GTFActionNodeTrackView *)arg1 offsetTrack:(int)arg2 forActions:(NSArray *)arg3;
- (void)nodeTrackView:(GTFActionNodeTrackView *)arg1 offsetTime:(double)arg2 forActions:(NSArray *)arg3;
- (void)nodeTrackView:(GTFActionNodeTrackView *)arg1 updateActionPosition:(GTFActionView *)arg2 enableSnapping:(BOOL)arg3;
- (void)nodeTrackView:(GTFActionNodeTrackView *)arg1 updateActionPosition:(GTFActionView *)arg2;
- (BOOL)nodeTrackViewIsLastInOverview:(GTFActionNodeTrackView *)arg1;
- (BOOL)nodeTrackViewIsPreviousTrackExpanded:(GTFActionNodeTrackView *)arg1;
- (void)nodeTrackViewDidChangeTrackCount:(GTFActionNodeTrackView *)arg1;
- (void)nodeTrackView:(GTFActionNodeTrackView *)arg1 finishedMovingActionView:(GTFActionView *)arg2;
- (void)nodeTrackView:(GTFActionNodeTrackView *)arg1 actionViewRemoved:(GTFActionView *)arg2;
- (void)nodeTrackView:(GTFActionNodeTrackView *)arg1 actionViewAdded:(GTFActionView *)arg2 withModel:(GTFActionModel *)arg3;
@end

