//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEFoundation/IDESourceKitVariantDictionaryWrapper.h>

#import <IDEFoundation/IDESourceKitRenameRange-Protocol.h>

@class NSNumber;

@interface IDESourceKitResponseRenameRange : IDESourceKitVariantDictionaryWrapper <IDESourceKitRenameRange>
{
}

@property(readonly) NSNumber *argIndex;
@property(readonly) struct _sourcekit_uid_s *rawKind;
@property(readonly) long long endColumn;
@property(readonly) long long endLine;
@property(readonly) long long column;
@property(readonly) long long line;
@property(readonly) unsigned long long kind;

@end

