//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <IDEKit/NSObject-Protocol.h>

@class IDEContainer, NSSet;

@protocol IDEDefaultMediaLibrary <NSObject>
+ (NSSet *)allSupportedMediaFileDataTypes;
+ (id)mediaRepositoryForContainer:(IDEContainer *)arg1 fileDataTypes:(NSSet *)arg2;
@end

