//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEFoundation/IDECommandLineVerb.h>

@interface IDEFindCommandLineVerb : IDECommandLineVerb
{
}

+ (id)_filePathHierarchyForFilePath:(id)arg1;
+ (int)performWithEnvironment:(id)arg1;
+ (id)optionDefinitionsWithEnvironment:(id)arg1;
+ (id)filePathForLibraryWithName:(id)arg1 commandLineToolchainNames:(id)arg2 environmentVariables:(id)arg3 sdk:(id)arg4 diagnostics:(id *)arg5;
+ (id)filePathForExecutableWithName:(id)arg1 commandLineToolchainNames:(id)arg2 environmentVariables:(id)arg3 sdk:(id)arg4 diagnostics:(id *)arg5;

@end

