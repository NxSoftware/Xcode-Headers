//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEFoundation/IDEBatchFindPlistCodable-Protocol.h>
#import <IDEFoundation/NSCopying-Protocol.h>

@interface IDEBatchFindFileSource : NSObject <IDEBatchFindPlistCodable, NSCopying>
{
}

+ (id)decodeFromPropertyListRepresentation:(id)arg1;
+ (id)propertyListIdentifier;
+ (id)plistDecoder;
- (void)accessContentGroupsWithWorkspace:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)accumulateContributingSources:(id)arg1;
- (void)accessOrderedContentGroupsForSources:(id)arg1 withWorkspace:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)accessTextFragmentIndexContentSnapshotsWithWorkspace:(id)arg1 filter:(CDUnknownBlockType)arg2 andCompletionHandler:(CDUnknownBlockType)arg3;
- (id)buildTextIndexSnapshotsByUniquingAndApplyingFilter:(CDUnknownBlockType)arg1 toContentGroups:(id)arg2 representingTextIndexes:(id)arg3;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToFileSource:(id)arg1;
- (BOOL)isEqualToFileSourceWithIdenticalClass:(id)arg1;
- (id)propertyListRepresentation;

@end

