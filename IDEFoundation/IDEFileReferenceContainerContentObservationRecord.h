//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DVTFileDataType, DVTFilePath;

@interface IDEFileReferenceContainerContentObservationRecord : NSObject
{
    BOOL _observed;
    DVTFilePath *_previousResolvedFilePath;
    DVTFileDataType *_previousLastKnownFileDataType;
}

@property(retain) DVTFileDataType *previousLastKnownFileDataType; // @synthesize previousLastKnownFileDataType=_previousLastKnownFileDataType;
@property(retain) DVTFilePath *previousResolvedFilePath; // @synthesize previousResolvedFilePath=_previousResolvedFilePath;
@property BOOL observed; // @synthesize observed=_observed;
- (void).cxx_destruct;

@end

