//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ModelIO/MDLComponent-Protocol.h>

@class NSArray, NSData;

@protocol MDLSkinDeformerComponent <MDLComponent>
// Error parsing type for property meshBindTransform:
// Property attributes: T{?=[4]},R,N

@property(readonly, nonatomic) NSData *jointBindTransforms;
@property(readonly, nonatomic) NSArray *jointPaths;
-     // Error parsing type: Q32@0:8^{?=[4]}16Q24, name: copyJointBindTransformsInto:maxCount:
@end

