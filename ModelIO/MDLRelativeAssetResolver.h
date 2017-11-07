//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ModelIO/MDLAssetResolver-Protocol.h>

@class MDLAsset, NSString;

@interface MDLRelativeAssetResolver : NSObject <MDLAssetResolver>
{
    MDLAsset *_asset;
}

@property(nonatomic) __weak MDLAsset *asset; // @synthesize asset=_asset;
- (void).cxx_destruct;
- (id)resolveAssetNamed:(id)arg1;
- (BOOL)canResolveAssetNamed:(id)arg1;
- (id)initWithAsset:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

