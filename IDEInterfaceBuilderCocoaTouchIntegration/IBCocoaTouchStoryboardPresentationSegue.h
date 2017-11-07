//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <IDEInterfaceBuilderCocoaTouchIntegration/IBUIStoryboardAbstractTriggeredSegue.h>

#import <IDEInterfaceBuilderCocoaTouchIntegration/IBCocoaTouchStoryboardAbstractModalSegue-Protocol.h>

@class NSNumber, NSString;

@interface IBCocoaTouchStoryboardPresentationSegue : IBUIStoryboardAbstractTriggeredSegue <IBCocoaTouchStoryboardAbstractModalSegue>
{
    NSNumber *_modalPresentationStyle;
    NSNumber *_modalTransitionStyle;
}

+ (id)ibDefaultImageForInstance:(id)arg1 targetRuntime:(id)arg2;
+ (id)keyPathsForValuesAffectingIbImageForNavigationRepresentation;
+ (id)kindDisplayNameForConnectionMenu;
+ (id)classIdentifier;
+ (BOOL)wantsDefaultAnimatesCompatibilityWarning;
+ (double)displayOrderPriority;
@property(copy, nonatomic) NSNumber *modalTransitionStyle; // @synthesize modalTransitionStyle=_modalTransitionStyle;
@property(copy, nonatomic) NSNumber *modalPresentationStyle; // @synthesize modalPresentationStyle=_modalPresentationStyle;
- (void).cxx_destruct;
- (void)ibPrepareToBackwardsDeployToOSVersion:(id)arg1 inDocument:(id)arg2;
- (void)ibPopulateAdditionalTargetOSVersions:(id)arg1 forCompilingDocument:(id)arg2;
- (BOOL)isFlowTerminatingSegue;
- (id)effectiveConnectionForDisablingConfigurationsInDocument:(id)arg1 segueReachabilityContext:(id)arg2;
- (id)badgeImage;
- (void)ibWarnings:(id)arg1 forDocument:(id)arg2 withComputationContext:(id)arg3;
- (id)metricChainSucceedingMetric:(id)arg1;
- (void)copyCommonInstanceStateToTriggeredSegue:(id)arg1;
- (id)instantiateSegueTemplate;
- (void)unarchiveWithDocumentUnarchiver:(id)arg1;
- (void)archiveWithDocumentArchiver:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(nonatomic) BOOL animates;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

