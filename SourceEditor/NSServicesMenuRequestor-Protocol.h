//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SourceEditor/NSObject-Protocol.h>

@class NSArray, NSPasteboard;

@protocol NSServicesMenuRequestor <NSObject>

@optional
- (BOOL)readSelectionFromPasteboard:(NSPasteboard *)arg1;
- (BOOL)writeSelectionToPasteboard:(NSPasteboard *)arg1 types:(NSArray *)arg2;
@end

