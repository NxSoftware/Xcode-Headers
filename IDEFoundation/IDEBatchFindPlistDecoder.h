//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface IDEBatchFindPlistDecoder : NSObject
{
    NSString *_classDefiningKey;
    NSDictionary *_plistIDsToClassNames;
    Class _defaultClass;
}

- (void).cxx_destruct;
- (id)decodeObjectsFromPropertyList:(id)arg1 subarrayKey:(id)arg2 allowingParshalDecodes:(BOOL)arg3;
- (id)decodeObjectsFromPropertyListArray:(id)arg1 allowingParshalDecodes:(BOOL)arg2;
- (id)decodeObjectFromPropertyList:(id)arg1;
- (id)initWithClassDefiningKey:(id)arg1 defaultClass:(Class)arg2 decodableClasses:(id)arg3;

@end

