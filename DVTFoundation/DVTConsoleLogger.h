//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <DVTFoundation/DVTLogger.h>

@interface DVTConsoleLogger : DVTLogger
{
    unsigned long long _indentLevel;
}

+ (void)initialize;
@property unsigned long long indentLevel; // @synthesize indentLevel=_indentLevel;
- (void)decreaseIndentLevelForAspect:(id)arg1;
- (void)increaseIndentLevelForAspect:(id)arg1;
- (void)logMessage:(id)arg1 forAspect:(id)arg2 logLevel:(unsigned long long)arg3;

@end

