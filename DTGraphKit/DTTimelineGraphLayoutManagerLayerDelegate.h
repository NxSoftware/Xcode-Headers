//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DTGraphKit/CALayerDelegate-Protocol.h>

@class DTTimelineGraphLayoutManager, NSString;

__attribute__((visibility("hidden")))
@interface DTTimelineGraphLayoutManagerLayerDelegate : NSObject <CALayerDelegate>
{
    DTTimelineGraphLayoutManager *_layoutManager;
}

- (void).cxx_destruct;
- (id)actionForLayer:(id)arg1 forKey:(id)arg2;
- (id)initWithLayoutManager:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

