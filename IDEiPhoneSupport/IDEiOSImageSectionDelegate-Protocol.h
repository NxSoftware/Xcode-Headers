//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class IDEiOSImageSection, NSDictionary, NSString;
@protocol IDEInfoPlistCoordination;

@protocol IDEiOSImageSectionDelegate
- (NSString *)deploymentOS;
- (BOOL)iPadTargeted;
- (BOOL)iPhoneTargeted;
- (BOOL)statusBarHiddenForImageSection:(IDEiOSImageSection *)arg1;
- (NSString *)imageSection:(IDEiOSImageSection *)arg1 expandedValueForString:(NSString *)arg2;
- (NSDictionary *)iconFilePathSetsByIconBaseNameForImageSection:(IDEiOSImageSection *)arg1;
- (id <IDEInfoPlistCoordination>)infoPlistCoordinatorForImageSection:(IDEiOSImageSection *)arg1;
@end

