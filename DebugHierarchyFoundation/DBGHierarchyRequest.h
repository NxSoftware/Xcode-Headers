//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DebugHierarchyRequestPredicate, NSArray, NSDate, NSDictionary, NSString;

@interface DBGHierarchyRequest : NSObject
{
    NSString *_identifier;
    NSString *_name;
    long long _type;
    long long _priority;
    long long _status;
    double _timeout;
    DebugHierarchyRequestPredicate *_predicate;
    BOOL _spinTargetRunloopAfterRequest;
    NSDictionary *_payload;
    CDUnknownBlockType _progressHandler;
    CDUnknownBlockType _completion;
    NSArray *_logs;
    NSString *_statusMessageActivityPhrase;
    BOOL _wantsUserFacingStatusUpdates;
    NSDate *_executionStartDate;
    NSDate *_executionEndDate;
}

+ (id)requestWithType:(long long)arg1 predicate:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (id)requestWithDictionary:(id)arg1;
@property(retain) NSDate *executionEndDate; // @synthesize executionEndDate=_executionEndDate;
@property(retain) NSDate *executionStartDate; // @synthesize executionStartDate=_executionStartDate;
@property BOOL wantsUserFacingStatusUpdates; // @synthesize wantsUserFacingStatusUpdates=_wantsUserFacingStatusUpdates;
@property(retain) NSString *statusMessageActivityPhrase; // @synthesize statusMessageActivityPhrase=_statusMessageActivityPhrase;
@property(retain) NSArray *logs; // @synthesize logs=_logs;
@property(copy) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(copy) CDUnknownBlockType progressHandler; // @synthesize progressHandler=_progressHandler;
@property double timeout; // @synthesize timeout=_timeout;
@property(readonly) NSDictionary *payload; // @synthesize payload=_payload;
@property BOOL spinTargetRunloopAfterRequest; // @synthesize spinTargetRunloopAfterRequest=_spinTargetRunloopAfterRequest;
@property(readonly) DebugHierarchyRequestPredicate *predicate; // @synthesize predicate=_predicate;
@property long long status; // @synthesize status=_status;
@property(readonly) long long priority; // @synthesize priority=_priority;
@property(readonly) long long type; // @synthesize type=_type;
@property(retain) NSString *name; // @synthesize name=_name;
@property(readonly) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (id)debugDescription;
- (id)humanReadableStatusMessage;
- (void)addLogEntry:(id)arg1;
- (id)dictionaryRepresentation;
- (void)cancel;
- (BOOL)isEqual:(id)arg1;
- (id)init;
- (id)_initWithType:(long long)arg1 predicate:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)initWithDictionary:(id)arg1;

@end

