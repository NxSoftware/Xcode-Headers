//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <IDEPlaygroundExecution/NSObject-Protocol.h>

@class DVTFilePath, NSString;

@protocol IDEPlaygroundAppBundle <NSObject>
@property(readonly) DVTFilePath *containerPath;
@property(readonly, copy) NSString *bundleIdentifier;
@property(readonly, copy) NSString *executableSubpath;
@property(readonly) DVTFilePath *appBundlePath;
- (BOOL)cleanUpAppBundle:(id *)arg1;
@end

