//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <IDEFoundation/IDEIndexDataSource.h>

#import <IDEModelEditor/NSFileManagerDelegate-Protocol.h>

@class NSString;

@interface IDEDataModelIndexSource : IDEIndexDataSource <NSFileManagerDelegate>
{
}

+ (id)dataSourceVersion;
- (BOOL)generateDataForJob:(id)arg1;
- (void)_setUpStaticData;
- (void)_indexEntity:(id)arg1 forFile:(id)arg2 index:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

