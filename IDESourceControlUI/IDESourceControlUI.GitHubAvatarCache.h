//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDESourceControlUI/DVTSourceControlAuthorImageProvider-Protocol.h>

@interface IDESourceControlUI.GitHubAvatarCache : NSObject <DVTSourceControlAuthorImageProvider>
{
    // Error parsing type: , name: _enabled
    // Error parsing type: , name: avatarCache
    // Error parsing type: , name: invalidAfterNumberOfDays
    // Error parsing type: , name: fetcher
    // Error parsing type: , name: updateQueue
    // Error parsing type: , name: inflightFetches
}

+ (id)imagesCachePath;
+ (id)cachePath;
+ (id)shared;
- (CDUnknownBlockType).cxx_destruct;
- (id)avatarForAuthor:(id)arg1;
- (void)clearCache;
- (void)updatePersistentCache;
- (id)init;
@property(nonatomic, readonly) long long invalidAfterNumberOfDays; // @synthesize invalidAfterNumberOfDays;
@property(nonatomic) BOOL enabled;

@end

