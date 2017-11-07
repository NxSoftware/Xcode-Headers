//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <XCSCore/XCSObject.h>

@class NSNumber, NSString;

@interface XCSFailureSummary : XCSObject
{
    BOOL _isPerformanceFailure;
    NSString *_message;
    NSNumber *_lineNumber;
    NSString *_fileName;
}

+ (id)failureSummaryWithXCSTestResultDictionaryRepresentation:(id)arg1 validationErrors:(id *)arg2;
+ (id)failureSummaryWithMessage:(id)arg1 lineNumber:(id)arg2 fileName:(id)arg3 isPerformanceFailure:(BOOL)arg4 validationErrors:(id *)arg5;
@property(nonatomic) BOOL isPerformanceFailure; // @synthesize isPerformanceFailure=_isPerformanceFailure;
@property(copy, nonatomic) NSString *fileName; // @synthesize fileName=_fileName;
@property(retain, nonatomic) NSNumber *lineNumber; // @synthesize lineNumber=_lineNumber;
@property(copy, nonatomic) NSString *message; // @synthesize message=_message;
- (void).cxx_destruct;
- (BOOL)_validateWithMessage:(id)arg1 lineNumber:(id)arg2 fileName:(id)arg3 isPerformanceFailure:(BOOL)arg4 validationErrors:(id *)arg5;
- (id)dictionaryRepresentation;
- (id)description;
- (id)initWithMessage:(id)arg1 lineNumber:(id)arg2 fileName:(id)arg3 isPerformanceFailure:(BOOL)arg4 validationErrors:(id *)arg5;

@end

