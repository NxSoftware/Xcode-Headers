//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface IDEMediaResourceFoldingStrategy : NSObject
{
    NSMutableDictionary *_defaultVariantForMatchingByMediaType;
    NSMutableDictionary *_variablesMediaTypeAndVariableType;
}

+ (id)emptyVariant;
+ (id)allFoldingStrategies;
+ (void)setFoldingStrategy:(id)arg1 forPlatform:(id)arg2;
+ (id)foldingStrategyForPlatform:(id)arg1;
+ (id)foldingStrategiesByPlatform;
- (void).cxx_destruct;
- (void)setDefaultVariantForMatching:(id)arg1 forMediaType:(id)arg2;
- (id)defaultVariantForMatchingForMediaType:(id)arg1;
- (id)descriptionForVariant:(id)arg1;
- (id)variantDescriptionForResource:(id)arg1;
- (id)titleForVariant:(id)arg1;
- (id)variantTitleForResource:(id)arg1;
- (id)firstResourceMatchingVariant:(id)arg1 fromVariantSet:(id)arg2;
- (BOOL)namesForFilesOfTypeIncludeFileExtensions:(id)arg1;
- (id)mostToLeastSpecificVariablesForMediaType:(id)arg1;
- (id)variablesInParsingOrderForMediaType:(id)arg1;
- (void)addVariable:(id)arg1 forMediaType:(id)arg2;
- (id)variableForType:(id)arg1 andMediaType:(id)arg2;
- (id)variablesForMediaType:(id)arg1;
- (id)init;

@end

