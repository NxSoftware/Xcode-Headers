//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DVTDocumentLocation, NSArray, NSError, NSString;

@interface DVTDocumentation.DVTDocumentationResponse : NSObject
{
    // Error parsing type: , name: entities
    // Error parsing type: , name: symbolInfos
    // Error parsing type: , name: errors
    // Error parsing type: , name: _hash.storage
    // Error parsing type: , name: abstract.storage
}

- (CDUnknownBlockType).cxx_destruct;
- (id)init;
- (void)reportToMessageTracerForContext:(const char *)arg1;
@property(nonatomic, readonly) NSError *error;
@property(nonatomic, readonly) NSString *qualifiedDisplayName;
@property(nonatomic, readonly) DVTDocumentLocation *declarationLocation;
@property(nonatomic, copy) NSString *abstract;
@property(nonatomic, readonly) NSString *parentName;
@property(nonatomic, readonly) NSString *name;
@property(nonatomic, readonly) long long hash;
- (BOOL)isEqualTo:(id)arg1;
@property(nonatomic, readonly) NSString *description;
@property(nonatomic, readonly) NSArray *errors; // @synthesize errors;

@end

