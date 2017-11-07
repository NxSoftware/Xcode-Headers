//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSKeyedUnarchiver.h>

@class NSDictionary, NSString, NSURL, SCNAssetCatalog;

@interface SCNKeyedUnarchiver : NSKeyedUnarchiver
{
    NSDictionary *_context;
    SCNAssetCatalog *_assetCatalog;
    NSURL *_documentURL;
    NSString *lookUpKey;
    id lookUpFoundInstance;
}

@property(retain, nonatomic) id lookUpFoundInstance; // @synthesize lookUpFoundInstance;
@property(retain, nonatomic) NSString *lookUpKey; // @synthesize lookUpKey;
@property(retain, nonatomic) NSURL *documentURL; // @synthesize documentURL=_documentURL;
@property(retain, nonatomic) SCNAssetCatalog *assetCatalog; // @synthesize assetCatalog=_assetCatalog;
@property(retain, nonatomic) NSDictionary *context; // @synthesize context=_context;
@property(readonly, nonatomic) NSURL *documentEnclosingURL;
- (void)dealloc;

@end

