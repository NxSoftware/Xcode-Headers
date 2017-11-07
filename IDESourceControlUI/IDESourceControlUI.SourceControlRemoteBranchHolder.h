//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DVTDocumentLocation, DVTFileDataType, DVTSourceControlRevisionLocation, DVTSourceControlWorkingCopy, NSDate, NSImage, NSString, _TtC16DVTSourceControl28DVTSourceControlRemoteBranch;

@interface IDESourceControlUI.SourceControlRemoteBranchHolder : NSObject
{
    // Error parsing type: , name: location
    // Error parsing type: , name: name
    // Error parsing type: , name: identifier
    // Error parsing type: , name: workingCopy
    // Error parsing type: , name: remoteName
    // Error parsing type: , name: documentLocation
}

- (CDUnknownBlockType).cxx_destruct;
- (id)init;
- (BOOL)pathCell_shouldDisplayChildren;
@property(nonatomic, readonly) DVTDocumentLocation *navigableItem_contentDocumentLocation;
@property(nonatomic, readonly) DVTFileDataType *navigableItem_documentType;
@property(nonatomic, readonly) NSString *navigableItem_name;
@property(nonatomic, readonly) NSImage *navigableItem_image;
@property(nonatomic, readonly) NSString *searchString;
@property(nonatomic, readonly) BOOL navigableItem_isLeaf;
- (BOOL)hasPersistentChildItems;
- (id)applicableInspectorsForCategory:(id)arg1 suggestion:(id)arg2;
- (id)initWithName:(id)arg1 branch:(id)arg2 workingCopy:(id)arg3 remoteName:(id)arg4 identifier:(id)arg5;
@property(nonatomic, readonly) NSDate *date;
- (id)ideModelObjectTypeIdentifier;
@property(nonatomic, readonly) _TtC16DVTSourceControl28DVTSourceControlRemoteBranch *branch;
@property(nonatomic, readonly) NSString *remoteName; // @synthesize remoteName;
@property(nonatomic, retain) DVTSourceControlWorkingCopy *workingCopy; // @synthesize workingCopy;
@property(nonatomic, readonly) NSString *identifier; // @synthesize identifier;
@property(nonatomic, readonly) NSString *name; // @synthesize name;
@property(nonatomic, retain) DVTSourceControlRevisionLocation *location; // @synthesize location;

@end

