//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTInstrumentsFoundation/DTTapMessageHandler.h>

@class NSMutableArray;
@protocol DTKPDatastream;

@interface DTKTraceTapMessageHandler : DTTapMessageHandler
{
    id <DTKPDatastream> _datastream;
    NSMutableArray *_rawMessages;
    unsigned int _tapVersion;
    unsigned int _coreCount;
    long long _triggerCount;
    unsigned int *_triggerIDs;
    NSMutableArray *_metadataByTriggerIndex;
}

- (void).cxx_destruct;
- (id)messageReceived:(id)arg1;
- (id)initWithConfig:(id)arg1;

@end

