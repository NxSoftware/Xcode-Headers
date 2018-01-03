//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEPlaygroundEditor/NSObject-Protocol.h>

@class IDEPlaygroundPageSharedContext, IDEToybox, NSArray, NSString;

@protocol IDEPlaygroundHostingDocument <NSObject>
@property(readonly, copy, nonatomic) NSArray *sourceCodePlaygroundSectionCharacterRanges;
@property(readonly, copy, nonatomic) NSArray *sourceCodePlaygroundSections;
@property(readonly, copy, nonatomic) NSArray *playgroundSections;
@property(readonly, nonatomic) unsigned long long lineEndings;
@property(readonly, copy, nonatomic) NSString *contents;
@property(readonly, copy, nonatomic) NSArray *executionIssues;
@property(readonly) unsigned long long executionState;
@property(readonly) IDEToybox *toybox;
@property(readonly, nonatomic) IDEPlaygroundPageSharedContext *playgroundPageContext;
@property(readonly, nonatomic) BOOL isLegacyDocument;

@optional
- (struct _NSRange)lineRangeForLineRange:(struct _NSRange)arg1 fromTimestamp:(double)arg2 toTimestamp:(double)arg3;
@end

