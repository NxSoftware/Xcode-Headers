//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEFoundation/IDEProvisioningContainer-Protocol.h>

@class NSString;

@interface IDEProvisioningContainer : NSObject <IDEProvisioningContainer>
{
    NSString *_name;
    NSString *_identifier;
    NSString *_portalID;
}

@property(readonly) NSString *portalID; // @synthesize portalID=_portalID;
@property(readonly) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)initWithName:(id)arg1 identifier:(id)arg2 portalID:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

