//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEInterfaceBuilderKit/IBPlatformToolDescription.h>

@class IBCocoaTouchTargetRuntime;

@interface IBCocoaTouchPlatformToolDescription : IBPlatformToolDescription
{
}

- (id)toolName;
- (id)preferredDeviceTypeReturningError:(id *)arg1;
- (id)newestAvailableAndSupportedRuntimeReturningError:(id *)arg1;
@property(readonly, nonatomic) IBCocoaTouchTargetRuntime *targetRuntime;

@end

