//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface NSObject (IBCocoaTouchRuntimeMarshalling)
+ (void)registerMarshallingRecordHandlers;
- (BOOL)alwaysUsesTraitStorage;
- (void)configureDiagnosticsHandler:(id)arg1 afterFailedMarshallingOperationNamed:(id)arg2;
- (id)configurableKeyPathForMarshalledDesignTimeToManyRelationship:(id)arg1;
- (id)marshalledTraitStorageCandidatesForDesignTimeToManyRelationship:(id)arg1;
- (id)instantiationKeyPathForMarshalledRelatedObject:(id)arg1;
- (id)marshallerForAttributeStateKey:(id)arg1 defaultMarshaller:(id)arg2 context:(id)arg3;
- (id)userDefinedRuntimeAttributesToMarshallWithContext:(id)arg1;
- (Class)classToTakeInitialMarshalledKeysFrom:(id)arg1;
- (id)localExtraMarshalledToManyRelationshipKeyPaths;
- (id)localExtraMarshalledToOneRelationshipKeyPaths;
- (id)localExtraMarshalledAttributesKeyPaths;
- (id)runtimeClassNameForContext:(id)arg1 returningOptionalFallbackClassName:(id *)arg2;
- (id)ibRuntimeClassName;
@end

