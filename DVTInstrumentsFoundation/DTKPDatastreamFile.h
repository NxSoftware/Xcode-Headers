//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DVTInstrumentsFoundation/DTKPDatastream-Protocol.h>

@class NSString, NSURL;

@interface DTKPDatastreamFile : NSObject <DTKPDatastream>
{
    unsigned int _state;
    int _error;
    NSURL *_backingDirectory;
    NSURL *_fileName;
    unsigned int _fileIndex;
    int _wrFD;
    int _fileOwnership;
    BOOL _checkIfNeedCreateDirectory;
}

+ (BOOL)existsInDirectory:(id)arg1;
- (void).cxx_destruct;
- (int)peekAtRawDataWithError:(id *)arg1 block:(CDUnknownBlockType)arg2;
- (int)exportRawDataWithError:(id *)arg1 block:(CDUnknownBlockType)arg2;
- (int)importRawData:(const void *)arg1 bufferSize:(unsigned long long)arg2 error:(id *)arg3 destructor:(CDUnknownBlockType)arg4;
- (int)setWritingCompletedWithError:(id *)arg1;
- (BOOL)hasData;
- (void)dealloc;
- (id)createNextStream:(id *)arg1;
- (id)initFromDatastream:(id)arg1 backingDirectory:(id)arg2 retainFiles:(BOOL)arg3 error:(id *)arg4;
- (id)initFromDirectory:(id)arg1 error:(id *)arg2;
- (id)initWithBackingDirectory:(id)arg1 fileOwnership:(int)arg2 fileIndex:(unsigned int)arg3 error:(id *)arg4;
- (id)initWithBackingDirectory:(id)arg1 retainFiles:(BOOL)arg2 error:(id *)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

