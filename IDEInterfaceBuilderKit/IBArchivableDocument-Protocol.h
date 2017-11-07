//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <IDEInterfaceBuilderKit/NSObject-Protocol.h>

@class IBDocumentArchiver, NSArray, NSError, NSString;

@protocol IBArchivableDocument <NSObject>
- (NSError *)documentArchiver:(IBDocumentArchiver *)arg1 errorForArchivingIssues:(NSArray *)arg2;
- (NSString *)documentArchiver:(IBDocumentArchiver *)arg1 issueTextForUnknownEnumeratedValue:(long long)arg2 fromEnumeration:(NSString *)arg3 forKey:(NSString *)arg4;
- (void)documentArchiver:(IBDocumentArchiver *)arg1 didArchiveObject:(id)arg2;
- (void)documentArchiver:(IBDocumentArchiver *)arg1 willArchiveObject:(id)arg2;
- (NSString *)documentArchiver:(IBDocumentArchiver *)arg1 referenceIDForObject:(id)arg2 referenceType:(NSString *)arg3 forFirstReferencingThroughKey:(NSString *)arg4;
- (void)archiveDocument:(IBDocumentArchiver *)arg1;
@end

