//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Xcode3UI/Xcode3InfoController.h>

@class NSArray, NSDictionary, NSMutableDictionary;

@interface Xcode3ExternalTargetInfoController : Xcode3InfoController
{
    NSArray *_slices;
    NSDictionary *_infoDictionary;
    NSMutableDictionary *_settingNameToTokenDict;
}

- (void).cxx_destruct;
- (id)initWithBlueprint:(id)arg1;
- (void)setInfoDictionary:(id)arg1;
- (id)infoDictionary;
- (void)_syncInfoDictionary;
- (id)slices;
- (id)_inspectedExternalTarget;

@end

