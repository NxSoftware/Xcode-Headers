//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <IDEFoundation/IDELocalizationWorkContext.h>

#import <IDEFoundation/IDELocalizationWorkProvider-Protocol.h>

@class NSDictionary, NSString;

@interface IDELocalizationWorkReadStrings : IDELocalizationWorkContext <IDELocalizationWorkProvider>
{
}

+ (id)contextWithParent:(id)arg1 path:(id)arg2;
- (id)work;
@property(readonly) NSDictionary *comments;
@property(readonly) NSDictionary *strings;
- (id)path;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

