//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface DBGNSDataForDataValueProviderOptions : NSObject
{
    BOOL _autoHandleExceptions;
    unsigned long long _timeout;
    CDUnknownBlockType _progressHandler;
}

@property(copy) CDUnknownBlockType progressHandler; // @synthesize progressHandler=_progressHandler;
@property unsigned long long timeout; // @synthesize timeout=_timeout;
@property BOOL autoHandleExceptions; // @synthesize autoHandleExceptions=_autoHandleExceptions;
- (void).cxx_destruct;
- (id)init;

@end

