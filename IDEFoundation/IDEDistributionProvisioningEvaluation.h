//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IDEProvisionableStatusEvaluation, NSArray, NSMutableDictionary;

@interface IDEDistributionProvisioningEvaluation : NSObject
{
    IDEProvisionableStatusEvaluation *_installerPackageEvaluation;
    NSMutableDictionary *_distributionItemToEvaluationMap;
}

@property(readonly, nonatomic) NSMutableDictionary *distributionItemToEvaluationMap; // @synthesize distributionItemToEvaluationMap=_distributionItemToEvaluationMap;
@property(retain, nonatomic) IDEProvisionableStatusEvaluation *installerPackageEvaluation; // @synthesize installerPackageEvaluation=_installerPackageEvaluation;
- (void).cxx_destruct;
- (id)description;
@property(readonly) NSArray *allEvaluationErrors;
@property(readonly) NSArray *allItemEvaluations;
- (void)setEvaluation:(id)arg1 forDistributionItem:(id)arg2;
- (id)evaluationForDistributionItem:(id)arg1;
- (id)init;

@end

