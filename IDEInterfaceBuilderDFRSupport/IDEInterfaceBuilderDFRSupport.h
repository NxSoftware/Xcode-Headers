//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IDEInitialization-Protocol.h"

@interface IDEInterfaceBuilderDFRSupport : NSObject <IDEInitialization>
{
}

+ (void)simulatorCanAutoHide;
+ (void)simulatorCanAutoShow;
+ (BOOL)ide_initializeWithOptions:(int)arg1 error:(id *)arg2;
+ (id)sharedInstance;
- (id)init;

@end

