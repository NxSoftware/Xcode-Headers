//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "DBGBacktraceInspectorProvider.h"
#import "DBGClassHierarchyInspectorProvider.h"
#import "DBGObjectInstanceInspectorProvider.h"

@class IDEThread, NSArray, NSMutableDictionary, NSString;

@interface DBGViewChildMemberList : NSObject <DBGObjectInstanceInspectorProvider, DBGClassHierarchyInspectorProvider, DBGBacktraceInspectorProvider>
{
    NSMutableDictionary *_propertyValues;
    NSArray *_propertyEntriesToBeFetched;
    long long _unfetchedPropertyCount;
    IDEThread *_threadWithBacktrace;
    NSString *_backtraceErrorMessage;
}

@property(retain, nonatomic) NSString *backtraceErrorMessage; // @synthesize backtraceErrorMessage=_backtraceErrorMessage;
@property(retain, nonatomic) IDEThread *threadWithBacktrace; // @synthesize threadWithBacktrace=_threadWithBacktrace;
@property long long unfetchedPropertyCount; // @synthesize unfetchedPropertyCount=_unfetchedPropertyCount;
@property(readonly) NSArray *propertyEntriesToBeFetched; // @synthesize propertyEntriesToBeFetched=_propertyEntriesToBeFetched;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (id)valueForUndefinedKey:(id)arg1;
@property(readonly) BOOL isComplete;
- (id)valuesAffectingIsComplete;
- (id)dbgInspectedCell;
- (void)_setPropertyValueFromMainThread:(id)arg1 forKey:(id)arg2;
- (void)setPropertyValue:(id)arg1 forPropertyEntry:(id)arg2;
- (void)setPropertyValue:(id)arg1 forKey:(id)arg2;
- (BOOL)willFetchPropertyEntryWithName:(id)arg1;
- (id)propertyEntryForKey:(id)arg1;
- (BOOL)hasPropertyEntryForKey:(id)arg1;
- (id)propertyValueForKey:(id)arg1;
- (id)initWithPropertyEntriesToBeFetched:(id)arg1;

// Remaining properties
@property(readonly) NSString *classHierarchyForDisplay; // @dynamic classHierarchyForDisplay;
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) NSString *inferiorPointer; // @dynamic inferiorPointer;
@property(readonly) NSString *instanceSizeForDisplay;
@property(readonly) NSString *kindForDisplay;
@property(readonly) NSString *mallocZoneForDisplay;
@property(readonly) NSString *representedObjectClassNameForDisplay; // @dynamic representedObjectClassNameForDisplay;
@property(readonly) BOOL shouldDisplayInstanceSize; // @dynamic shouldDisplayInstanceSize;
@property(readonly) BOOL shouldDisplayKind; // @dynamic shouldDisplayKind;
@property(readonly) BOOL shouldDisplayMallocZone; // @dynamic shouldDisplayMallocZone;
@property(readonly) Class superclass;

@end

