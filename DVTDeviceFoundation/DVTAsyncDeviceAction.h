//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DVTDeviceFoundation/DVTDeviceAction-Protocol.h>

@class NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface DVTAsyncDeviceAction : NSObject <DVTDeviceAction>
{
    NSString *_identifier;
    NSString *_title;
    NSMutableDictionary *_parameterMap;
    NSMutableDictionary *_operationMap;
    NSObject<OS_dispatch_queue> *_operationQueue;
}

- (void).cxx_destruct;
- (id)performForDevice:(id)arg1 withArguments:(id)arg2 infoRequestHandler:(CDUnknownBlockType)arg3;
- (void)cancelForDevice:(id)arg1;
- (void)performForDevice:(id)arg1 infoRequestHandler:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (unsigned long long)currentStateForDevice:(id)arg1;
- (_Bool)shouldEnableActionForDevice:(id)arg1;
- (_Bool)shouldShowActionForDevice:(id)arg1;
- (id)tooltipForDevice:(id)arg1;
- (id)titleForDevice:(id)arg1;
- (id)confirmationMessageForDevice:(id)arg1;
@property(readonly, nonatomic) NSString *title;
@property(readonly, nonatomic) NSString *identifier;
- (id)defaultValueForDevice:(id)arg1 ofParameterWithKey:(id)arg2;
- (void)addParameterWithKey:(id)arg1 userPrompt:(id)arg2 defaultValue:(id)arg3;
- (id)initWithIdentifier:(id)arg1 title:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

