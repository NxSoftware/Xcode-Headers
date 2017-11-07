//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DebugHierarchyKit/DBGValue-Protocol.h>
#import <DebugHierarchyKit/DBGValueJSONSerialization-Protocol.h>

@class NSString;

@interface DBGInsets : NSObject <DBGValueJSONSerialization, DBGValue>
{
    struct DBGEdgeInsets _edgeInsets;
}

+ (id)withEdgeInsets:(struct DBGEdgeInsets)arg1;
+ (id)valueWithEncodedValue:(id)arg1 format:(id)arg2 error:(id *)arg3;
@property struct DBGEdgeInsets edgeInsets; // @synthesize edgeInsets=_edgeInsets;
- (id)objectValue;
- (id)initWithEdgeInsets:(struct DBGEdgeInsets)arg1;
- (id)JSONCompatibleRepresentation;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

