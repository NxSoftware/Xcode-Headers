//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDESpriteKitParticleEditor/SKEditorDocument.h>

#import <IDESpriteKitParticleEditor/GTFActionEditorClientDocument-Protocol.h>
#import <IDESpriteKitParticleEditor/GTFActionLibraryDocumentLocationDelegate-Protocol.h>
#import <IDESpriteKitParticleEditor/GTFActionLibraryUndoDelegate-Protocol.h>
#import <IDESpriteKitParticleEditor/IDEMediaLibraryDelegate-Protocol.h>
#import <IDESpriteKitParticleEditor/SKObjectLibraryProvider-Protocol.h>

@class DVTNotificationToken, DVTObservingToken, GKScene, GTFActionLibrary, IDEMediaResourceVariantContext, NSArray, NSDictionary, NSHashTable, NSMutableArray, NSMutableDictionary, NSString, SKScene, SKSceneNavigableRoot;
@protocol DVTCancellable;

@interface SKSceneDocument : SKEditorDocument <GTFActionLibraryDocumentLocationDelegate, SKObjectLibraryProvider, GTFActionEditorClientDocument, GTFActionLibraryUndoDelegate, IDEMediaLibraryDelegate>
{
    NSHashTable *_activeObservers;
    SKSceneNavigableRoot *_rootNavNode;
    DVTNotificationToken *_undoNotificationToken;
    DVTNotificationToken *_redoNotificationToken;
    double _scrubTime;
    double _lastScrubTime;
    BOOL _physicsSimulationPaused;
    BOOL _navGraphGenerated;
    DVTObservingToken *_documentEditedKVOToken;
    DVTNotificationToken *_didAddTimelineKVOToken;
    DVTNotificationToken *_didRemoveTimelineKVOToken;
    DVTNotificationToken *_didReplaceTimelineKVOToken;
    DVTNotificationToken *_textureUpdateNotificationToken;
    BOOL _needsToWriteActionMetadata;
    NSArray *_dynamicLibraryAssets;
    id <DVTCancellable> _updateDynamicLibraryToken;
    GTFActionLibrary *_actionLibrary;
    SKScene *_layoutScene;
    SKScene *_activeScene;
    GKScene *_gkScene;
    unsigned long long _state;
    double _animatingSpeed;
    NSMutableDictionary *_actionAssignments;
    NSMutableDictionary *_uidToSKNode;
}

+ (id)keyPathsForValuesAffectingIdeTopLevelStructureObjects;
+ (id)nextNodeUID;
@property(retain, nonatomic) NSMutableDictionary *uidToSKNode; // @synthesize uidToSKNode=_uidToSKNode;
@property(retain, nonatomic) NSMutableDictionary *actionAssignments; // @synthesize actionAssignments=_actionAssignments;
@property(nonatomic) double animatingSpeed; // @synthesize animatingSpeed=_animatingSpeed;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(retain, nonatomic) GKScene *gkScene; // @synthesize gkScene=_gkScene;
@property(retain, nonatomic) SKScene *activeScene; // @synthesize activeScene=_activeScene;
@property(retain, nonatomic) SKScene *layoutScene; // @synthesize layoutScene=_layoutScene;
@property(retain, nonatomic) GTFActionLibrary *actionLibrary; // @synthesize actionLibrary=_actionLibrary;
- (void).cxx_destruct;
- (id)entityFromNode:(id)arg1;
@property(readonly, nonatomic) NSMutableArray *dynamicObjectLibraryAssets;
- (void)updateDynanicObjectLibraryAssets;
- (void)renameObject:(id)arg1 newName:(id)arg2;
- (void)moveObject:(id)arg1 toIndex:(long long)arg2;
- (void)removeObject:(id)arg1;
- (void)insertObject:(id)arg1 atIndex:(long long)arg2;
- (void)addObject:(id)arg1;
- (void)_createObjectsCategory;
- (void)modifiedReference:(id)arg1 oldReference:(id)arg2 newReference:(id)arg3;
- (void)modifiedUserData:(id)arg1 onNode:(id)arg2;
- (void)changedTileSetOnTileMap:(id)arg1 oldTileSetName:(id)arg2 newTileSetName:(id)arg3 preChangeTilesArray:(unsigned int *)arg4 postChangeTilesArray:(unsigned int *)arg5;
- (void)changedTileMap:(id)arg1 preChangeTilesArray:(unsigned int *)arg2 postChangeTilesArray:(unsigned int *)arg3 startColumn:(unsigned long long)arg4 startRow:(unsigned long long)arg5 modifiedWidth:(unsigned long long)arg6 modifiedHeight:(unsigned long long)arg7;
- (void)removeComponent:(id)arg1 fromNode:(id)arg2;
- (void)addComponent:(id)arg1 toNode:(id)arg2;
- (void)removeEntityOnNode:(id)arg1;
- (void)setEntity:(id)arg1 onNode:(id)arg2;
- (void)moveChildNode:(id)arg1 toIndex:(unsigned long long)arg2;
- (void)removeNodesFromParent:(id)arg1 convertTransform:(BOOL)arg2;
- (void)removeNodeFromParent:(id)arg1 convertTransform:(BOOL)arg2;
- (void)moveNode:(id)arg1 toParentNode:(id)arg2 convertTransform:(BOOL)arg3;
- (void)addNodes:(id)arg1 toParentNodes:(id)arg2 convertTransform:(BOOL)arg3;
- (void)addNode:(id)arg1 toParentNode:(id)arg2 convertTransform:(BOOL)arg3;
- (void)commitChangeOfObject:(id)arg1 onKeyPath:(id)arg2 oldValue:(id)arg3 withActionName:(id)arg4 dependentKeyPaths:(id)arg5;
- (id)documentLocationForActionTimeline:(id)arg1;
- (id)documentLocationForAction:(id)arg1;
- (id)undoManagerForActionLibrary:(id)arg1;
@property(readonly, nonatomic) long long actionEditorClientDocumentType;
- (void)mediaLibraryController:(id)arg1 populatePasteboard:(id)arg2 withMediaResourceVariantSets:(id)arg3;
- (void)_handleActionEditorChangeNotification:(id)arg1;
- (void)_setupActionEditorNotifications;
- (void)_refreshScene:(id)arg1 forTextureNames:(id)arg2;
- (void)_setupTextureUpdateNotifications;
- (struct NSObject *)navigableItemFromDocumentLocation:(id)arg1;
- (id)navigableItemsFromIndexPaths:(id)arg1;
- (id)navigableItemsFromSKNodes:(id)arg1;
- (id)navigableItemFromSKNode:(id)arg1;
@property(readonly, nonatomic) SKSceneNavigableRoot *rootNavNode;
- (void)_refreshNavigableNodeGraph:(id)arg1;
- (void)_generateNavigableNodeGraph;
- (void)releaseDocumentObserver:(id)arg1;
- (void)registerDocumentObserver:(id)arg1;
@property(readonly, nonatomic) BOOL isLayoutState;
@property(readonly, nonatomic) BOOL isAnimatingState;
@property(nonatomic) BOOL animationPaused;
- (id)_copyLayoutSceneWithAnimations;
- (void)_simulateScenesToScrubTime;
- (void)scrubToTime:(double)arg1;
- (void)_refreshPhysicsBodiesAndEmitterPropertiesFromScene:(id)arg1;
- (void)_updateObserversActiveScene;
@property(readonly, nonatomic) NSArray *availableReferenceParticleNames;
@property(readonly, nonatomic) NSArray *availableReferenceSceneNames;
@property(readonly, nonatomic) NSArray *availableTileSetNames;
- (void)_encodeSKNodeComponentsInGKScene:(id)arg1;
- (void)_decodeSKNodeComponentsInGKScene:(id)arg1 forSKScene:(id)arg2;
- (void)clearActionAssignmentEntryForURL:(id)arg1;
- (void)setActionAssignmentEntry:(id)arg1 forURL:(id)arg2;
- (struct NSDictionary *)_encodeActionAssignments;
- (struct NSDictionary *)_decodeActionAssignments:(struct NSDictionary *)arg1 forScene:(id)arg2;
- (void)_cleanupSceneForWriting:(id)arg1;
- (id)dataOfType:(id)arg1 error:(id *)arg2;
- (id)namedAssets;
- (BOOL)_loadGKSceneFromArchiver:(id)arg1 forScene:(id)arg2 withFileInfo:(id)arg3 outGKScene:(id *)arg4 error:(id *)arg5;
- (BOOL)_loadActionsFromArchiver:(id)arg1 forScene:(id)arg2 withFileInfo:(id)arg3 outActionLibrary:(id *)arg4 outActionAssignments:(struct NSDictionary **)arg5 error:(id *)arg6;
- (BOOL)_loadSceneFromArchiver:(id)arg1 withFileInfo:(id)arg2 outScene:(id *)arg3 error:(id *)arg4;
- (void)generateNavigableNodeGraph;
- (BOOL)readFromURL:(id)arg1 ofType:(id)arg2 error:(id *)arg3;
- (void)resumePhysicsSimulation;
- (void)pausesPhysicsSimulation;
- (id)ideTopLevelStructureObjects;
- (void)assignNewUIDToNode:(id)arg1;
- (id)nodeFromUID:(id)arg1;
- (id)fileDataType;
- (void)editorDocumentWillClose;
- (id)init;
- (void)notifyObserversDidMoveObject:(id)arg1 toIndex:(long long)arg2;
- (void)notifyObserversDidRemoveObject:(id)arg1;
- (void)notifyObserversDidAddObject:(id)arg1 atIndex:(long long)arg2;
- (void)notifyObserversDidMoveChildNode:(id)arg1 toIndex:(unsigned long long)arg2;
- (void)notifyObserversDidMoveNode:(id)arg1 toParentNode:(id)arg2;
- (void)notifyObserversDidRemoveNodesFromParent:(id)arg1;
- (void)notifyObserversWillRemoveNodesFromParent:(id)arg1;
- (void)notifyObserversDidAddNodes:(id)arg1 toParentNodes:(id)arg2;
- (void)notifyObserversDidCommitKey:(id)arg1 withValue:(id)arg2 onNode:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly) IDEMediaResourceVariantContext *variantContextForMediaLibrary;
@property(readonly) NSDictionary *variantForResolvingMediaResources;

@end

