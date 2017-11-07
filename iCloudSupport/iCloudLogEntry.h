//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSURL;

@interface iCloudLogEntry : NSObject
{
    NSURL *_itemURL;
    double _timestamp;
    unsigned long long _status;
    NSDictionary *_info;
}

@property(readonly, nonatomic) NSDictionary *info; // @synthesize info=_info;
@property(nonatomic) unsigned long long status; // @synthesize status=_status;
@property(nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
@property(retain, nonatomic) NSURL *itemURL; // @synthesize itemURL=_itemURL;
- (void).cxx_destruct;
- (id)initWithItem:(id)arg1 timestamp:(double)arg2 status:(unsigned long long)arg3 info:(id)arg4;

@end

