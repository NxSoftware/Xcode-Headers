//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Xcode3UI/Xcode3BuildPropertyBlueprintColumnContext.h>

@interface Xcode3BuildPropertyConfigFileColumnContext : Xcode3BuildPropertyBlueprintColumnContext
{
    int _level;
}

@property int level; // @synthesize level=_level;
- (void)configureForConfigurationFileInLevelsMode:(BOOL)arg1;
- (id)customTitleForName:(id)arg1;
- (BOOL)hasAssignmentForRowContext:(id)arg1;
- (id)expandedPropertyValueForRowContext:(id)arg1;
- (id)expandedValueForRowContext:(id)arg1 withConditionSet:(id)arg2 macroEditingContext:(id)arg3;
- (id)propertyDefinitionValueForRowContext:(id)arg1;
- (int)definitionLevelForConfigFile;
- (id)init;

@end

