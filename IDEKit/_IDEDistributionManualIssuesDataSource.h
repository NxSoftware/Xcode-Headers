//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEKit/IDEProvisioningIssuesDataSource-Protocol.h>

@class NSArray;

@interface _IDEDistributionManualIssuesDataSource : NSObject <IDEProvisioningIssuesDataSource>
{
    NSArray *_errors;
}

@property(readonly, nonatomic) NSArray *errors; // @synthesize errors=_errors;
- (void).cxx_destruct;
- (id)initWithErrors:(id)arg1;

@end

