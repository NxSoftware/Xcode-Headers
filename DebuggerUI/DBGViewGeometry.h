//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SceneKit/SCNShape.h>

@class DBGSceneNode;

@interface DBGViewGeometry : SCNShape
{
    BOOL _clippingEnabled;
    DBGSceneNode *_sceneNode;
}

@property(nonatomic, getter=isClippingEnabled) BOOL clippingEnabled; // @synthesize clippingEnabled=_clippingEnabled;
@property(nonatomic) __weak DBGSceneNode *sceneNode; // @synthesize sceneNode=_sceneNode;
- (void).cxx_destruct;
- (void)_enableClipping;
- (void)setFirstMaterial:(id)arg1;
- (id)initWithSceneNode:(id)arg1;

@end

