//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <IDESourceControlUI/NSObject-Protocol.h>

@class DVTSourceControlAuthor, DVTSourceControlRevision, NSDate, NSString;

@protocol DVTSourceControlLogItem <NSObject>
@property(nonatomic, readonly) unsigned long long revisionType;
@property(nonatomic, readonly) BOOL isMerge;
@property(nonatomic, readonly) NSString *message;
@property(nonatomic, readonly) NSDate *date;
@property(nonatomic, readonly) DVTSourceControlRevision *revision;
@property(nonatomic, readonly) DVTSourceControlAuthor *author;
@end

