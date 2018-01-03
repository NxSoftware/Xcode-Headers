//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSFileHandle, NSString;

@interface DVTProductsClientTool : NSObject
{
    NSString *_name;
    NSArray *_arguments;
    NSFileHandle *_standardInput;
    NSFileHandle *_standardOutput;
    NSFileHandle *_standardError;
    NSString *_bundleID;
    NSString *_versionNumber;
    NSString *_build;
    NSString *_developerAccountUser;
    NSString *_sourceType;
    NSString *_path;
    long long _command;
}

+ (id)productsClientTool;
@property long long command; // @synthesize command=_command;
@property(retain) NSString *path; // @synthesize path=_path;
@property(retain) NSString *sourceType; // @synthesize sourceType=_sourceType;
@property(retain) NSString *developerAccountUser; // @synthesize developerAccountUser=_developerAccountUser;
@property(retain) NSString *build; // @synthesize build=_build;
@property(retain) NSString *versionNumber; // @synthesize versionNumber=_versionNumber;
@property(retain) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property(retain) NSFileHandle *standardError; // @synthesize standardError=_standardError;
@property(retain) NSFileHandle *standardOutput; // @synthesize standardOutput=_standardOutput;
@property(retain) NSFileHandle *standardInput; // @synthesize standardInput=_standardInput;
@property(retain) NSArray *arguments; // @synthesize arguments=_arguments;
@property(retain) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (BOOL)_ensureRequiredArgumentsWithError:(id *)arg1;
- (BOOL)_parseArgumentsWithError:(id *)arg1;
- (BOOL)_exportCrashPointsWithProductManager:(id)arg1 outError:(id *)arg2;
- (id)_crashPointsForProductManager:(id)arg1 versionedProducts:(id)arg2 session:(id)arg3 outError:(id *)arg4;
- (id)_filteredVersionedProductsWithProductManager:(id)arg1;
- (BOOL)_printProductsWithProductManager:(id)arg1 outError:(id *)arg2;
- (id)_allCommandsAsString;
- (id)_stringFromCommand:(long long)arg1;
- (long long)_commandFromString:(id)arg1 error:(id *)arg2;
- (BOOL)runWithError:(id *)arg1;

@end

