//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DTGraphKit/NSCacheDelegate-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _DTTimelineTileContextCBHandler : NSObject <NSCacheDelegate>
{
    struct TimelineViewContext *_owner;
}

- (void)cache:(id)arg1 willEvictObject:(id)arg2;
- (void)_syncMainThreadDiscard:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithContext:(struct TimelineViewContext *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

