//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IBAutolayoutFoundation/IBSceneUpdateProcessingRequest.h>

@class IBAutolayoutArbitrationUnit, IBAutolayoutArbitrationUnitSparseRepresentation;

@interface IBAutolayoutStatusProcessingRequest : IBSceneUpdateProcessingRequest
{
    IBAutolayoutArbitrationUnitSparseRepresentation *_sparseRepresentation;
    IBAutolayoutArbitrationUnit *_arbitrationUnit;
}

@property(readonly, nonatomic) IBAutolayoutArbitrationUnit *arbitrationUnit; // @synthesize arbitrationUnit=_arbitrationUnit;
- (void).cxx_destruct;
- (void)encodeWithBinaryArchiver:(id)arg1;
- (id)initWithBinaryUnarchiver:(id)arg1;
- (id)initWithArbitrationUnit:(id)arg1 resultPhase:(long long)arg2 postProcessingBlock:(CDUnknownBlockType)arg3;

@end

