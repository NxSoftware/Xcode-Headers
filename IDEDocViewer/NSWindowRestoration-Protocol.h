//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <IDEDocViewer/NSObject-Protocol.h>

@class NSCoder, NSString;

@protocol NSWindowRestoration <NSObject>
+ (void)restoreWindowWithIdentifier:(NSString *)arg1 state:(NSCoder *)arg2 completionHandler:(void (^)(NSWindow *, NSError *))arg3;
@end

