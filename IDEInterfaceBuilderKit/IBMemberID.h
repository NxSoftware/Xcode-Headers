//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEInterfaceBuilderKit/IBBinaryArchiving-Protocol.h>
#import <IDEInterfaceBuilderKit/NSCoding-Protocol.h>
#import <IDEInterfaceBuilderKit/NSCopying-Protocol.h>

@class NSString;

@interface IBMemberID : NSObject <NSCopying, NSCoding, IBBinaryArchiving>
{
    NSString *_memberIdentifier;
    unsigned long long _hash;
}

+ (BOOL)isLegalMemberIdentifier:(id)arg1;
+ (id)memberIDFromPlistReference:(id)arg1;
+ (id)memberIDWithIdentifier:(id)arg1;
+ (id)memberIDFromInteger:(long long)arg1;
+ (id)uncachedMemberIDFromInteger:(long long)arg1;
+ (id)memberID;
+ (id)decodeWithBinaryUnarchiver:(id)arg1;
+ (BOOL)isValidIdentifier:(id)arg1;
+ (id)illegalMemberIdentifierCharacterSet;
+ (id)legalMemberIdentifierCharacterSet;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (long long)compareMemberIdentifiers:(id)arg1;
- (long long)integerID;
- (BOOL)isIntegerID;
- (id)memberIdentifier;
- (id)repeatableChildID:(long long)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithBinaryArchiver:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;
- (id)initWithMemberIdentifier:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToMemberID:(id)arg1;
@property(readonly) unsigned long long hash;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

