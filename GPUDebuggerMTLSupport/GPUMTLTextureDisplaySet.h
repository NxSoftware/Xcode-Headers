//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <GPUDebuggerMTLSupport/GPUTraceDisplaySet-Protocol.h>

@class NSArray, NSMutableArray, NSMutableDictionary, NSString;
@protocol DYResource;

__attribute__((visibility("hidden")))
@interface GPUMTLTextureDisplaySet : NSObject <GPUTraceDisplaySet>
{
    NSMutableArray *_textureIDs;
    NSMutableDictionary *_colorResourceObjects;
    NSMutableDictionary *_baseLevels;
    NSMutableDictionary *_baseSlices;
}

@property(readonly) NSMutableDictionary *baseSlices; // @synthesize baseSlices=_baseSlices;
@property(readonly) NSMutableDictionary *baseLevels; // @synthesize baseLevels=_baseLevels;
@property(readonly) NSMutableDictionary *colorResourceObjects; // @synthesize colorResourceObjects=_colorResourceObjects;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *elementIDs;
@property(readonly, nonatomic) unsigned int numElements;
- (void)addTexture:(unsigned long long)arg1 slice:(unsigned long long)arg2 level:(unsigned long long)arg3;
- (void)addTexture:(unsigned long long)arg1;
- (id)init;
- (id)initWithTextureIDs:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain) id <DYResource> wireframeImage;

@end

