//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, _DVTLatencyCheckerFrame;

@interface DVTLatencyReportBuilder : NSObject
{
    BOOL _addNextBacktrace;
    unsigned long long _currentDepth;
    NSString *_indentString;
    unsigned long long _ancestorsWithMultipleChildren;
    _DVTLatencyCheckerFrame *_frame;
}

@property(retain) _DVTLatencyCheckerFrame *frame; // @synthesize frame=_frame;
@property BOOL addNextBacktrace; // @synthesize addNextBacktrace=_addNextBacktrace;
@property unsigned long long ancestorsWithMultipleChildren; // @synthesize ancestorsWithMultipleChildren=_ancestorsWithMultipleChildren;
@property(copy) NSString *indentString; // @synthesize indentString=_indentString;
@property unsigned long long currentDepth; // @synthesize currentDepth=_currentDepth;
- (void).cxx_destruct;

@end

