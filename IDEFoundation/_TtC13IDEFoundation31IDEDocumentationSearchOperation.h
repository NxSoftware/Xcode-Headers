//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _TtC13IDEFoundation31IDEDocumentationSearchOperation : NSObject
{
    // Error parsing type: , name: _manager
    // Error parsing type: , name: _future
    // Error parsing type: , name: _qos
    // Error parsing type: , name: _completionBlock
}

- (CDUnknownBlockType).cxx_destruct;
- (id)init;
- (BOOL)isCancelled;
- (void)cancel;
- (id)initWithQuery:(id)arg1 sourceLanguage:(int)arg2 limit:(long long)arg3 manager:(id)arg4 qualityOfService:(long long)arg5 completionBlock:(CDUnknownBlockType)arg6;

// Remaining properties
@property(nonatomic, readonly) BOOL cancelled;

@end

