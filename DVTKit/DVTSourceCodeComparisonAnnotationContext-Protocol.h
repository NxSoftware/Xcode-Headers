//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <DVTKit/NSObject-Protocol.h>

@class DVTDiffDescriptor, DVTDiffSession, NSURL;

@protocol DVTSourceCodeComparisonAnnotationContext <NSObject>
@property(readonly) __weak DVTDiffSession *diffSession;
@property(readonly) __weak DVTDiffDescriptor *diffDescriptor;
@property(readonly) long long dataSourceType;
@property(readonly) NSURL *documentURL;
@end

