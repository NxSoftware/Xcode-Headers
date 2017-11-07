//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableData;
@protocol IDETestingDiagnosticLogWriter, OS_dispatch_queue, OS_dispatch_source;

@interface IDETestingDiagnosticLogArbiter : NSObject
{
    BOOL _preserveAllMessages;
    NSObject<OS_dispatch_queue> *_queue;
    id <IDETestingDiagnosticLogWriter> _writer;
    unsigned long long _state;
    NSMutableArray *_buffers;
    NSMutableData *_currentBuffer;
    unsigned long long _maxLoggedBytes;
    unsigned long long _maxBufferedBytes;
    double _contextInterval;
    unsigned long long _totalBytesLogged;
    unsigned long long _totalBytesBuffered;
    NSObject<OS_dispatch_source> *_rotationTimer;
    unsigned long long _bufferedMessages;
    unsigned long long _bufferedMessagesInCurrentBuffer;
}

@property BOOL preserveAllMessages; // @synthesize preserveAllMessages=_preserveAllMessages;
@property unsigned long long bufferedMessagesInCurrentBuffer; // @synthesize bufferedMessagesInCurrentBuffer=_bufferedMessagesInCurrentBuffer;
@property unsigned long long bufferedMessages; // @synthesize bufferedMessages=_bufferedMessages;
@property(retain) NSObject<OS_dispatch_source> *rotationTimer; // @synthesize rotationTimer=_rotationTimer;
@property unsigned long long totalBytesBuffered; // @synthesize totalBytesBuffered=_totalBytesBuffered;
@property unsigned long long totalBytesLogged; // @synthesize totalBytesLogged=_totalBytesLogged;
@property double contextInterval; // @synthesize contextInterval=_contextInterval;
@property unsigned long long maxBufferedBytes; // @synthesize maxBufferedBytes=_maxBufferedBytes;
@property unsigned long long maxLoggedBytes; // @synthesize maxLoggedBytes=_maxLoggedBytes;
@property(retain) NSMutableData *currentBuffer; // @synthesize currentBuffer=_currentBuffer;
@property(retain) NSMutableArray *buffers; // @synthesize buffers=_buffers;
@property unsigned long long state; // @synthesize state=_state;
@property __weak id <IDETestingDiagnosticLogWriter> writer; // @synthesize writer=_writer;
@property(retain) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void).cxx_destruct;
- (void)dispatchQueueBarrier:(CDUnknownBlockType)arg1;
- (void)_on_queue_finishLogging:(CDUnknownBlockType)arg1;
- (void)finishLogging:(CDUnknownBlockType)arg1;
- (void)_on_queue_flushBufferedMessages;
- (void)flushBufferedMessages;
- (void)_on_queue_dumpBuffersPreservingContextInterval;
- (void)dumpBuffersPreservingContextInterval;
- (void)_on_queue_startBuffering;
- (void)startBuffering;
- (void)_on_queue_startLogging;
- (void)startLogging;
- (void)_on_queue_flushBuffers;
- (void)_on_queue_rotateBuffers;
- (void)_on_queue_writeData:(id)arg1;
- (id)_on_queue_dataForTruncatedMessage:(id)arg1 withLength:(unsigned long long)arg2;
- (void)_on_queue_logMessage:(id)arg1;
- (void)logMessage:(id)arg1;
- (id)initWithWriter:(id)arg1 maxLoggedBytes:(unsigned long long)arg2 maxBufferedBytes:(unsigned long long)arg3 contextInterval:(double)arg4;
- (void)dealloc;

@end

