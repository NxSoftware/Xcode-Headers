//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <XCSUI/_TtC5XCSUI12XPCOperation.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _TtC5XCSUI28RelocateServiceDataOperation : _TtC5XCSUI12XPCOperation
{
    // Error parsing type: , name: newPath
    // Error parsing type: , name: didFinishHandler
}

- (CDUnknownBlockType).cxx_destruct;
- (id)initWithClient:(id)arg1;
- (void)start;
- (id)initWithClient:(id)arg1 finishHandler:(CDUnknownBlockType)arg2;
@property(nonatomic, copy) CDUnknownBlockType didFinishHandler; // @synthesize didFinishHandler;
@property(nonatomic, copy) NSString *newPath; // @synthesize newPath;

@end
