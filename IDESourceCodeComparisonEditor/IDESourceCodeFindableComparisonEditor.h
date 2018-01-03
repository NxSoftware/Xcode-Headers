//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDESourceCodeComparisonEditor/IDESourceCodeComparisonEditor.h>

#import <IDESourceCodeComparisonEditor/DVTFindBarFindable-Protocol.h>

@class NSString;

@interface IDESourceCodeFindableComparisonEditor : IDESourceCodeComparisonEditor <DVTFindBarFindable>
{
}

+ (long long)version;
+ (void)configureStateSavingObjectPersistenceByName:(id)arg1;
- (id)startingLocationForFindBar:(id)arg1 findingBackwards:(BOOL)arg2;
- (void)dvtFindBar:(id)arg1 didUpdateCurrentResult:(id)arg2;
- (void)dvtFindBar:(id)arg1 didUpdateResults:(id)arg2;
- (BOOL)providesOwnFindBar;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

