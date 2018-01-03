//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GPUDebuggerFoundation/NSObject-Protocol.h>

@class NSString, NSURL;

@protocol DYPShaderSourceDocument <NSObject>
@property(readonly, nonatomic) BOOL isDocumentEdited;
@property(readonly, copy, nonatomic) NSString *editedSource;
@property(readonly, copy, nonatomic) NSURL *fileURL;
- (void)saveForOperation:(unsigned long long)arg1 withCompletionHandler:(void (^)(NSError *))arg2;
- (void)saveWithCompletionHandler:(void (^)(NSError *))arg1;
@end

