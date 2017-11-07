//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEFoundation/DVTInvalidation-Protocol.h>
#import <IDEFoundation/DVTXMLUnarchiving-Protocol.h>

@class DVTNotificationToken, DVTObservingToken, DVTStackBacktrace, DVTToolchain, IDEFileReference, IDERunnable, IDEScheme, IDESchemeBuildableReference, NSArray, NSMapTable, NSMutableArray, NSString;

@interface IDESchemeAction : NSObject <DVTXMLUnarchiving, DVTInvalidation>
{
    BOOL _hasAwoken;
    NSMutableArray *_prePhaseExecutionActions;
    NSMutableArray *_postPhaseExecutionActions;
    DVTNotificationToken *_buildSettingsDidChangeNotificationObservingToken;
    DVTObservingToken *_activeRunDestinationObservingToken;
    NSMapTable *_pgoControllersByDevice;
    int _internalDebuggerToolchainSelectionMode;
    int _toolchainState;
    IDEScheme *_runContext;
    IDERunnable *_runnable;
    IDESchemeBuildableReference *_buildableReferenceToUseForMacroExpansion;
    NSString *_buildConfiguration;
    IDEFileReference *_notificationPayloadFile;
    NSString *_selectedInternalDebuggerToolchainIdentifier;
    DVTToolchain *_lldbToolchain;
    DVTToolchain *_llvmProfdataToolchain;
    NSString *_intentQueryString;
}

+ (id)commandLineArgumentsForLanguage:(id)arg1 andRegion:(id)arg2;
+ (id)bundleIdentifierFromBuildableProduct:(id)arg1 withBuildParameters:(id)arg2;
+ (void)setupMainThreadCheckerInEnvironmentVariables:(id)arg1 dylibPath:(id)arg2;
+ (BOOL)addUBSanitizerEnvironmentVariables:(id)arg1 buildParameters:(id)arg2 buildable:(id)arg3 debugAppExtensions:(BOOL)arg4 debugging:(BOOL)arg5 testingSpecifier:(id)arg6 error:(id *)arg7;
+ (BOOL)addThreadSanitizerEnvironmentVariables:(id)arg1 buildParameters:(id)arg2 buildable:(id)arg3 debugAppExtensions:(BOOL)arg4 debugging:(BOOL)arg5 testingSpecifier:(id)arg6 error:(id *)arg7;
+ (BOOL)addAddressSanitizerEnvironmentVariables:(id)arg1 buildParameters:(id)arg2 buildable:(id)arg3 debugAppExtensions:(BOOL)arg4 debugging:(BOOL)arg5 testingSpecifier:(id)arg6 error:(id *)arg7;
+ (BOOL)_addSanitizer:(unsigned long long)arg1 environmentVariables:(id)arg2 buildParameters:(id)arg3 buildable:(id)arg4 debugAppExtensions:(BOOL)arg5 debugging:(BOOL)arg6 testingSpecifier:(id)arg7 error:(id *)arg8;
+ (id)keyPathsForValuesAffectingRunnable;
+ (BOOL)shouldAllowCustomPhaseActions;
+ (void)forceUBSanitizerEnabledTo:(BOOL)arg1;
+ (_Bool)schemeActionIsSupportedForDevice:(id)arg1 schemeCommand:(id)arg2 outError:(id *)arg3;
+ (void)forceThreadSanitizerEnabledTo:(BOOL)arg1;
+ (void)forceAddressSanitizerEnabledTo:(BOOL)arg1;
+ (void)initialize;
@property(retain) NSString *intentQueryString; // @synthesize intentQueryString=_intentQueryString;
@property(readonly) DVTToolchain *llvmProfdataToolchain; // @synthesize llvmProfdataToolchain=_llvmProfdataToolchain;
@property(retain) DVTToolchain *lldbToolchain; // @synthesize lldbToolchain=_lldbToolchain;
@property int toolchainState; // @synthesize toolchainState=_toolchainState;
@property(retain) NSString *selectedInternalDebuggerToolchainIdentifier; // @synthesize selectedInternalDebuggerToolchainIdentifier=_selectedInternalDebuggerToolchainIdentifier;
@property(nonatomic) int internalDebuggerToolchainSelectionMode; // @synthesize internalDebuggerToolchainSelectionMode=_internalDebuggerToolchainSelectionMode;
@property(retain) IDEFileReference *notificationPayloadFile; // @synthesize notificationPayloadFile=_notificationPayloadFile;
@property(retain) IDESchemeBuildableReference *buildableReferenceToUseForMacroExpansion; // @synthesize buildableReferenceToUseForMacroExpansion=_buildableReferenceToUseForMacroExpansion;
@property(readonly) IDEScheme *runContext; // @synthesize runContext=_runContext;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (id)swiftVersionOfRunnableForSchemeCommand:(id)arg1;
- (id)llvmProfdataToolchainForSchemeCommand:(id)arg1;
- (id)bestLLDBToolchainForSchemeCommand:(id)arg1 preferBuildProductToolchain:(BOOL)arg2;
- (id)swiftLLDBToolchainForSchemeCommand:(id)arg1 buildable:(id)arg2 performanceMetric:(id)arg3;
- (id)productTypesToIgnoreForSwiftDebuggerToolchain;
- (id)_automaticSwiftLLDBToolchainForSchemeCommand:(id)arg1 buildable:(id)arg2 performanceMetric:(id)arg3;
- (BOOL)useInternalDebuggerToolchainSelectionLogic;
- (BOOL)runnableUsesInternalSDK;
- (id)_buildProductToolchainIdentifiersForSchemeCommand:(id)arg1;
- (id)_resolvedRunnableBuildableForToolchainDetection;
- (BOOL)isDeprecatedOption:(id)arg1;
- (void)updateSearchPathSettingsInEnvironment:(id)arg1 withBuildProducts:(id)arg2 runDestination:(id)arg3;
- (void)addBuildableProductRunnable:(id)arg1 fromXMLUnarchiver:(id)arg2;
- (void)addPathRunnable:(id)arg1 fromXMLUnarchiver:(id)arg2;
- (void)addRemoteRunnable:(id)arg1 fromXMLUnarchiver:(id)arg2;
- (void)addPostActions:(id)arg1 fromXMLUnarchiver:(id)arg2;
- (void)addPreActions:(id)arg1 fromXMLUnarchiver:(id)arg2;
- (void)setNotificationPayloadFileFromUTF8String:(char *)arg1 fromXMLUnarchiver:(id)arg2;
- (void)dvt_encodeRelationshipsWithXMLArchiver:(id)arg1 version:(id)arg2;
- (void)dvt_encodeAttributesWithXMLArchiver:(id)arg1 version:(id)arg2;
- (void)dvt_awakeFromXMLUnarchiver:(id)arg1;
- (void)modifyEnvironmentForLogging:(id)arg1 buildParameters:(id)arg2;
- (void)_addIDEDisabledOSActivityDTMode:(id)arg1;
@property(readonly) NSArray *_postPhaseExecutionActionsProxies;
@property(readonly) NSArray *_prePhaseExecutionActionsProxies;
- (void)schemeObjectGraphSetupComplete;
@property(readonly) BOOL hasAwoken;
- (void)replacePostPhaseExecutionActionsAtIndexes:(id)arg1 withPostPhaseExecutionActions:(id)arg2;
- (void)replaceObjectInPostPhaseExecutionActionsAtIndex:(unsigned long long)arg1 withObject:(id)arg2;
- (void)removePostPhaseExecutionActionsAtIndexes:(id)arg1;
- (void)insertPostPhaseExecutionActions:(id)arg1 atIndexes:(id)arg2;
- (void)removeObjectFromPostPhaseExecutionActionsAtIndex:(unsigned long long)arg1;
- (void)insertObject:(id)arg1 inPostPhaseExecutionActionsAtIndex:(unsigned long long)arg2;
@property(copy) NSArray *postPhaseExecutionActions; // @dynamic postPhaseExecutionActions;
- (void)replacePrePhaseExecutionActionsAtIndexes:(id)arg1 withObjects:(id)arg2;
- (void)replaceObjectInPrePhaseExecutionActionsAtIndex:(unsigned long long)arg1 withObject:(id)arg2;
- (void)removePrePhaseExecutionActionsAtIndexes:(id)arg1;
- (void)insertPrePhaseExecutionActions:(id)arg1 atIndexes:(id)arg2;
- (void)removeObjectFromPrePhaseExecutionActionsAtIndex:(unsigned long long)arg1;
- (void)insertObject:(id)arg1 inPrePhaseExecutionActionsAtIndex:(unsigned long long)arg2;
@property(copy) NSArray *prePhaseExecutionActions; // @dynamic prePhaseExecutionActions;
- (void)primitiveInvalidate;
- (id)bundleIdentifierWithRunnablePath:(id)arg1;
- (id)absolutePathOfBuildSetting:(id)arg1 forSchemeCommand:(id)arg2;
- (id)expandMacrosInString:(id)arg1 forSchemeCommand:(id)arg2 buildParameters:(id)arg3;
- (id)expandMacrosInString:(id)arg1 forSchemeCommand:(id)arg2;
- (id)stringListForBuildSettings:(id)arg1 forSchemeCommand:(id)arg2;
- (id)stringListForBuildSettings:(id)arg1 forSchemeCommand:(id)arg2 buildable:(id)arg3;
- (id)adjustedBuildParametersForMacroExpansionBuildableWithBaselineParamters:(id)arg1;
- (BOOL)mallocStackLightAllowedForRunDestination:(id)arg1;
- (BOOL)UBSanitizerAllowedForRunnable;
- (BOOL)threadSanitizerAllowedForRunDestination:(id)arg1;
- (BOOL)_runDestinationIsX86_64:(id)arg1;
- (BOOL)mainThreadCheckerEnabledForSchemeCommand:(id)arg1 runDestination:(id)arg2;
- (BOOL)UBSanitizerEnabledForSchemeCommand:(id)arg1 runDestination:(id)arg2;
- (BOOL)threadSanitizerEnabledForSchemeCommand:(id)arg1 runDestination:(id)arg2;
- (BOOL)addressSanitizerEnabledForSchemeCommand:(id)arg1;
- (id)_sanitizerSchemeActionForSchemeCommand:(id)arg1;
- (id)setUpActionDependenciesForCorePhaseOperation:(id)arg1 shouldRunPostActionsBlock:(CDUnknownBlockType)arg2 prePhaseEnvironmentPopulationBlock:(CDUnknownBlockType)arg3 postPhaseEnvironmentPopulationBlock:(CDUnknownBlockType)arg4 buildParameters:(id)arg5 schemeActionResultOperation:(id)arg6 error:(id *)arg7;
- (id)pgoControllerForDestination:(id)arg1;
- (void)addPGOController:(id)arg1 forDevice:(id)arg2;
- (id)realAppNameForRunnablePath:(id)arg1;
- (void)updateExtensionInfosOfLaunchParmeters:(id)arg1;
- (id)filePathsForContainersAndExtensionsForBuildParameters:(id)arg1 runnableProductType:(id)arg2 schemeCommand:(id)arg3;
- (id)extensionInfosForExtensionBuildables:(id)arg1 schemeCommand:(id)arg2;
- (id)extensionInfosForExtensions:(id)arg1;
- (void)updateBuildableForChangeInRunnable;
@property(readonly, nonatomic) BOOL debugAppExtensions;
- (void)_resetToolchainStatusHard:(BOOL)arg1;
@property(copy) NSString *buildConfiguration; // @synthesize buildConfiguration=_buildConfiguration;
@property(retain, nonatomic) IDERunnable *runnable; // @synthesize runnable=_runnable;
- (void)setRunContext:(id)arg1;
@property(readonly) BOOL doesNonActionWork;
@property(readonly) NSString *subtitle;
@property(readonly) NSString *name;
- (void)setupObservers;
- (id)initFromXMLUnarchiver:(id)arg1 archiveVersion:(float)arg2;
- (id)init;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) NSMutableArray *mutablePostPhaseExecutionActions; // @dynamic mutablePostPhaseExecutionActions;
@property(readonly) NSMutableArray *mutablePrePhaseExecutionActions; // @dynamic mutablePrePhaseExecutionActions;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

