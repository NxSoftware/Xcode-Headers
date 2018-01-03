//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEFoundation/IDEStreamConsumer-Protocol.h>
#import <IDEFoundation/IDEStreamPublisher-Protocol.h>

@class NSString;
@protocol IDEStreamConsumer;

@interface IDEStream : NSObject <IDEStreamPublisher, IDEStreamConsumer>
{
    BOOL _wasStarted;
    BOOL _cancelled;
    BOOL _errored;
    BOOL _completed;
    id <IDEStreamConsumer> _consumer;
}

+ (void)initialize;
+ (id)streamWithError:(id)arg1;
+ (id)streamWithFastEnumeration:(id)arg1;
+ (id)emptyStream;
@property BOOL completed; // @synthesize completed=_completed;
@property BOOL errored; // @synthesize errored=_errored;
@property(getter=isCancelled) BOOL cancelled; // @synthesize cancelled=_cancelled;
@property BOOL wasStarted; // @synthesize wasStarted=_wasStarted;
@property(retain) id <IDEStreamConsumer> consumer; // @synthesize consumer=_consumer;
- (void).cxx_destruct;
- (void)onCancelled;
- (void)onCompleted;
- (void)onError:(id)arg1;
- (void)onNext:(id)arg1;
- (void)cancel;
- (BOOL)_finished;
- (void)subscribeConsumer:(id)arg1;
- (id)deleteItemsWorkForPathStrings;
- (id)createDirectoriesWorkForPathStrings;
- (id)systemTaskWorkForContexts;
- (id)collectInWorkContext:(id)arg1;
- (id)collectFirstInWorkContext:(id)arg1 forKey:(id)arg2;
- (id)collectInWorkContext:(id)arg1 forArrayKey:(id)arg2;
- (id)writeDataWorkForContexts;
- (id)join;
- (id)asyncMap:(CDUnknownBlockType)arg1;
- (id)map:(CDUnknownBlockType)arg1;
- (id)filter:(CDUnknownBlockType)arg1;
- (id)disperse;
- (id)collectInArray;
- (id)collectIn:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (id)subscribeOnNext:(CDUnknownBlockType)arg1 onError:(CDUnknownBlockType)arg2 onCompleted:(CDUnknownBlockType)arg3 onCancelled:(CDUnknownBlockType)arg4;
- (id)extractLocStringsWorkForContexts;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

