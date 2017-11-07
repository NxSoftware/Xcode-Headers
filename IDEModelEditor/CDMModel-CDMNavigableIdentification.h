//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <IDEModelFoundation/CDMModel.h>

#import <IDEModelEditor/IDEDMModelRootObject-Protocol.h>
#import <IDEModelEditor/IDEDataModelSourceObject-Protocol.h>

@class IDETypeIdentifier, NSArray, NSImage, NSString;
@protocol IDEDMModelObject, IDEDMSourceObject;

@interface CDMModel (CDMNavigableIdentification) <IDEDataModelSourceObject, IDEDMModelRootObject>
+ (id)orderedLocationKeys;
+ (id)keyPathsForValuesAffectingHierarchyTreeControllerChildren;
+ (id)keyPathsForValuesAffectingRootsOfEntityTree;
+ (id)keyPathsForValuesAffectingTreeControllerChildren;
+ (id)keyPathsForValuesAffectingStructuralChildren;
+ (id)keyPathsForValuesAffectingTopLevelObjects;
- (void)removeTopLevelObject:(id)arg1;
@property(readonly) IDETypeIdentifier *ideModelObjectTypeIdentifier;
@property(readonly) NSImage *representativeIcon;
@property(readonly) id <IDEDMSourceObject> sourceObject;
@property(readonly) NSArray *hierarchyTreeControllerChildren;
- (id)treeControllerChildren;
@property(readonly) id <IDEDMModelObject> parentObject;
@property(readonly) NSArray *structuralChildren;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) id <IDEDMModelObject> model;
@property(readonly) NSString *name; // @dynamic name;
@property(readonly) Class superclass;
@end

