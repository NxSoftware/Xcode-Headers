//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <XCSUI/NSObject-Protocol.h>

@protocol IDECoverage_File;

@protocol IDECoverageReportFunctionFetcher <NSObject>
- (void)fetchFunctionsForFile:(id <IDECoverage_File>)arg1 completionBlock:(void (^)(NSArray *))arg2;
@end

