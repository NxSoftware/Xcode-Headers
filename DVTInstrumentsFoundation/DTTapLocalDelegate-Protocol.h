//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <DVTInstrumentsFoundation/NSObject-Protocol.h>

@class DTTapLocal, DTTapStatusMemo;

@protocol DTTapLocalDelegate <NSObject>
- (void)fetchDataForReason:(unsigned long long)arg1 block:(void (^)(DTTapMemo *, BOOL))arg2;
- (BOOL)canFetchWhileArchiving;
- (void)unpause;
- (void)pause;
- (void)stop;
- (void)start;
- (void)setTap:(DTTapLocal *)arg1;
- (DTTapStatusMemo *)validateConfig;

@optional
- (void)setTaskForPidBlock:(unsigned int (^)(int))arg1;
@end

