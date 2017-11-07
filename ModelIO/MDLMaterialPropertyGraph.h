//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ModelIO/MDLMaterialPropertyNode.h>

@class NSArray, NSMutableArray;

@interface MDLMaterialPropertyGraph : MDLMaterialPropertyNode
{
    NSArray *_nodes;
    NSArray *_connections;
    NSMutableArray *_finalNodes;
}

@property(readonly, nonatomic) NSArray *connections; // @synthesize connections=_connections;
@property(readonly, nonatomic) NSArray *nodes; // @synthesize nodes=_nodes;
- (void).cxx_destruct;
- (void)evaluate;
- (id)initWithNodes:(id)arg1 connections:(id)arg2;

@end

