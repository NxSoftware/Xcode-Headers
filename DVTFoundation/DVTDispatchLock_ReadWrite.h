//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTFoundation/DVTDispatchLock.h>

@interface DVTDispatchLock_ReadWrite : DVTDispatchLock
{
    void *_context;
}

- (void)performLockedReaderBlock:(CDUnknownBlockType)arg1;
- (id)initWithDebugName:(id)arg1;

@end

