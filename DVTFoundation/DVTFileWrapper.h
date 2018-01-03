//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSFileWrapper.h>

@class DVTFilePath;

@interface DVTFileWrapper : NSFileWrapper
{
    DVTFilePath *_filePath;
    CDUnknownBlockType _updateFilePathBlock;
}

@property(copy) CDUnknownBlockType updateFilePathBlock; // @synthesize updateFilePathBlock=_updateFilePathBlock;
@property(retain) DVTFilePath *filePath; // @synthesize filePath=_filePath;
- (void).cxx_destruct;
- (id)addWrapper:(id)arg1;
- (void)_updateChildFilePaths;
- (id)initWithURL:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
- (BOOL)writeToURL:(id)arg1 options:(unsigned long long)arg2 originalContentsURL:(id)arg3 error:(id *)arg4;

@end

