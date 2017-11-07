//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <iCloudSupport/NSURLConnectionDelegate-Protocol.h>

@class NSMutableData, NSString, NSURLConnection, iCloud;

@interface iCloudURLConnectionDelegate : NSObject <NSURLConnectionDelegate>
{
    iCloud *_owner;
    CDUnknownBlockType _completionBlock;
    CDUnknownBlockType _dataHandler;
    NSURLConnection *_connection;
    NSMutableData *_data;
}

+ (void)initialize;
@property(retain, nonatomic) NSMutableData *data; // @synthesize data=_data;
@property(retain, nonatomic) NSURLConnection *connection; // @synthesize connection=_connection;
@property(copy, nonatomic) CDUnknownBlockType dataHandler; // @synthesize dataHandler=_dataHandler;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(retain, nonatomic) iCloud *owner; // @synthesize owner=_owner;
- (void).cxx_destruct;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (id)initWithOwner:(id)arg1 dataHandler:(CDUnknownBlockType)arg2;
- (id)initWithOwner:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

