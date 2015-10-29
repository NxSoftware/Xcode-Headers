//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IBAbstractAutolayoutFrameDecisionDriver.h"

@class IBCocoaTouchAutolayoutArbitrationUnit;

@interface IBCocoaTouchAutolayoutFrameDecisionDriver : IBAbstractAutolayoutFrameDecisionDriver
{
}

- (void)enumerateLayoutFramesForViews:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)addConstraints:(id)arg1 replacingConstraints:(id)arg2 enforcingCurrentSizeOfViews:(id)arg3 mutuallyExclusiveConstraintBreakageStrategy:(unsigned long long)arg4 returningConstraintsAdded:(id *)arg5 returningConstraintsRemoved:(id *)arg6 framePropagationBlock:(CDUnknownBlockType)arg7;
- (CDUnknownBlockType)sizeView:(id)arg1 toLayoutSize:(struct CGSize)arg2 suggestedLayoutOrigin:(struct CGPoint)arg3 mutuallyExclusiveConstraintBreakageStrategy:(unsigned long long)arg4 framePropagationBlock:(CDUnknownBlockType)arg5;
- (void)_runNewRequestWithRequestCreationBlock:(CDUnknownBlockType)arg1 resultProcessingBlock:(CDUnknownBlockType)arg2 framePropagationBlock:(CDUnknownBlockType)arg3;
- (CDUnknownBlockType)defaultDiagnosticsBlockForOperationNamed:(id)arg1 format:(id)arg2;
@property(readonly) IBCocoaTouchAutolayoutArbitrationUnit *arbitrationUnit;

@end

