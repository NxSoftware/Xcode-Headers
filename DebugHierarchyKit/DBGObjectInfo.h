//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DebugHierarchyKit/DBGValue-Protocol.h>
#import <DebugHierarchyKit/DBGValueJSONSerialization-Protocol.h>

@class NSDictionary, NSString;

@interface DBGObjectInfo : NSObject <DBGValueJSONSerialization, DBGValue>
{
    NSDictionary *_objectInfo;
}

+ (id)withInfo:(id)arg1;
+ (id)valueWithEncodedValue:(id)arg1 format:(id)arg2 error:(id *)arg3;
@property(retain) NSDictionary *objectInfo; // @synthesize objectInfo=_objectInfo;
- (void).cxx_destruct;
- (id)objectValue;
- (id)objectPointer;
- (id)objectClassName;
@property(readonly) NSString *displayString;
- (id)initWithInfo:(id)arg1;
- (id)JSONCompatibleRepresentation;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

