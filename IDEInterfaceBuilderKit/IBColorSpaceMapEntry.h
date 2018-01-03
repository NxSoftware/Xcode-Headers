//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSColorSpace;

@interface IBColorSpaceMapEntry : NSObject
{
    NSColorSpace *_colorSpace;
    long long _archivedColorSpace;
    long long _customArchivedColorSpace;
    SEL _archivingSelector;
}

+ (id)containerWithColorSpace:(id)arg1 archivedCS:(long long)arg2 customCS:(long long)arg3 archivingSelector:(SEL)arg4;
@property(readonly, nonatomic) SEL archivingSelector; // @synthesize archivingSelector=_archivingSelector;
@property(readonly, nonatomic) long long customArchivedColorSpace; // @synthesize customArchivedColorSpace=_customArchivedColorSpace;
@property(readonly, nonatomic) long long archivedColorSpace; // @synthesize archivedColorSpace=_archivedColorSpace;
@property(readonly, nonatomic) NSColorSpace *colorSpace; // @synthesize colorSpace=_colorSpace;
- (void).cxx_destruct;
- (id)initWithColorSpace:(id)arg1 archivedColorSpace:(long long)arg2 customArchivedColorSpace:(long long)arg3 archivingSelector:(SEL)arg4;

@end

