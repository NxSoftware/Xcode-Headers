//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IDEFoundation/IDEDistributionItemProcessingStep.h>

@interface IDEDistributionSymbolsStep : IDEDistributionItemProcessingStep
{
}

- (_Bool)runWithError:(id *)arg1;
- (_Bool)shouldSkip;
- (BOOL)shouldProcessSymbolsForItem:(id)arg1 archive:(id)arg2;
- (id)providedOutputContextPropertyNames;
- (id)requiredInputContextPropertyNames;
- (id)name;

@end

