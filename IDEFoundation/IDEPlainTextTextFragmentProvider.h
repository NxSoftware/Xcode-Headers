//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <IDEFoundation/IDETextFragmentProvider.h>

@interface IDEPlainTextTextFragmentProvider : IDETextFragmentProvider
{
}

+ (BOOL)retainsSeed;
+ (void)generateTextFragmentProviderSeedForFilePath:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)documentLocationForToken:(long long)arg1 documentURL:(id)arg2 timestamp:(id)arg3 range:(struct _NSRange)arg4;
- (void)enumerateTextFragments:(CDUnknownBlockType)arg1;
- (id)seed;

@end

