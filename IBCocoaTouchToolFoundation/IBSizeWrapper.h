//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IBBinaryArchiving.h"
#import "NSCoding.h"
#import "NSCopying.h"

@class NSString;

@interface IBSizeWrapper : NSObject <NSCopying, NSCoding, IBBinaryArchiving>
{
    double _width;
    double _height;
}

+ (id)sizeWrapperWithSize:(struct CGSize)arg1;
@property(readonly, copy) NSString *description;
- (struct CGSize)sizeValue;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithBinaryArchiver:(id)arg1;
- (id)initWithBinaryUnarchiver:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithWidth:(double)arg1 height:(double)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

