//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEFoundation/DVTInvalidation-Protocol.h>

@class DVTStackBacktrace, NSArray, NSString;

@interface IDELogProvider : NSObject <DVTInvalidation>
{
    id _domainItem;
}

+ (void)initialize;
@property(readonly) id domainItem; // @synthesize domainItem=_domainItem;
- (void).cxx_destruct;
- (id)ideModelObjectTypeIdentifier;
@property(readonly) NSArray *logRecords;
- (void)primitiveInvalidate;
- (id)initWithDomainItem:(id)arg1;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

