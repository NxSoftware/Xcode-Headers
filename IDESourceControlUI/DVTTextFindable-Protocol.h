//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <IDESourceControlUI/NSObject-Protocol.h>

@class DVTDocumentLocation, DVTFindDescriptor, DVTFindResult;

@protocol DVTTextFindable <NSObject>
- (DVTFindResult *)findStringMatchingDescriptor:(DVTFindDescriptor *)arg1 backwards:(BOOL)arg2 from:(DVTDocumentLocation *)arg3 to:(DVTDocumentLocation *)arg4;

@optional
- (long long)compareFindableLocation:(DVTDocumentLocation *)arg1 withLocation:(DVTDocumentLocation *)arg2;
@property(nonatomic) unsigned long long supportedMatchingOptions;
@end

