//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEFoundation/DVTInvalidation-Protocol.h>

@class DVTStackBacktrace, NSDictionary, NSString;

@interface IDECodeGenerator : NSObject <DVTInvalidation>
{
    NSDictionary *_userInfo;
}

+ (id)codeGeneratorWithIdentifier:(id)arg1;
+ (void)initialize;
@property(copy) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
- (void).cxx_destruct;
- (void)generateCodeForInputFile:(id)arg1 outputFilePath:(id)arg2 completionQueue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)generatedFilePathsForInputFilePath:(id)arg1 outputFilePath:(id)arg2 error:(id *)arg3;
- (void)primitiveInvalidate;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

