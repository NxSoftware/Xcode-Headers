//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <IDEFoundation/NSObject-Protocol.h>

@class NSError;

@protocol IDEStreamConsumer <NSObject>
- (void)onCancelled;
- (void)onCompleted;
- (void)onError:(NSError *)arg1;
- (void)onNext:(id)arg1;
@end

