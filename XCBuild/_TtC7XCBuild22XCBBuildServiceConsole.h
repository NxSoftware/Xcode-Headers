//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString, _TtC7XCBuild15XCBBuildService, _TtC7XCBuild22XCBBuildServiceSession;

@interface _TtC7XCBuild22XCBBuildServiceConsole : NSObject
{
    // Error parsing type: , name: service
    // Error parsing type: , name: inferiorProductsPath
    // Error parsing type: , name: sessions
    // Error parsing type: , name: activeSession
}

- (CDUnknownBlockType).cxx_destruct;
- (id)init;
- (id)sendCommand:(id)arg1 success:(char *)arg2;
- (void)close;
- (id)initWithService:(id)arg1;
@property(nonatomic, retain) _TtC7XCBuild22XCBBuildServiceSession *activeSession; // @synthesize activeSession;
@property(nonatomic, copy) NSDictionary *sessions; // @synthesize sessions;
@property(nonatomic, copy) NSString *inferiorProductsPath; // @synthesize inferiorProductsPath;
@property(nonatomic, readonly) _TtC7XCBuild15XCBBuildService *service; // @synthesize service;

@end

