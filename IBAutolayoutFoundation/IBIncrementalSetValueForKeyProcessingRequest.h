//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IBAutolayoutFoundation/IBSceneUpdateProcessingRequest.h>

@class NSObject, NSString;
@protocol IBBinaryArchiving;

@interface IBIncrementalSetValueForKeyProcessingRequest : IBSceneUpdateProcessingRequest
{
    NSString *_objectID;
    NSString *_keyPath;
    NSObject<IBBinaryArchiving> *_value;
}

@property(readonly, nonatomic) NSObject<IBBinaryArchiving> *value; // @synthesize value=_value;
@property(readonly, copy, nonatomic) NSString *keyPath; // @synthesize keyPath=_keyPath;
@property(readonly, copy, nonatomic) NSString *objectID; // @synthesize objectID=_objectID;
- (void).cxx_destruct;
- (BOOL)requiresSynchronousResultProcessing;
- (void)encodeWithBinaryArchiver:(id)arg1;
- (id)initWithBinaryUnarchiver:(id)arg1;
- (id)initWithObjectID:(id)arg1 keyPath:(id)arg2 value:(id)arg3;
- (id)initWithResultPhase:(long long)arg1 postProcessingBlock:(CDUnknownBlockType)arg2;

@end

