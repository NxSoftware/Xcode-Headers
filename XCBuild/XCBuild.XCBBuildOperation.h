//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class _TtC7XCBuild22XCBBuildServiceSession;
@protocol _TtP7XCBuild25XCBBuildOperationDelegate_;

@interface XCBuild.XCBBuildOperation : NSObject
{
    // Error parsing type: , name: session
    // Error parsing type: , name: delegate
    // Error parsing type: , name: handlerQueue
    // Error parsing type: , name: channel
    // Error parsing type: , name: buildID
    // Error parsing type: , name: state
}

- (CDUnknownBlockType).cxx_destruct;
- (id)init;
- (void)cancel;
- (void)setBuildID:(long long)arg1;
- (void)dealloc;
- (id)initWithSession:(id)arg1 delegate:(id)arg2;
@property(nonatomic) long long state; // @synthesize state;
@property(nonatomic, readonly) id <_TtP7XCBuild25XCBBuildOperationDelegate_> delegate; // @synthesize delegate;
@property(nonatomic) __weak _TtC7XCBuild22XCBBuildServiceSession *session; // @synthesize session;

@end
