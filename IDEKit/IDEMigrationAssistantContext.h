//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEAssistantContext.h>

#import <IDEKit/DVTInvalidation-Protocol.h>

@class DVTStackBacktrace, IDEMigrationContext, NSString;

@interface IDEMigrationAssistantContext : IDEAssistantContext <DVTInvalidation>
{
    IDEMigrationContext *_migrationContext;
}

+ (Class)migrationContextClass;
+ (void)initialize;
@property(readonly) IDEMigrationContext *migrationContext; // @synthesize migrationContext=_migrationContext;
- (void).cxx_destruct;
- (void)setWorkspaceTabController:(id)arg1;
- (void)primitiveInvalidate;
- (id)init;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

