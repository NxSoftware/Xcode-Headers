//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <DVTInstrumentsFoundation/DTTapMessageHandler.h>

@class NSURL;

@interface DTDTraceTapMessageHandler : DTTapMessageHandler
{
    unsigned int _tapVersion;
    int _writeFD;
    long long _filePositionStart;
    long long _filePositionEnd;
    NSURL *_outputURL;
}

- (void).cxx_destruct;
- (id)messageReceived:(id)arg1;
- (void)dealloc;
- (id)initWithConfig:(id)arg1;

@end

