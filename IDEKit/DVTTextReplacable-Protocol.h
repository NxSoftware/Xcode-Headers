//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <IDEKit/NSObject-Protocol.h>

@class NSArray, NSString, NSURL;

@protocol DVTTextReplacable <NSObject>
- (BOOL)replaceFindResults:(NSArray *)arg1 withString:(NSString *)arg2 withError:(id *)arg3;

@optional
- (BOOL)replaceFindResults:(NSArray *)arg1 inSelection:(struct _NSRange)arg2 withString:(NSString *)arg3 withError:(id *)arg4;
- (BOOL)replaceTextWithContentsOfURL:(NSURL *)arg1 error:(id *)arg2;
@end

