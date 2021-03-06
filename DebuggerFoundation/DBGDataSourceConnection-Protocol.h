//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <DebuggerFoundation/NSObject-Protocol.h>

@class DBGHierarchyRequest;
@protocol DBGDataSourceConnectionDelegate;

@protocol DBGDataSourceConnection <NSObject>
+ (Class)matchingDataCoordinatorClass;
@property __weak id <DBGDataSourceConnectionDelegate> delegate;
- (BOOL)supportsIncrementalFetching;
- (BOOL)supportsLiveDebugging;
- (BOOL)supportsEditing;
- (BOOL)isDataProvider;
- (void)performRequest:(DBGHierarchyRequest *)arg1;
@end

