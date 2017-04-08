//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@protocol DBGObjectInstanceInspectorProvider <NSObject>
@property(readonly) BOOL shouldDisplayMallocZone;
@property(readonly) BOOL shouldDisplayInstanceSize;
@property(readonly) BOOL shouldDisplayKind;
@property(readonly) NSString *inferiorPointer;
@property(readonly) NSString *representedObjectClassNameForDisplay;

@optional
@property(readonly) NSString *mallocZoneForDisplay;
@property(readonly) NSString *instanceSizeForDisplay;
@property(readonly) NSString *kindForDisplay;
@end

