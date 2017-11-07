//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DVTFoundation/DVTPropertyListEncoding-Protocol.h>

@class NSString;

@interface DVTExtensionPropertyDescription : NSObject <DVTPropertyListEncoding>
{
    NSString *_name;
    BOOL _isOptional;
}

@property(getter=isOptional) BOOL optional; // @synthesize optional=_isOptional;
@property(copy) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (void)encodeIntoPropertyList:(id)arg1;
- (id)initWithPropertyList:(id)arg1 owner:(id)arg2;
- (id)initWithName:(id)arg1 isOptional:(BOOL)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

