//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DVTKit/DVTGraphLayer-Protocol.h>

@class DVTGraph, DVTGraphLayerSelectionDetails, NSString;

@interface DVTAbstractGraphLayer : NSObject <DVTGraphLayer>
{
    BOOL _wantsClipping;
    DVTGraph *_graph;
    DVTGraphLayerSelectionDetails *_selectionDetails;
}

@property BOOL wantsClipping; // @synthesize wantsClipping=_wantsClipping;
@property(retain) DVTGraphLayerSelectionDetails *selectionDetails; // @synthesize selectionDetails=_selectionDetails;
@property(readonly) __weak DVTGraph *graph; // @synthesize graph=_graph;
- (void).cxx_destruct;
- (void)clearSelection;
- (BOOL)selectNext;
- (BOOL)selectPrevious;
- (void)selectDataAtIndex:(unsigned long long)arg1;
- (BOOL)selectDataAtPoint:(struct CGPoint)arg1;
- (void)drawLayerWithVisibleBounds:(struct _DVTGraphBounds)arg1;
- (id)initWithGraph:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

