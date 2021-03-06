//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableData;

@interface DocSetIndex : NSObject
{
    struct __SKIndex *_searchIndex;
    NSMutableData *_data;
}

+ (void)loadDefaultExtractorPlugIns;
- (void).cxx_destruct;
- (BOOL)addContentsOfDirectoryAtPath:(id)arg1 withRecursion:(BOOL)arg2;
- (BOOL)addDocumentAtPath:(id)arg1;
- (struct __SKIndex *)indexRef;
- (unsigned long long)termIDForTermString:(id)arg1;
- (id)termStringForTermID:(unsigned long long)arg1;
- (id)documentIDArrayForTermID:(unsigned long long)arg1;
- (unsigned long long)documentCountForTermID:(unsigned long long)arg1;
- (unsigned long long)maxTermID;
- (unsigned long long)frequencyForTermID:(unsigned long long)arg1 inDocumentID:(long long)arg2;
- (id)termIDArrayForDocumentID:(long long)arg1;
- (unsigned long long)termCountForDocumentID:(long long)arg1;
- (long long)maxDocumentID;
- (id)iteratorForParentDocument:(id)arg1;
- (BOOL)moveDocument:(id)arg1 toNewParentDocument:(id)arg2;
- (BOOL)renameDocument:(id)arg1 withName:(id)arg2;
- (id)documentForDocumentID:(long long)arg1;
- (long long)IDForDocument:(id)arg1;
- (int)stateForDocument:(id)arg1;
- (void)setProperties:(id)arg1 forDocument:(id)arg2;
- (id)propertiesForDocument:(id)arg1;
- (BOOL)removeDocument:(id)arg1;
- (BOOL)addDocument:(id)arg1 withMIMETypeHint:(id)arg2 canReplace:(BOOL)arg3;
- (BOOL)addDocument:(id)arg1 withText:(id)arg2 canReplace:(BOOL)arg3;
- (void)_loadDefaultExtractorPluginsIfNeeded;
- (unsigned long long)documentCount;
- (id)analysisProperties;
- (int)indexType;
- (BOOL)compact;
- (void)setMaximumBytesBeforeFlush:(unsigned long long)arg1;
- (unsigned long long)maximumBytesBeforeFlush;
- (BOOL)flush;
- (void)invalidate;
- (void)dealloc;
- (id)initExistingIndexWithMutableData:(id)arg1 indexName:(id)arg2;
- (id)initExistingReadOnlyIndexWithData:(id)arg1 indexName:(id)arg2;
- (id)initWithMutableData:(id)arg1 indexName:(id)arg2 indexType:(int)arg3 analysisProperties:(id)arg4;
- (id)initExistingIndexWithURL:(id)arg1 indexName:(id)arg2 writeAccess:(BOOL)arg3;
- (id)initWithURL:(id)arg1 indexName:(id)arg2 indexType:(int)arg3 analysisProperties:(id)arg4;
- (id)initWithSKIndexRef:(struct __SKIndex *)arg1;

@end

