//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <XCSAdministration/XCSInitializationOperation.h>

@class NSString;

@interface XCSCreateDirectoriesOperation : XCSInitializationOperation
{
    NSString *_sharedDataPath;
}

@property(retain, nonatomic) NSString *sharedDataPath; // @synthesize sharedDataPath=_sharedDataPath;
- (void).cxx_destruct;
- (void)undo;
- (id)undoStatusDescription;
- (void)run;
- (BOOL)sharedDataSymlinkNeeded;
- (BOOL)dataExistsAtPreviousLocation;
- (id)statusDescription;

@end
