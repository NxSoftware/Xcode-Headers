//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface DVTDeviceOperation : NSObject
{
    BOOL _operationIsUserInitiated;
    NSString *_deviceIdentifier;
    NSString *_operationDescription;
    long long _progress;
}

@property long long progress; // @synthesize progress=_progress;
@property(copy) NSString *operationDescription; // @synthesize operationDescription=_operationDescription;
@property(readonly, nonatomic) NSString *deviceIdentifier; // @synthesize deviceIdentifier=_deviceIdentifier;
@property BOOL operationIsUserInitiated; // @synthesize operationIsUserInitiated=_operationIsUserInitiated;
- (void).cxx_destruct;
- (id)initWithDeviceIdentifier:(id)arg1 isUserInitiated:(BOOL)arg2;

@end

