//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <IDEFoundation/IDEBreakpoint.h>

@class NSString;

@interface IDESymbolicBreakpoint : IDEBreakpoint
{
    NSString *_symbolName;
    NSString *_moduleName;
}

+ (id)keyPathsForValuesAffectingLocationsProvideAdditionalInformation;
+ (id)keyPathsForValuesAffectingDisplayName;
+ (id)propertiesAffectingPersistenceState;
@property(copy) NSString *moduleName; // @synthesize moduleName=_moduleName;
@property(copy) NSString *symbolName; // @synthesize symbolName=_symbolName;
- (void).cxx_destruct;
- (void)dvt_encodeRelationshipsWithXMLArchiver:(id)arg1 version:(id)arg2;
- (void)dvt_encodeAttributesWithXMLArchiver:(id)arg1 version:(id)arg2;
- (id)initFromXMLUnarchiver:(id)arg1 archiveVersion:(float)arg2;
- (id)accessibilityDescription;
- (BOOL)locationsProvideAdditionalInformation;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)displayName;
- (id)initWithSymbolName:(id)arg1 moduleName:(id)arg2;
- (id)init;

@end

