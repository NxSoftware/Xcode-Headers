//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEFoundation/IDETemplate.h>

#import <Xcode3Core/Xcode3ProjectTemplateOptionParent-Protocol.h>

@class IDEWorkspace, NSArray, NSDictionary, NSString;
@protocol Xcode3ProjectTemplateUnitParent;

@interface Xcode3ProjectTemplateUnit : IDETemplate <Xcode3ProjectTemplateOptionParent>
{
    NSArray *_ancestorNames;
    NSArray *_componentDictionaries;
    NSDictionary *_definitions;
    NSDictionary *_requiredOptions;
    NSArray *_targets;
    NSArray *_executables;
    BOOL _concrete;
    BOOL _projectOnly;
    BOOL _targetOnly;
    BOOL _wantsAssociatedTarget;
    BOOL _associatedTargetIsRequired;
    BOOL _associatedTargetIsTargetToBeTested;
    BOOL _associatedTargetIsDependent;
    BOOL _associatedTargetNeedsProductBuildPhaseInjection;
    BOOL _suppressTopLevelGroup;
    NSString *_identifier;
    id <Xcode3ProjectTemplateUnitParent> _parent;
    NSArray *_nodes;
    NSDictionary *_macros;
    NSDictionary *_project;
    NSArray *_associatedTargetAllowableProductTypes;
    NSArray *_associatedTargetAllowablePlatforms;
    NSString *_associatedTargetPopUpTitle;
    NSString *_associatedTargetPopUpDescription;
    NSArray *_optionConstraints;
    NSArray *_injectionTargetNames;
}

@property(readonly) NSArray *injectionTargetNames; // @synthesize injectionTargetNames=_injectionTargetNames;
@property BOOL suppressTopLevelGroup; // @synthesize suppressTopLevelGroup=_suppressTopLevelGroup;
@property(readonly) NSArray *optionConstraints; // @synthesize optionConstraints=_optionConstraints;
@property(readonly) NSString *associatedTargetPopUpDescription; // @synthesize associatedTargetPopUpDescription=_associatedTargetPopUpDescription;
@property(readonly) NSString *associatedTargetPopUpTitle; // @synthesize associatedTargetPopUpTitle=_associatedTargetPopUpTitle;
@property(readonly) BOOL associatedTargetNeedsProductBuildPhaseInjection; // @synthesize associatedTargetNeedsProductBuildPhaseInjection=_associatedTargetNeedsProductBuildPhaseInjection;
@property(readonly) BOOL associatedTargetIsDependent; // @synthesize associatedTargetIsDependent=_associatedTargetIsDependent;
@property(readonly) BOOL associatedTargetIsTargetToBeTested; // @synthesize associatedTargetIsTargetToBeTested=_associatedTargetIsTargetToBeTested;
@property(readonly) BOOL associatedTargetIsRequired; // @synthesize associatedTargetIsRequired=_associatedTargetIsRequired;
@property(readonly) NSArray *associatedTargetAllowablePlatforms; // @synthesize associatedTargetAllowablePlatforms=_associatedTargetAllowablePlatforms;
@property(readonly) NSArray *associatedTargetAllowableProductTypes; // @synthesize associatedTargetAllowableProductTypes=_associatedTargetAllowableProductTypes;
@property(readonly) BOOL wantsAssociatedTarget; // @synthesize wantsAssociatedTarget=_wantsAssociatedTarget;
@property(readonly, getter=isTargetOnly) BOOL targetOnly; // @synthesize targetOnly=_targetOnly;
@property(readonly, getter=isProjectOnly) BOOL projectOnly; // @synthesize projectOnly=_projectOnly;
@property(readonly, getter=isConcrete) BOOL concrete; // @synthesize concrete=_concrete;
@property(readonly) NSDictionary *project; // @synthesize project=_project;
@property(readonly, copy) NSDictionary *macros; // @synthesize macros=_macros;
@property(readonly, copy) NSArray *nodes; // @synthesize nodes=_nodes;
@property __weak id <Xcode3ProjectTemplateUnitParent> parent; // @synthesize parent=_parent;
@property(copy) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (void)valueDidChangeForOption:(id)arg1;
- (void)addToNode:(id)arg1 andDefinitions:(id)arg2 withOptions:(id)arg3 components:(id)arg4 project:(id)arg5 targets:(id)arg6 executables:(id)arg7 macros:(id)arg8 replacementHandler:(CDUnknownBlockType)arg9;
- (void)mergeSettingsDictionary:(id)arg1 intoDictionary:(id)arg2 replacementHandler:(CDUnknownBlockType)arg3;
@property(readonly) unsigned long long numberOfComponents;
- (BOOL)isUsableWithOptions:(id)arg1;
- (id)injectionsFromUnits:(id)arg1;
- (id)ancestorsFromUnits:(id)arg1;
- (id)fallbackTemplateIcon;
- (Class)templateOptionClass;
- (id)initWithTemplateInfo:(id)arg1 filePath:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) IDEWorkspace *workspace;

@end

