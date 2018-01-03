//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DebuggerUI/DBGNode.h>

@class DBGHostNode, DBGSimpleNode, SCNMaterial;

@interface DBGTrueSpacingBox : DBGNode
{
    DBGNode *_boxNode;
    DBGSimpleNode *_boxBorderNode;
    SCNMaterial *_boxMaterial;
    BOOL _highlighted;
    DBGHostNode *_host;
}

@property(nonatomic) BOOL highlighted; // @synthesize highlighted=_highlighted;
@property __weak DBGHostNode *host; // @synthesize host=_host;
- (void).cxx_destruct;
- (int)_currentContentMode;
- (double)_borderNodeOpacity;
- (double)_boxNodeOpacity;
- (id)borderColor;
- (id)boxFillColor;
- (void)updateUI;
- (void)setHidden:(BOOL)arg1 animated:(BOOL)arg2;
- (id)createBorderGeometryWithWidth:(double)arg1 height:(double)arg2 length:(double)arg3;
- (void)updateWithWidth:(double)arg1 height:(double)arg2 length:(double)arg3 chamferRadius:(double)arg4;
- (void)setRenderingOrder:(long long)arg1;
- (id)initWithWidth:(double)arg1 height:(double)arg2 length:(double)arg3 chamferRadius:(double)arg4 host:(id)arg5;

@end

