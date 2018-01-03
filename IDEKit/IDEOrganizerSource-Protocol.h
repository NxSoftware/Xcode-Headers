//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/DVTStatefulObject-Protocol.h>
#import <IDEKit/NSObject-Protocol.h>

@class DVTFileDataType, NSString, NSURL, NSWindowController;

@protocol IDEOrganizerSource <NSObject, DVTStatefulObject>

@optional
- (void)organizerSourceWillCloseInWindowController:(NSWindowController *)arg1;
- (void)organizerSourceWillAppearInWindowController:(NSWindowController *)arg1;
- (void)openFileURL:(NSURL *)arg1 withFileType:(DVTFileDataType *)arg2;
- (void)searchWithString:(NSString *)arg1;
@end

