//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <GPUTraceDebuggerUI/IDEGFXGaugeReportItemProvider-Protocol.h>

@class DVTStackBacktrace, DYInvestigatorCaseConfigData, GPUInvestigatorReportItem, NSString;

__attribute__((visibility("hidden")))
@interface GPUGFXGaugeReportItemProvider : NSObject <IDEGFXGaugeReportItemProvider>
{
    DYInvestigatorCaseConfigData *_data;
    GPUInvestigatorReportItem *_reportItem;
}

+ (void)initialize;
- (void).cxx_destruct;
- (void)updateReportWithData:(id)arg1;
@property(retain, nonatomic) id reportItem;
- (void)primitiveInvalidate;
- (id)init;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

