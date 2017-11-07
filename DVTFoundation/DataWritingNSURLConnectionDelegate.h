//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DVTFoundation/DVTInvalidation-Protocol.h>
#import <DVTFoundation/NSURLConnectionDelegate-Protocol.h>

@class DVTPromise, DVTStackBacktrace, NSFileHandle, NSString, NSURLResponse;

@interface DataWritingNSURLConnectionDelegate : NSObject <NSURLConnectionDelegate, DVTInvalidation>
{
    NSURLResponse *_lastResponse;
    unsigned long long _maxLength;
    NSFileHandle *_fileHandle;
    DVTPromise *_promise;
}

+ (void)initialize;
- (void).cxx_destruct;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)primitiveInvalidate;
- (id)initWithMaxLength:(unsigned long long)arg1 fileHandle:(id)arg2 promise:(id)arg3;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

