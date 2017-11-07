//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString, NSURL;

@interface XCSAdministration.ProcessDescription : NSObject
{
    // Error parsing type: , name: command
    // Error parsing type: , name: arguments
    // Error parsing type: , name: workingDirectory
    // Error parsing type: , name: username
    // Error parsing type: , name: allowNonZeroCodes
    // Error parsing type: , name: captureStandardOutput
    // Error parsing type: , name: captureStandardError
}

- (CDUnknownBlockType).cxx_destruct;
- (id)init;
@property(nonatomic, readonly) NSString *description;
@property(nonatomic, readonly) NSString *launchPath;
@property(nonatomic, readonly) NSArray *argumentStrings;
- (id)initWithCommand:(id)arg1 arguments:(id)arg2 workingDirectory:(id)arg3;
@property(nonatomic) BOOL captureStandardError; // @synthesize captureStandardError;
@property(nonatomic) BOOL captureStandardOutput; // @synthesize captureStandardOutput;
@property(nonatomic) BOOL allowNonZeroCodes; // @synthesize allowNonZeroCodes;
@property(nonatomic, copy) NSString *username; // @synthesize username;
@property(nonatomic, copy) NSURL *workingDirectory; // @synthesize workingDirectory;
@property(nonatomic, copy) NSArray *arguments; // @synthesize arguments;
@property(nonatomic, copy) NSString *command; // @synthesize command;

@end

