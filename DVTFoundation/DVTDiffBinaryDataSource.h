//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <DVTFoundation/DVTDiffDataSource.h>

@class DVTFilePath;

@interface DVTDiffBinaryDataSource : DVTDiffDataSource
{
    CDStruct_3dd9eb72 _tokenStorage[5];
}

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)_setTokenStorage:(CDStruct_3dd9eb72 [5])arg1;
- (long long)numberOfDiffTokensInDiffDescriptor:(id)arg1;
- (void)getDiffTokens:(CDStruct_3dd9eb72 *)arg1 inDiffDescriptor:(id)arg2 inRange:(struct _NSRange)arg3;
- (CDStruct_3dd9eb72)diffTokenInDiffDescriptor:(id)arg1 atIndex:(long long)arg2;
@property(readonly) DVTFilePath *contentFilePath;
- (void)_setupHash;
- (id)initWithContentFilePath:(id)arg1;

@end

