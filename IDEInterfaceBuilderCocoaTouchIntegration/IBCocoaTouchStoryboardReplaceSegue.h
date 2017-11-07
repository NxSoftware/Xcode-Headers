//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <IDEInterfaceBuilderCocoaTouchIntegration/IBUIStoryboardAbstractTriggeredSegue.h>

@class NSNumber;

@interface IBCocoaTouchStoryboardReplaceSegue : IBUIStoryboardAbstractTriggeredSegue
{
    NSNumber *_splitViewControllerTargetIndex;
}

+ (id)ibDefaultImageForInstance:(id)arg1 targetRuntime:(id)arg2;
+ (id)classIdentifier;
+ (double)displayOrderPriority;
@property(copy, nonatomic) NSNumber *splitViewControllerTargetIndex; // @synthesize splitViewControllerTargetIndex=_splitViewControllerTargetIndex;
- (void).cxx_destruct;
- (BOOL)isFlowTerminatingSegue;
- (id)effectiveConnectionForEnablingConfigurationsInDocument:(id)arg1 segueReachabilityContext:(id)arg2 error:(id *)arg3;
- (id)badgeImage;
- (id)metricChainSucceedingMetric:(id)arg1;
- (void)copyCommonInstanceStateToTriggeredSegue:(id)arg1;
- (id)instantiateSegueTemplate;
- (void)unarchiveWithDocumentUnarchiver:(id)arg1;
- (void)archiveWithDocumentArchiver:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSource:(id)arg1 label:(id)arg2 destination:(id)arg3;

@end

