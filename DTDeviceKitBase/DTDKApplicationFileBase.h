//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <DTDeviceKitBase/DTDKApplicationItemBase.h>

@class NSString;

@interface DTDKApplicationFileBase : DTDKApplicationItemBase
{
    NSString *_name;
}

+ (id)itemWithName:(id)arg1;
@property(copy) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (_Bool)removeFromDeviceWithError:(id *)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;

@end

