//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <IDEModelEditor/NSObject-Protocol.h>

@class DVTStateToken, NSDictionary, NSMutableDictionary;

@protocol DVTStatefulObject <NSObject>
+ (long long)version;
+ (void)configureStateSavingObjectPersistenceByName:(NSMutableDictionary *)arg1;
- (void)commitStateToDictionary:(NSMutableDictionary *)arg1;
- (void)revertStateWithDictionary:(NSDictionary *)arg1;
- (void)setStateToken:(DVTStateToken *)arg1;
- (DVTStateToken *)stateToken;

@optional
@property(readonly) BOOL canRevertWithEmptyStateDictionary;
@end

