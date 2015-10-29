//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface IBAutolayoutCandidateConstraintGenerator : NSObject
{
}

+ (id)candidateVerticalSpacingConstraintBetweenDescendant:(id)arg1 andDescendant:(id)arg2 ofView:(id)arg3 layoutInfo:(id)arg4;
+ (void)determineComponentsForVerticalSpacingConstraintBetweenDescendant:(id)arg1 andDescendant:(id)arg2 ofView:(id)arg3 layoutInfo:(id)arg4 returningTopItem:(id *)arg5 bottomItem:(id *)arg6 constant:(id *)arg7;
+ (id)candidateHorizontalSpacingConstraintBetweenDescendant:(id)arg1 andDescendant:(id)arg2 ofView:(id)arg3 layoutInfo:(id)arg4;
+ (void)determineComponentsForHorizontalSpacingConstraintBetweenDescendant:(id)arg1 andDescendant:(id)arg2 ofView:(id)arg3 layoutInfo:(id)arg4 returningLeadingItem:(id *)arg5 trailingItem:(id *)arg6 constant:(id *)arg7;
+ (id)constraintsWithVisualFormatViews:(id)arg1 overridingContainingItem:(id)arg2 layoutInfo:(id)arg3 formatsAndOptionsAndMetricsAndScoringClasses:(id)arg4;
+ (id)constraintsWithVisualFormat:(id)arg1 options:(unsigned long long)arg2 metrics:(id)arg3 views:(id)arg4 overridingContainingItem:(id)arg5 scoringClass:(id)arg6 layoutInfo:(id)arg7;
+ (id)candidateLayoutConstraintsForDescendants:(id)arg1 ofView:(id)arg2 layoutInfo:(id)arg3 layoutEngine:(id)arg4 withOptions:(unsigned long long)arg5;
+ (id)_candidateLayoutConstraintsToNearestNeighborsForDescendants:(id)arg1 ofView:(id)arg2 marginRelativeToContainer:(BOOL)arg3 layoutInfo:(id)arg4 layoutEngine:(id)arg5 withOptions:(unsigned long long)arg6;
+ (id)candidateLayoutConstraintForNearestNeighbor:(id)arg1 ofItem:(id)arg2 attribute:(unsigned long long)arg3 marginRelativeToContainer:(BOOL)arg4 descendantOfItem:(id)arg5 layoutInfo:(id)arg6;
+ (id)_candidateLayoutConstraintForNearestNeighbor:(id)arg1 nearestNeighborIsContainer:(BOOL)arg2 ofItem:(id)arg3 attribute:(unsigned long long)arg4 marginRelativeToContainer:(BOOL)arg5 descendantOfItem:(id)arg6 layoutInfo:(id)arg7;
+ (id)nearestNeighborForView:(id)arg1 attribute:(unsigned long long)arg2 marginRelativeToContainer:(BOOL)arg3 layoutInfo:(id)arg4 threshold:(id)arg5 returningIsContainer:(char *)arg6 returningNearestNeighborAttribute:(unsigned long long *)arg7;
+ (void)enumerateNearestNeighborsForItem:(id)arg1 attribute:(unsigned long long)arg2 marginRelativeToContainer:(BOOL)arg3 layoutInfo:(id)arg4 withBlock:(CDUnknownBlockType)arg5;
+ (id)_candidateLayoutConstraintsUsingLayoutGuideGeneratorForDescendants:(id)arg1 ofView:(id)arg2 layoutInfo:(id)arg3 layoutEngine:(id)arg4 withOptions:(unsigned long long)arg5;
+ (id)candidateExplicitConstraintsForDescendants:(id)arg1 ofView:(id)arg2 layoutInfo:(id)arg3 withOptions:(unsigned long long)arg4;
+ (id)candidateExplicitConstraintForDescendant:(id)arg1 ofView:(id)arg2 attribute:(unsigned long long)arg3 layoutInfo:(id)arg4;
+ (id)candidateConstraintForDescendant:(id)arg1 withLayoutBounds:(struct CGRect)arg2 andLayoutFrameInCoordinateSpaceOfAncestor:(struct CGRect)arg3 ancestorView:(id)arg4 ancestorLayoutBounds:(struct CGRect)arg5 attribute:(unsigned long long)arg6 layoutInfo:(id)arg7 scoringClass:(id)arg8;
+ (id)candidateConstraintForDescendant:(id)arg1 ofView:(id)arg2 attribute:(unsigned long long)arg3 layoutInfo:(id)arg4 scoringClass:(id)arg5;
+ (id)candidateExplicitSizeConstraintForDescendant:(id)arg1 withBounds:(struct CGRect)arg2 attribute:(unsigned long long)arg3 layoutInfo:(id)arg4;
+ (id)_candidateLayoutConstraintsForExactMatchesForDescendants:(id)arg1 ofView:(id)arg2 layoutGuideMatches:(id)arg3 returningMatchedGuideMatches:(id *)arg4 returningMatchedViews:(id *)arg5 layoutInfo:(id)arg6 layoutEngine:(id)arg7 withOptions:(unsigned long long)arg8;
+ (id)layoutConstraintForDescendant:(id)arg1 ofView:(id)arg2 andLayoutGuideMatch:(id)arg3 layoutInfo:(id)arg4 withOptions:(unsigned long long)arg5;
+ (id)defaultContainingViewForConstraint:(id)arg1 layoutInfo:(id)arg2;
+ (id)containingViewForExplicitSizingConstraintsOfView:(id)arg1 layoutInfo:(id)arg2;
+ (BOOL)explicitSizingConstraintsAreContainedByTheAffectedView;
+ (void)setExplicitConstraintGenerationStrategy:(unsigned long long)arg1;
+ (unsigned long long)explicitConstraintGenerationStrategy;
+ (void)initialize;

@end

