//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <XCSCore/NSObject-Protocol.h>

@class GCDAsyncSocket, NSData, NSError, NSObject, NSString, NSURL;
@protocol OS_dispatch_queue;

@protocol GCDAsyncSocketDelegate <NSObject>

@optional
- (void)socket:(GCDAsyncSocket *)arg1 didReceiveTrust:(struct __SecTrust *)arg2 completionHandler:(void (^)(BOOL))arg3;
- (void)socketDidSecure:(GCDAsyncSocket *)arg1;
- (void)socketDidDisconnect:(GCDAsyncSocket *)arg1 withError:(NSError *)arg2;
- (void)socketDidCloseReadStream:(GCDAsyncSocket *)arg1;
- (double)socket:(GCDAsyncSocket *)arg1 shouldTimeoutWriteWithTag:(long long)arg2 elapsed:(double)arg3 bytesDone:(unsigned long long)arg4;
- (double)socket:(GCDAsyncSocket *)arg1 shouldTimeoutReadWithTag:(long long)arg2 elapsed:(double)arg3 bytesDone:(unsigned long long)arg4;
- (void)socket:(GCDAsyncSocket *)arg1 didWritePartialDataOfLength:(unsigned long long)arg2 tag:(long long)arg3;
- (void)socket:(GCDAsyncSocket *)arg1 didWriteDataWithTag:(long long)arg2;
- (void)socket:(GCDAsyncSocket *)arg1 didReadPartialDataOfLength:(unsigned long long)arg2 tag:(long long)arg3;
- (void)socket:(GCDAsyncSocket *)arg1 didReadData:(NSData *)arg2 withTag:(long long)arg3;
- (void)socket:(GCDAsyncSocket *)arg1 didConnectToUrl:(NSURL *)arg2;
- (void)socket:(GCDAsyncSocket *)arg1 didConnectToHost:(NSString *)arg2 port:(unsigned short)arg3;
- (void)socket:(GCDAsyncSocket *)arg1 didAcceptNewSocket:(GCDAsyncSocket *)arg2;
- (NSObject<OS_dispatch_queue> *)newSocketQueueForConnectionFromAddress:(NSData *)arg1 onSocket:(GCDAsyncSocket *)arg2;
@end

