//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <DVTInstrumentsFoundation/DTKPSession.h>

#import "DTKPSessionRecordable.h"

@class NSString;

@interface DTKPSessionLogging : DTKPSession <DTKPSessionRecordable>
{
}

- (int)importDataBuffer:(void *)arg1 bufferSize:(unsigned long long)arg2 error:(id *)arg3;
- (BOOL)isPaused;
- (BOOL)isActive;
- (int)stop:(id *)arg1;
- (int)resume:(id *)arg1;
- (int)pause:(id *)arg1;
- (int)start:(id *)arg1;
- (id)initAsFileBackedWithDirectory:(id)arg1 retainFiles:(BOOL)arg2 error:(id *)arg3;
- (id)initAsMemoryBackedWithError:(id *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

