//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEFoundation/IDEDistributionOption.h>

@interface IDEDistributionOptionCompileBitcode : IDEDistributionOption
{
}

+ (id)propertyListForContext:(id)arg1;
+ (id)availableOptionsForPropertyList;
- (id)providedOutputContextPropertyNames;
- (id)requiredInputContextPropertyNames;
@property(readonly, nonatomic) BOOL wantsCompileBitcodeAsk;
- (BOOL)loadFromPropertyList:(id)arg1 error:(id *)arg2;
- (id)initWithIdentifier:(id)arg1 context:(id)arg2;

@end

