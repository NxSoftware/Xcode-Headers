//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEPegasusSourceEditor/_TtC22IDEPegasusSourceEditor18SourceCodeLandmark.h>

#import <IDEPegasusSourceEditor/DVTSourceLandmarkItemProtocol-Protocol.h>

@interface _TtC22IDEPegasusSourceEditor18SourceCodeLandmark (IDEPegasusSourceEditor) <DVTSourceLandmarkItemProtocol>
- (unsigned long long)landmarkItemType;
- (BOOL)needsUpdate;
- (id)landmarkItemTypeName;
- (struct _NSRange)landmarkItemNameRange;
- (struct _NSRange)landmarkItemRange;
- (id)landmarkItemName;
- (id)childLandmarkItems;
- (long long)numberOfChildLandmarkItems;
- (id)parentLandmarkItem;
@end
