//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <IDESpriteKitParticleEditor/SKDocumentOperation.h>

@class NSArray;

@interface SKSceneAddNodesOperation : SKDocumentOperation
{
    NSArray *_navNodes;
    NSArray *_navParents;
    BOOL _convertTransform;
}

- (void).cxx_destruct;
- (BOOL)_performRevert;
- (BOOL)_performApply;
- (id)initWithDocument:(id)arg1 addingNodes:(id)arg2 toParents:(id)arg3 convertTransform:(BOOL)arg4;

@end

