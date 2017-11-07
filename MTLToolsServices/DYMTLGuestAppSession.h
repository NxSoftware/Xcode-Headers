//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <GPUToolsServices/DYGuestAppSession.h>

@interface DYMTLGuestAppSession : DYGuestAppSession
{
    unsigned int _deviceWrapper;
    unsigned int _validationMode;
}

@property(nonatomic) unsigned int validationMode; // @synthesize validationMode=_validationMode;
@property(nonatomic) unsigned int deviceWrapper; // @synthesize deviceWrapper=_deviceWrapper;
- (id)newCaptureSessionWithArchive:(id)arg1;
- (id)queryForGraphicsAPIUsage;
- (id)launch;
- (void)_handleTransportMessage:(id)arg1;
- (id)initWithGuestApp:(id)arg1 device:(id)arg2 deferLaunch:(BOOL)arg3;

@end

