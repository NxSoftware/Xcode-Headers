//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <IDEPegasusSourceEditor/IDEPegasusSourceEditor.SourceCodeLandmark.h>

#import <IDEPegasusSourceEditor/DVTSourceLandmarkItemProtocol-Protocol.h>

@interface IDEPegasusSourceEditor.SourceCodeLandmark (IDEPegasusSourceEditor) <DVTSourceLandmarkItemProtocol>
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

