//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "DTTapServiceDelegate.h"

@class DTTapServiceMessageSender;

@interface DTDTraceTapServiceDelegate : NSObject <DTTapServiceDelegate>
{
    DTTapServiceMessageSender *_messageSender;
}

+ (void)registerCapabilities:(id)arg1;
- (void).cxx_destruct;
- (void)didStop;
- (id)willStartWithConfig:(id)arg1;
- (BOOL)requiresExpiredPIDCacheForConfig:(id)arg1;
- (id)createConfigWithPlist:(id)arg1;
- (id)initWithMessageSender:(id)arg1;

@end

