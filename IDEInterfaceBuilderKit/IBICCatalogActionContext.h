//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSSet;

@interface IBICCatalogActionContext : NSObject
{
    NSSet *_focusedItems;
    long long _sourceUpdateStrategy;
}

@property(readonly) long long sourceUpdateStrategy; // @synthesize sourceUpdateStrategy=_sourceUpdateStrategy;
@property(readonly) NSSet *focusedItems; // @synthesize focusedItems=_focusedItems;
- (void).cxx_destruct;
- (id)initWithFocusedItems:(id)arg1 sourceUpdateStrategy:(long long)arg2;

@end

