//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSError;
@protocol _TtP5XCSUI35XCSUIRemoteCollectionLoaderDelegate_;

@interface _TtC5XCSUI27XCSUIRemoteCollectionLoader : NSObject
{
    // Error parsing type: , name: service
    // Error parsing type: , name: objects
    // Error parsing type: , name: error
    // Error parsing type: , name: delegate
    // Error parsing type: , name: queue
}

- (CDUnknownBlockType).cxx_destruct;
- (id)init;
- (void)update;
- (void)setNeedsUpdate;
@property(nonatomic, readonly) BOOL isUpdating;
- (id)initWithDelegate:(id)arg1;
@property(nonatomic) __weak id <_TtP5XCSUI35XCSUIRemoteCollectionLoaderDelegate_> delegate; // @synthesize delegate;
@property(nonatomic, copy) NSError *error; // @synthesize error;
@property(nonatomic, copy) NSArray *objects; // @synthesize objects;
@property(nonatomic, retain) id service; // @synthesize service;

@end

