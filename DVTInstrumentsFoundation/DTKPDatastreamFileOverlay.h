//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DVTInstrumentsFoundation/DTKPDatastream-Protocol.h>

@class NSString, NSURL;

@interface DTKPDatastreamFileOverlay : NSObject <DTKPDatastream>
{
    unsigned int _state;
    int _error;
    NSURL *_overlayFile;
    long long _startingOffset;
    long long _endingOffset;
}

- (void).cxx_destruct;
- (int)peekAtRawDataWithError:(id *)arg1 block:(CDUnknownBlockType)arg2;
- (int)exportRawDataWithError:(id *)arg1 block:(CDUnknownBlockType)arg2;
- (int)importRawData:(const void *)arg1 bufferSize:(unsigned long long)arg2 error:(id *)arg3 destructor:(CDUnknownBlockType)arg4;
- (int)setWritingCompletedWithError:(id *)arg1;
- (BOOL)hasData;
- (id)createNextStream:(id *)arg1;
- (id)initWithOverlayFile:(id)arg1 startingFileOffset:(long long)arg2 error:(id *)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

