//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <DADocSetAccess/DSATextSearchResult.h>

@class DSADocSet;

__attribute__((visibility("hidden")))
@interface DSANodeSearchResult : DSATextSearchResult
{
    id _node_or_ID;
    DSADocSet *_docSet;
    BOOL _isTitleMatch;
}

- (void).cxx_destruct;
- (BOOL)isTitleMatch;
- (id)title;
- (id)docSet;
- (id)nearestNodeID;
- (id)parentNode;
- (id)node;
- (id)URL;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithNode:(id)arg1 docSet:(id)arg2 relevance:(float)arg3 isTitleMatch:(BOOL)arg4;

@end

