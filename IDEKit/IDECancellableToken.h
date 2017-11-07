//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEKit/DVTCancellable-Protocol.h>

@class NSString;

@interface IDECancellableToken : NSObject <DVTCancellable>
{
    BOOL _cancelled;
    CDUnknownBlockType _cancelAction;
}

@property(copy) CDUnknownBlockType cancelAction; // @synthesize cancelAction=_cancelAction;
@property(getter=isCancelled) BOOL cancelled; // @synthesize cancelled=_cancelled;
- (void).cxx_destruct;
- (void)cancel;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

