//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IBPlatform, IDEWorkspaceDocument, NSArray;

@interface IBWorkspaceDocumentAndPlatformReferenceKey : NSObject
{
    IDEWorkspaceDocument *_workspaceDocument;
    IBPlatform *_platform;
    NSArray *_toolchainIdentifiers;
}

@property(retain) NSArray *toolchainIdentifiers; // @synthesize toolchainIdentifiers=_toolchainIdentifiers;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToReferenceKey:(id)arg1;
- (id)initWithWorkspaceDocument:(id)arg1 platform:(id)arg2 toolchainIdentifiers:(id)arg3;

@end

