//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DYTransportMessage;

@interface BufferedSendOperation : NSObject
{
    DYTransportMessage *message;
    DYTransportMessage *replyTo;
    struct dispatch_queue_s *queue;
    unsigned long long timeout;
    CDUnknownBlockType replyBlock;
}

@property(nonatomic) CDUnknownBlockType replyBlock; // @synthesize replyBlock;
@property(nonatomic) unsigned long long timeout; // @synthesize timeout;
@property(nonatomic) struct dispatch_queue_s *queue; // @synthesize queue;
@property(retain, nonatomic) DYTransportMessage *replyTo; // @synthesize replyTo;
@property(retain, nonatomic) DYTransportMessage *message; // @synthesize message;

@end

