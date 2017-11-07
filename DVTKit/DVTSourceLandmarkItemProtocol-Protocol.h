//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

@class NSArray, NSString;
@protocol DVTSourceLandmarkItemProtocol;

@protocol DVTSourceLandmarkItemProtocol
- (BOOL)needsUpdate;
- (NSString *)landmarkItemTypeName;
- (unsigned long long)landmarkItemType;
- (struct _NSRange)landmarkItemNameRange;
- (struct _NSRange)landmarkItemRange;
- (NSString *)landmarkItemName;
- (NSArray *)childLandmarkItems;
- (long long)numberOfChildLandmarkItems;
- (id <DVTSourceLandmarkItemProtocol>)parentLandmarkItem;
@end

