//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <IDEInterfaceBuilderKit/IBAbstractClassProvider.h>

@class NSDictionary, NSMutableArray;

@interface IBUserDefinedActionClassProvider : IBAbstractClassProvider
{
    NSMutableArray *_partialClassDescriptions;
    NSDictionary *_actionSelectorToTypeMap;
}

@property(copy, nonatomic) NSDictionary *actionSelectorToTypeMap; // @synthesize actionSelectorToTypeMap=_actionSelectorToTypeMap;
- (void).cxx_destruct;
- (id)partialClassDescriptions;
- (void)integrateDocumentDecodedPartialClassDescriptions:(id)arg1;
- (id)partialClassDescription;
- (id)init;

@end

