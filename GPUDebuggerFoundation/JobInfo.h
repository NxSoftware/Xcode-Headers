//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DYContinuation, NSString;

__attribute__((visibility("hidden")))
@interface JobInfo : NSObject
{
    NSString *_jobId;
    DYContinuation *_job;
}

@property(readonly, nonatomic) DYContinuation *job; // @synthesize job=_job;
@property(readonly, nonatomic) NSString *jobId; // @synthesize jobId=_jobId;
- (void).cxx_destruct;
- (id)initWithId:(id)arg1 job:(id)arg2;
- (id)init;

@end

