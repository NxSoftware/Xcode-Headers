//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DVTInvalidation.h"

@class NSString;

@protocol IDELinkedFrameworksCoordination <DVTInvalidation>
- (BOOL)hasLinkedFrameworkWithName:(NSString *)arg1;
- (void)unlinkFrameworkWithName:(NSString *)arg1;
- (BOOL)linkFrameworkWithName:(NSString *)arg1 error:(id *)arg2;
- (id)initWithTarget:(id)arg1 buildConfiguration:(NSString *)arg2;
@end

