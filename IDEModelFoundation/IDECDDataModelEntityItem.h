//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CDMEntity;

@interface IDECDDataModelEntityItem : NSObject
{
    BOOL _shouldUse;
    CDMEntity *_entity;
}

@property BOOL shouldUse; // @synthesize shouldUse=_shouldUse;
@property(readonly) CDMEntity *entity; // @synthesize entity=_entity;
- (void).cxx_destruct;
- (id)description;
- (id)initWithEntity:(id)arg1 shouldUse:(BOOL)arg2;

@end

