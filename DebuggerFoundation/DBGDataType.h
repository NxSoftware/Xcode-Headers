//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface DBGDataType : NSObject
{
    NSString *_typeName;
    NSString *_typeNameWithoutQualifiers;
    NSString *_displayTypeName;
    NSString *_pointeeTypeName;
}

+ (BOOL)isZombie:(id)arg1;
@property(readonly) NSString *pointeeTypeName; // @synthesize pointeeTypeName=_pointeeTypeName;
@property(readonly) NSString *displayTypeName; // @synthesize displayTypeName=_displayTypeName;
@property(readonly) NSString *typeName; // @synthesize typeName=_typeName;
- (void).cxx_destruct;
- (id)description;
@property(readonly) NSString *typeNameWithoutQualifiers;
@property(readonly) BOOL isBOOLOrBoolean;
@property(readonly) BOOL isUnknownType;
@property(readonly) BOOL isPointer;
- (id)initWithTypename:(id)arg1;

@end

