//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <DVTFoundation/DVTDataDigester.h>

@interface DVTMD5Digester : DVTDataDigester
{
    struct CC_MD5state_st _ctxt;
}

- (id)digest;
- (void)updateWithBytes:(const void *)arg1 length:(unsigned long long)arg2;
- (id)init;

@end

