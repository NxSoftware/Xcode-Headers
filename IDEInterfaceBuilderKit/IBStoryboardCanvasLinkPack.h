//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableArray;

@interface IBStoryboardCanvasLinkPack : NSObject
{
    NSMutableArray *_canvasLinks;
    NSObject *_source;
    NSObject *_destination;
}

@property(readonly, nonatomic) NSObject *destination; // @synthesize destination=_destination;
@property(readonly, nonatomic) NSObject *source; // @synthesize source=_source;
- (void).cxx_destruct;
- (void)sortCanvasLinksUsingComparator:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) NSArray *exclusiveCanvasLinks;
@property(readonly, nonatomic) NSArray *nonExclusiveCanvasLinks;
@property(readonly, nonatomic) NSArray *canvasLinks;
- (void)addCanvasLink:(id)arg1;
- (id)initWithSource:(id)arg1 destination:(id)arg2;

@end

