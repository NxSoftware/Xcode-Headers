//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <IDEModelFoundation/CDMFetchedProperty.h>

#import <IDEModelEditor/IDEDataModelObject-Protocol.h>

@class IDETypeIdentifier, NSArray, NSImage, NSString;
@protocol IDEDMModelObject, IDEDMSourceObject;

@interface CDMFetchedProperty (CDMNavigableIdentification) <IDEDataModelObject>
@property(readonly) NSImage *representativeIcon;
@property(readonly) IDETypeIdentifier *ideModelObjectTypeIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) NSArray *hierarchyTreeControllerChildren; // @dynamic hierarchyTreeControllerChildren;
@property(readonly) NSString *name; // @dynamic name;
@property(readonly) id <IDEDMModelObject> parentObject; // @dynamic parentObject;
@property(readonly) id <IDEDMSourceObject> sourceObject; // @dynamic sourceObject;
@property(readonly) NSArray *structuralChildren; // @dynamic structuralChildren;
@property(readonly) Class superclass;
@end

