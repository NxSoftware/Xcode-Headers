//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SceneKit/NSCopying-Protocol.h>
#import <SceneKit/NSSecureCoding-Protocol.h>
#import <SceneKit/SCNActionable-Protocol.h>
#import <SceneKit/SCNAnimatable-Protocol.h>
#import <SceneKit/SCNBoundingVolume-Protocol.h>

@class NSArray, NSMutableArray, NSMutableDictionary, NSString, SCNCamera, SCNGeometry, SCNLight, SCNMorpher, SCNNodeComponent, SCNOrderedDictionary, SCNPhysicsBody, SCNPhysicsField, SCNSkinner;
@protocol SCNNodeRendererDelegate;

@interface SCNNode : NSObject <NSCopying, NSSecureCoding, SCNAnimatable, SCNActionable, SCNBoundingVolume>
{
    // Error parsing type: ^{__C3DNode={__C3DEntity={__CFRuntimeBase=QAQ}^v^{__CFString}^{__CFString}^{__CFDictionary}^{__C3DScene}q}^{__C3DNode}^{__C3DNode}^{__C3DNode}i{?=(C3DMatrix4x4=[16f][4]{?=[4]})(?=)}^(C3DMatrix4x4)BfQib1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b3{?={?=SS}I}^{?}^{__C3DGeometry}^{__C3DSkinner}f{?=}}, name: _node
    SCNNode *_parent;
    NSMutableArray *_childNodes;
    SCNNode *_presentationInstance;
    unsigned int _isPresentationInstance:1;
    unsigned int _lightLoaded:1;
    unsigned int _geometryLoaded:1;
    unsigned int _cameraLoaded:1;
    unsigned int _skinnerLoaded:1;
    unsigned int _morpherLoaded:1;
    unsigned int _paused:1;
    unsigned int _pausedByInheritance:1;
    unsigned int _affineUpToDate:1;
    unsigned int _transformUpToDate:1;
    unsigned int _hasPivot:1;
    unsigned int _isJoint:1;
    unsigned int _rotationRepresentation:2;
    unsigned int _movability:1;
    unsigned int _hidden:1;
    unsigned int _castsShadow:1;
    unsigned int _ignoreAnimationWhenCopying_tmp:1;
    unsigned int _focusBehavior:2;
    unsigned int _isFocusableOrHasFocusableChild:1;
    unsigned int _authoringEnvironmentNode:1;
    unsigned int _hasComponentBitmask:11;
    // Error parsing type: {?="columns"[4]}, name: _transform
    // Error parsing type: , name: _position
    // Error parsing type: (?="eulerAngles""axisAngle""quaternion"{?="vector"}), name: _rotation
    // Error parsing type: , name: _scale
    float _opacity;
    unsigned long long _categoryBitMask;
    long long _renderingOrder;
    SCNNodeComponent *_components;
    SCNOrderedDictionary *_actions;
    SCNOrderedDictionary *_animations;
    NSMutableDictionary *_bindings;
    struct SCNVector3 *_fixedBoundingBoxExtrema;
    NSString *_name;
    NSMutableDictionary *_valueForKey;
    id _rendererDelegate;
}

+ (BOOL)supportsSecureCoding;
+ (BOOL)resolveInstanceMethod:(SEL)arg1;
+ (id)keyPathsForValuesAffectingScale;
+ (id)keyPathsForValuesAffectingOrientation;
+ (id)keyPathsForValuesAffectingEulerAngles;
+ (id)keyPathsForValuesAffectingRotation;
+ (id)keyPathsForValuesAffectingTransform;
+ (id)keyPathsForValuesAffectingPosition;
+     // Error parsing type: @24@0:8^{__C3DNode={__C3DEntity={__CFRuntimeBase=QAQ}^v^{__CFString}^{__CFString}^{__CFDictionary}^{__C3DScene}q}^{__C3DNode}^{__C3DNode}^{__C3DNode}i{?=(C3DMatrix4x4=[16f][4]{?=[4]})(?=)}^(C3DMatrix4x4)BfQib1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b3{?={?=SS}I}^{?}^{__C3DGeometry}^{__C3DSkinner}f{?=}}16, name: nodeWithNodeRef:
+ (id)_dumpNodeTree:(id)arg1 tab:(id)arg2;
+ (id)nodeWithGeometry:(id)arg1;
+ (id)node;
+ (id)nodeWithMDLObject:(id)arg1 masterObjects:(id)arg2 sceneNodes:(id)arg3 skinnedMeshes:(id)arg4 options:(id)arg5;
+ (id)nodeWithMDLObject:(id)arg1;
+ (id)nodeWithMDLAsset:(id)arg1;
+ (struct SCNVector3)localFront;
+ (struct SCNVector3)localRight;
+ (struct SCNVector3)localUp;
+     // Error parsing type: 16@0:8, name: simdLocalFront
+     // Error parsing type: 16@0:8, name: simdLocalRight
+     // Error parsing type: 16@0:8, name: simdLocalUp
+ (id)SCNUID_instanciateWithOption:(id)arg1;
+ (id)SCNUID_creationOptions;
+ (Class)SCNUID_classForElementOfArray:(id)arg1;
+ (BOOL)SCNUID_rangeForFloatProperty:(id)arg1 min:(double *)arg2 max:(double *)arg3;
+ (id)SCNUID_additionalProperties;
+ (id)SCNUID_propertyOrdering;
- (void)setAuthoringEnvironmentPresentationNode:(id)arg1;
- (id)authoringEnvironmentPresentationNode;
- (void)setAuthoringEnvironmentCompanionNode:(id)arg1;
- (id)authoringEnvironmentCompanionNode;
- (void)setAuthoringEnvironmentNode:(BOOL)arg1;
- (BOOL)authoringEnvironmentNode;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)_encodeNodePropertiesWithCoder:(id)arg1;
- (void)_didDecodeSCNNode:(id)arg1;
- (void)_customDecodingOfSCNNode:(id)arg1;
- (void)_customEncodingOfSCNNode:(id)arg1 usePresentationInstance:(BOOL)arg2;
- (struct CATransform3D)convertTransform:(struct CATransform3D)arg1 fromNode:(id)arg2;
- (struct CATransform3D)convertTransform:(struct CATransform3D)arg1 toNode:(id)arg2;
- (struct SCNVector3)convertVector:(struct SCNVector3)arg1 fromNode:(id)arg2;
- (struct SCNVector3)convertVector:(struct SCNVector3)arg1 toNode:(id)arg2;
- (struct SCNVector3)convertPosition:(struct SCNVector3)arg1 fromNode:(id)arg2;
- (struct SCNVector3)convertPosition:(struct SCNVector3)arg1 toNode:(id)arg2;
- (void)replaceObjectInParticleSystemsAtIndex:(unsigned long long)arg1 withObject:(id)arg2;
- (void)removeObjectFromParticleSystemsAtIndex:(unsigned long long)arg1;
- (void)insertObject:(id)arg1 inParticleSystemsAtIndex:(unsigned long long)arg2;
- (id)objectInParticleSystemsAtIndex:(unsigned long long)arg1;
- (unsigned long long)countOfParticleSystems;
- (void)removeParticleSystem:(id)arg1;
- (void)removeAllParticleSystems;
- (void)addParticleSystem:(id)arg1;
- (id)particleSystems;
- (void)_removeDeadParticleSystem:(struct __C3DParticleSystem *)arg1;
- (id)_particleSystems;
- (void)setEntity:(id)arg1;
- (id)entity;
@property(retain, nonatomic) SCNPhysicsField *physicsField;
@property(retain, nonatomic) SCNPhysicsBody *physicsBody;
@property(copy) NSArray *constraints;
- (void)removeAllActions;
- (void)removeActionForKey:(id)arg1;
- (void)_removeAction:(id)arg1 forKey:(id)arg2;
- (id)actionForKey:(id)arg1;
@property(readonly, nonatomic) BOOL hasActions;
- (id)actions;
@property(readonly, nonatomic) NSArray *actionKeys;
- (void)runAction:(id)arg1 forKey:(id)arg2;
- (void)runAction:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)runAction:(id)arg1;
- (void)runAction:(id)arg1 forKey:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (BOOL)_isEligibleForFocus;
- (BOOL)_isEffectivelyHidden;
- (BOOL)isFocusInteractionEnabled;
- (BOOL)canBecomeFocused;
@property(nonatomic) long long focusBehavior;
- (void)_updateFocusableCache;
- (void)_setHasFocusableChild;
- (void)_focusableCandidates:(id)arg1;
@property(nonatomic, getter=isPaused) BOOL paused;
- (BOOL)isPausedOrPausedByInheritance;
- (void)_setPausedOrPausedByInheritance:(BOOL)arg1;
- (id)_subdividedCopyWithSubdivisionLevel:(long long)arg1;
- (id)flattenedCopy;
- (id)flattenedClone;
- (id)getBoundingBox;
- (id)getBoundingSphere;
- (BOOL)getFrustum:(struct C3DPlane *)arg1 withViewport: /* Error: Ran out of types for this method. */;
- (BOOL)getBoundingSphereCenter:(struct SCNVector3 *)arg1 radius:(double *)arg2;
- (void)setBoundingBoxMin:(struct SCNVector3 *)arg1 max:(struct SCNVector3 *)arg2;
- (BOOL)getBoundingBoxMin:(struct SCNVector3 *)arg1 max:(struct SCNVector3 *)arg2;
- (void)replaceChildNode:(id)arg1 with:(id)arg2;
- (void)insertChildNode:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)removeAllChilds;
- (unsigned long long)indexOfChildNode:(id)arg1;
- (void)removeFromParentNode;
- (void)replaceObjectInChildNodesAtIndex:(unsigned long long)arg1 withObject:(id)arg2;
- (void)removeObjectFromChildNodesAtIndex:(unsigned long long)arg1;
- (void)__removeObjectFromChildNodesAtIndex:(unsigned long long)arg1;
- (void)insertObject:(id)arg1 inChildNodesAtIndex:(unsigned long long)arg2;
- (void)__insertObject:(id)arg1 inChildNodesAtIndex:(unsigned long long)arg2;
- (void)addChildNode:(id)arg1;
- (BOOL)canAddChildNode:(id)arg1;
- (void)_reSyncModelTree;
- (void)_initChildNodesArray;
- (id)objectInChildNodesAtIndex:(unsigned long long)arg1;
- (unsigned long long)countOfChildNodes;
- (void)_setParent:(id)arg1;
- (void)unbindAnimatablePath:(id)arg1;
- (void)bindAnimatablePath:(id)arg1 toObject:(id)arg2 withKeyPath:(id)arg3 options:(id)arg4;
- (id)_scnBindings;
- (BOOL)isAnimationForKeyPaused:(id)arg1;
- (void)setSpeed:(double)arg1 forAnimationKey:(id)arg2;
- (void)removeAnimationForKey:(id)arg1 fadeOutDuration:(double)arg2;
- (void)removeAnimationForKey:(id)arg1 blendOutDuration:(double)arg2;
- (void)resumeAnimationForKey:(id)arg1;
- (void)pauseAnimationForKey:(id)arg1;
- (void)_pauseAnimation:(BOOL)arg1 forKey:(id)arg2 pausedByNode:(BOOL)arg3;
- (id)animationPlayerForKey:(id)arg1;
- (void)_copyAnimationsFrom:(id)arg1;
- (id)_scnAnimationForKey:(id)arg1;
- (id)animationForKey:(id)arg1;
- (void)_syncObjCAnimations;
@property(readonly) NSArray *animationKeys;
- (void)removeAnimationForKey:(id)arg1;
- (void)removeAllAnimations;
- (void)addAnimation:(id)arg1;
- (void)addAnimation:(id)arg1 forKey:(id)arg2;
- (void)addAnimationPlayer:(id)arg1 forKey:(id)arg2;
- (BOOL)__removeAnimation:(id)arg1 forKey:(id)arg2;
- (struct __C3DAnimationManager *)animationManager;
- (const void *)__CFObject;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (id)valueForUndefinedKey:(id)arg1;
- (id)valueForKeyPath:(id)arg1;
- (void)setValue:(id)arg1 forKeyPath:(id)arg2;
- (id)copyAnimationChannelForKeyPath:(id)arg1 animation:(id)arg2;
- (BOOL)parseSpecialKey:(id)arg1 withPath:(id)arg2 intoDestination:(id *)arg3;
- (void)renderInContext:(void *)arg1;
@property(nonatomic) id <SCNNodeRendererDelegate> rendererDelegate;
@property(readonly, copy) NSString *description;
@property(copy, nonatomic) NSArray *filters;
@property(retain, nonatomic) SCNGeometry *geometry;
@property(retain, nonatomic) SCNCamera *camera;
@property(retain, nonatomic) SCNMorpher *morpher;
@property(retain, nonatomic) SCNSkinner *skinner;
- (void)setGizmo:(BOOL)arg1;
- (BOOL)isGizmo;
- (void)setIsJoint:(BOOL)arg1;
- (BOOL)isJoint;
@property(retain, nonatomic) SCNLight *light;
- (void)_setComponent:(id)arg1 withType:(long long)arg2;
- (id)mutableChildNodes;
@property(readonly, nonatomic) NSArray *childNodes;
@property(readonly, nonatomic) SCNNode *parentNode;
- (BOOL)hidden;
@property(nonatomic) long long renderingOrder;
@property(nonatomic) double opacity;
@property(nonatomic, getter=isHidden) BOOL hidden;
@property(nonatomic) unsigned long long categoryBitMask;
@property(nonatomic) BOOL castsShadow;
- (void)setHittable:(BOOL)arg1;
- (BOOL)isHittable;
@property(nonatomic) long long movabilityHint;
@property(nonatomic) struct CATransform3D pivot;
@property(readonly, nonatomic) struct CATransform3D worldTransform;
- (void)setWorldTransform:(struct CATransform3D)arg1;
@property(nonatomic) struct SCNVector3 worldPosition;
@property(nonatomic) struct CATransform3D transform;
@property(nonatomic) struct SCNVector4 rotation;
@property(nonatomic) struct SCNVector3 scale;
- (void)_setScale: /* Error: Ran out of types for this method. */;
@property(nonatomic) struct SCNVector3 position;
- (void)_setPosition: /* Error: Ran out of types for this method. */;
@property(nonatomic) struct SCNVector3 eulerAngles;
-     // Error parsing type: 16@0:8, name: _euler
@property(nonatomic) struct SCNVector4 orientation;
- (void)_setQuaternion:(CDStruct_183601bc)arg1;
- (void)setQuaternion:(struct SCNVector4)arg1;
- (struct SCNVector4)quaternion;
@property(nonatomic) struct SCNVector4 worldOrientation;
- (CDStruct_183601bc)_quaternion;
- (long long)rotationRepresentation;
- (void)_updateAffine;
- (void)_updateTransform;
- (void)_registerAsObserver;
- (id)hitTestWithSegmentFromPoint:(struct SCNVector3)arg1 toPoint:(struct SCNVector3)arg2 options:(id)arg3;
-     // Error parsing type: ^{__C3DNode={__C3DEntity={__CFRuntimeBase=QAQ}^v^{__CFString}^{__CFString}^{__CFDictionary}^{__C3DScene}q}^{__C3DNode}^{__C3DNode}^{__C3DNode}i{?=(C3DMatrix4x4=[16f][4]{?=[4]})(?=)}^(C3DMatrix4x4)BfQib1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b3{?={?=SS}I}^{?}^{__C3DGeometry}^{__C3DSkinner}f{?=}}16@0:8, name: nodeRef
- (id)__morpher;
- (id)__skinner;
- (id)__geometry;
- (id)__camera;
- (id)__light;
- (void)_assignComponent:(id)arg1 toContainerWithType:(long long)arg2;
- (void)_removeComponentWithType:(long long)arg1;
- (id)_findComponentWithType:(long long)arg1;
- (id)jsChildNodesWithAttribute:(id)arg1;
- (id)childNodeWithName:(id)arg1;
- (id)objectInChildNodesWithAttribute:(id)arg1 firstOnly:(BOOL)arg2;
- (id)childNodesWithAttribute:(Class)arg1 recursively:(BOOL)arg2;
- (void)_childNodesWithAttribute:(Class)arg1 output:(id)arg2 recursively:(BOOL)arg3;
- (void)enumerateNodesUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateHierarchyUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateChildNodesUsingBlock:(CDUnknownBlockType)arg1;
- (BOOL)_enumerateChildNodesUsingBlock:(CDUnknownBlockType)arg1;
- (id)childNodesPassingTest:(CDUnknownBlockType)arg1;
- (id)childNodesPassingTest:(CDUnknownBlockType)arg1 recursively:(BOOL)arg2;
- (BOOL)_childNodesPassingTest:(CDUnknownBlockType)arg1 recursively:(BOOL)arg2 output:(id)arg3;
- (id)objectInChildNodesWithName:(id)arg1;
- (id)childNodeWithName:(id)arg1 recursively:(BOOL)arg2;
- (void)_expandChildArrayIfNeeded;
- (BOOL)_isAReference;
- (id)clone;
- (id)_copyRecursively;
- (id)copy;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)_setAttributes:(id)arg1;
- (id)_dumpTree;
- (void)dump;
- (void)_dump:(id)arg1;
- (id)scene;
- (struct __C3DScene *)sceneRef;
- (id)presentationInstance;
@property(readonly, nonatomic) SCNNode *presentationNode;
- (BOOL)isPresentationInstance;
- (void)_syncObjCModel;
- (id)attributeForKey:(id)arg1;
- (void)setAttribute:(id)arg1 forKey:(id)arg2;
- (void)_syncEntityObjCModel;
- (id)identifier;
- (void)setIdentifier:(id)arg1;
@property(copy, nonatomic) NSString *name;
- (void)dealloc;
-     // Error parsing type: @24@0:8^{__C3DNode={__C3DEntity={__CFRuntimeBase=QAQ}^v^{__CFString}^{__CFString}^{__CFDictionary}^{__C3DScene}q}^{__C3DNode}^{__C3DNode}^{__C3DNode}i{?=(C3DMatrix4x4=[16f][4]{?=[4]})(?=)}^(C3DMatrix4x4)BfQib1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b3{?={?=SS}I}^{?}^{__C3DGeometry}^{__C3DSkinner}f{?=}}16, name: initWithNodeRef:
-     // Error parsing type: @24@0:8^{__C3DNode={__C3DEntity={__CFRuntimeBase=QAQ}^v^{__CFString}^{__CFString}^{__CFDictionary}^{__C3DScene}q}^{__C3DNode}^{__C3DNode}^{__C3DNode}i{?=(C3DMatrix4x4=[16f][4]{?=[4]})(?=)}^(C3DMatrix4x4)BfQib1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b3{?={?=SS}I}^{?}^{__C3DGeometry}^{__C3DSkinner}f{?=}}16, name: initPresentationNodeWithNodeRef:
- (id)init;
- (void)_bakeNodes:(id)arg1 folderPath:(id)arg2 inVertex:(BOOL)arg3 bakeAO:(BOOL)arg4 quality:(float)arg5 attenuation:(float)arg6 geomSetter:(CDUnknownBlockType)arg7 terminateSetter:(CDUnknownBlockType)arg8;
- (void)_addSkinnerWithMDLMesh:(id)arg1 sceneNodes:(id)arg2;
- (id)_associatedMDLObject;
- (void)rotateBy:(struct SCNVector4)arg1 aroundTarget:(struct SCNVector3)arg2;
- (void)localRotateBy:(struct SCNVector4)arg1;
- (void)localTranslateBy:(struct SCNVector3)arg1;
- (void)lookAt:(struct SCNVector3)arg1 up:(struct SCNVector3)arg2 localFront:(struct SCNVector3)arg3;
- (void)lookAt:(struct SCNVector3)arg1;
@property(readonly, nonatomic) struct SCNVector3 worldFront;
@property(readonly, nonatomic) struct SCNVector3 worldRight;
@property(readonly, nonatomic) struct SCNVector3 worldUp;
- (void)simdRotateBy:(CDStruct_183601bc)arg1 aroundTarget: /* Error: Ran out of types for this method. */;
- (void)simdLocalRotateBy:(CDStruct_183601bc)arg1;
- (void)simdLocalTranslateBy: /* Error: Ran out of types for this method. */;
- (void)simdLookAt:up:localFront: /* Error: Ran out of types for this method. */;
- (void)simdLookAt: /* Error: Ran out of types for this method. */;
// Error parsing type for property simdWorldFront:
// Property attributes: T,R,N

// Error parsing type for property simdWorldRight:
// Property attributes: T,R,N

// Error parsing type for property simdWorldUp:
// Property attributes: T,R,N

-     // Error parsing type: {?=[4]}88@0:8{?=[4]}16@80, name: simdConvertTransform:fromNode:
-     // Error parsing type: {?=[4]}88@0:8{?=[4]}16@80, name: simdConvertTransform:toNode:
-     // Error parsing type: 40@0:816@32, name: simdConvertVector:fromNode:
-     // Error parsing type: 40@0:816@32, name: simdConvertVector:toNode:
-     // Error parsing type: 40@0:816@32, name: simdConvertPosition:fromNode:
-     // Error parsing type: 40@0:816@32, name: simdConvertPosition:toNode:
// Error parsing type for property simdWorldTransform:
// Property attributes: T{?=[4]},N

@property(nonatomic) CDStruct_183601bc simdWorldOrientation;
// Error parsing type for property simdWorldPosition:
// Property attributes: T,N

// Error parsing type for property simdScale:
// Property attributes: T,N

// Error parsing type for property simdEulerAngles:
// Property attributes: T,N

@property(nonatomic) CDStruct_183601bc simdOrientation;
// Error parsing type for property simdRotation:
// Property attributes: T,N

// Error parsing type for property simdPosition:
// Property attributes: T,N

// Error parsing type for property simdTransform:
// Property attributes: T{?=[4]},N

// Error parsing type for property simdPivot:
// Property attributes: T{?=[4]},N

-     // Error parsing type: c32@0:8^16^f24, name: simdGetBoundingSphereCenter:radius:
@property(nonatomic) long long authoringCameraType;
- (id)debugQuickLookData;
- (id)debugQuickLookObject;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

