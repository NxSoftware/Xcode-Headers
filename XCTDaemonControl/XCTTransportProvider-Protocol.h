//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <XCTDaemonControl/XCTConfigurableDebugLogger-Protocol.h>

@protocol XCTTransportProvider <XCTConfigurableDebugLogger>
- (void)invalidate;
- (void)makeTransportWithCompletion:(void (^)(DTXTransport *, NSError *))arg1;
@end

