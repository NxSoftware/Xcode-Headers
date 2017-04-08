//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IBFieldEditorConfiguration, NSDictionary;

@interface IBInlineStringEditingContext : NSObject
{
    IBFieldEditorConfiguration *_fieldEditorConfiguration;
    CDUnknownBlockType _endEditingHandler;
    CDUnknownBlockType _titleRectCalculator;
    NSDictionary *_userInfo;
}

+ (id)contextWithConfiguration:(id)arg1 titleRectCalculator:(CDUnknownBlockType)arg2 endEditingHandler:(CDUnknownBlockType)arg3;
@property(copy) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(copy) CDUnknownBlockType titleRectCalculator; // @synthesize titleRectCalculator=_titleRectCalculator;
@property(copy) CDUnknownBlockType endEditingHandler; // @synthesize endEditingHandler=_endEditingHandler;
@property(copy) IBFieldEditorConfiguration *fieldEditorConfiguration; // @synthesize fieldEditorConfiguration=_fieldEditorConfiguration;
- (void).cxx_destruct;
- (id)initWithFieldEditorConfiguration:(id)arg1;

@end

