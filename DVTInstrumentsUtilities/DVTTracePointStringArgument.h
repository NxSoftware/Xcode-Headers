//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface DVTTracePointStringArgument : NSObject
{
    unsigned int _domainCode;
    // Error parsing type: AQ, name: _lastTransmission
    // Error parsing type: AQ, name: _strID
    NSString *_string;
}

@property(readonly) NSString *string; // @synthesize string=_string;
- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (id)initWithString:(id)arg1 domain:(id)arg2;
- (id)initWithString:(id)arg1 domainCode:(unsigned int)arg2;

@end

