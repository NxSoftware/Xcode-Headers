//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <IBAutolayoutFoundation/IBSceneUpdateProcessingResult.h>

@class NSObject;
@protocol IBBinaryArchiving;

@interface IBValueForKeyProcessingResult : IBSceneUpdateProcessingResult
{
    NSObject<IBBinaryArchiving> *_value;
}

@property(readonly, nonatomic) NSObject<IBBinaryArchiving> *value; // @synthesize value=_value;
- (void).cxx_destruct;
- (void)encodeWithBinaryArchiver:(id)arg1;
- (id)initWithBinaryUnarchiver:(id)arg1;
- (id)initWithValue:(id)arg1;

@end

