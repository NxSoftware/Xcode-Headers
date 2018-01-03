//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <XCSCore/XCSCodeCoverageObject.h>

@class NSArray, NSString;

@interface XCSCodeCoverageFile : XCSCodeCoverageObject
{
    BOOL _hasBeenResolved;
    NSArray *_methods;
    NSString *_documentLocation;
}

@property(nonatomic) BOOL hasBeenResolved; // @synthesize hasBeenResolved=_hasBeenResolved;
@property(copy, nonatomic) NSString *documentLocation; // @synthesize documentLocation=_documentLocation;
@property(retain, nonatomic) NSArray *methods; // @synthesize methods=_methods;
- (void).cxx_destruct;
- (id)_deviceTinyIDs;
- (void)_bindHierarchyWithIntegration:(id)arg1 parentObject:(id)arg2;
- (BOOL)_validateWithMethods:(id)arg1 documentLocation:(id)arg2 validationErrors:(id *)arg3;
- (id)ccifRepresentation;
- (id)saveRepresentationHumanReadable:(BOOL)arg1;
- (id)saveRepresentation;
- (id)ccimRepresentation;
- (id)dictionaryRepresentation;
- (unsigned long long)count;
- (id)keyPath;
- (id)_initWithMethods:(id)arg1 documentLocation:(id)arg2 skipValidation:(BOOL)arg3 skipBindHierarchy:(BOOL)arg4 validationErrors:(id *)arg5;
- (id)initWithContents:(id)arg1 service:(id)arg2 skipValidation:(BOOL)arg3 skipBindHierarchy:(BOOL)arg4 validationErrors:(id *)arg5;
- (id)initWithContents:(id)arg1 service:(id)arg2 validationErrors:(id *)arg3;
- (id)initWithTitle:(id)arg1 methods:(id)arg2 documentLocation:(id)arg3;
- (id)init;

@end

