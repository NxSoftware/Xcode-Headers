//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSData;

@interface DTNetStatTCPRecord : NSObject
{
    int _pid;
    unsigned int _ifaceIndex;
    unsigned long long _serialNumber;
    NSData *_localAddress;
    NSData *_remoteAddress;
    NSArray *_attributes;
}

@property(retain, nonatomic) NSArray *attributes; // @synthesize attributes=_attributes;
@property(nonatomic) NSData *remoteAddress; // @synthesize remoteAddress=_remoteAddress;
@property(nonatomic) NSData *localAddress; // @synthesize localAddress=_localAddress;
@property(nonatomic) unsigned int ifaceIndex; // @synthesize ifaceIndex=_ifaceIndex;
@property(nonatomic) int pid; // @synthesize pid=_pid;
@property(nonatomic) unsigned long long serialNumber; // @synthesize serialNumber=_serialNumber;
- (void).cxx_destruct;

@end

