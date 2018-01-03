//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IBAutolayoutFoundation/IBAutolayoutOperationMarshallingRequest.h>

@class NSObject;
@protocol IBAutolayoutItem;

@interface IBAutolayoutAffectingConstraintsMarshallingRequest : IBAutolayoutOperationMarshallingRequest
{
    NSObject<IBAutolayoutItem> *_view;
    unsigned long long _orientationMask;
}

+ (id)requestWithMarshallableObjectPackage:(id)arg1 arbitrationUnit:(id)arg2 view:(id)arg3 orientationMask:(unsigned long long)arg4;
@property(readonly, nonatomic) unsigned long long orientationMask; // @synthesize orientationMask=_orientationMask;
@property(readonly, nonatomic) NSObject<IBAutolayoutItem> *view; // @synthesize view=_view;
- (void).cxx_destruct;
- (id)debugDescription;
- (void)encodeWithBinaryArchiver:(id)arg1;
- (id)initWithBinaryUnarchiver:(id)arg1;
- (id)initWithIdentifier:(id)arg1 marshallableObjectPackage:(id)arg2 arbitrationUnit:(id)arg3 view:(id)arg4 orientationMask:(unsigned long long)arg5;

@end

