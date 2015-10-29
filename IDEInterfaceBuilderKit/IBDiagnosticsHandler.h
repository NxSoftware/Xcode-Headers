//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IBDocument, NSDate, NSMutableArray, NSString;

@interface IBDiagnosticsHandler : NSObject
{
    NSMutableArray *_additionalDiagnosticFileHandlers;
    NSMutableArray *_additionalLogSections;
    NSDate *_creationDate;
    NSString *_fileNamePrefix;
    IBDocument *_document;
}

@property(retain, nonatomic) IBDocument *document; // @synthesize document=_document;
@property(readonly, nonatomic) NSString *fileNamePrefix; // @synthesize fileNamePrefix=_fileNamePrefix;
- (void).cxx_destruct;
- (id)pathToDiagnosticsDirectoryAfterWritingDiagnostics:(id *)arg1;
- (void)_finishConfiguring;
- (id)pathToZipFileAfterWritingDiagnostics:(id *)arg1;
- (BOOL)_writeLogFileToDiagnosticsAtPath:(id)arg1 error:(id *)arg2;
- (void)_addSectionWithBody:(id)arg1 toLog:(id)arg2 withHeading:(id)arg3;
- (BOOL)_removeOriginalDiagnosticsAtPath:(id)arg1 error:(id *)arg2;
- (id)_zipDiagnosticsAtPath:(id)arg1 error:(id *)arg2;
- (BOOL)_copyConsoleLogToDiagnosticsAtPath:(id)arg1 error:(id *)arg2;
- (BOOL)_writeCopyOfDocument:(id)arg1 toDiagnosticsAtPath:(id)arg2 error:(id *)arg3;
- (id)_pathForDiagnosticsAfterCreating:(id *)arg1;
- (void)addLogSectionWithHeading:(id)arg1 bodyBlock:(CDUnknownBlockType)arg2;
- (void)addLogSectionWithHeading:(id)arg1 body:(id)arg2;
- (void)addLogSectionWithHeading:(id)arg1 bodyFormat:(id)arg2;
- (void)addDiagnosticsFileHandler:(CDUnknownBlockType)arg1;
- (id)initWithFileNamePrefix:(id)arg1;

@end

