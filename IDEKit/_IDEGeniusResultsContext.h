//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEKit/DVTInvalidation-Protocol.h>

@class DVTStackBacktrace, IDEGeniusResultsGraphNode, IDENavigableItem, NSString;

@interface _IDEGeniusResultsContext : NSObject <DVTInvalidation>
{
    NSString *_geniusCategory;
    IDENavigableItem *_geniusRootNavigableItem;
    IDEGeniusResultsGraphNode *_geniusResultsGraphNode;
}

+ (void)initialize;
@property(retain, nonatomic) IDENavigableItem *geniusRootNavigableItem; // @synthesize geniusRootNavigableItem=_geniusRootNavigableItem;
@property(copy) NSString *geniusCategory; // @synthesize geniusCategory=_geniusCategory;
- (void).cxx_destruct;
- (void)primitiveInvalidate;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

