//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <IDEFoundation/NSObject-Protocol.h>

@class IDEDebugSession, NSArray, NSString;

@protocol IDEIssueRuntimeGroupingObject <NSObject>
@property(readonly) IDEDebugSession *debugSession;
@property(copy) NSString *name;

@optional
@property(copy) NSArray *subgroupTypeIdentifiers;
@property(copy) id issueTypeIdentifier;
@end

