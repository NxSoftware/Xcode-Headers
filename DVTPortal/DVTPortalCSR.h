//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface DVTPortalCSR : NSObject
{
    NSString *_portalCertificateID;
}

+ (id)createCertificateWithSession:(id)arg1 team:(id)arg2 type:(id)arg3 machineName:(id)arg4 machineID:(id)arg5 csrData:(id)arg6 error:(id *)arg7;
+ (id)createCertificateWithSession:(id)arg1 team:(id)arg2 type:(id)arg3 machineName:(id)arg4 machineID:(id)arg5 keyName:(id)arg6 privateKey:(struct OpaqueSecKeyRef **)arg7 error:(id *)arg8;
@property(readonly, copy, nonatomic) NSString *portalCertificateID; // @synthesize portalCertificateID=_portalCertificateID;
- (void).cxx_destruct;
- (id)description;

@end

