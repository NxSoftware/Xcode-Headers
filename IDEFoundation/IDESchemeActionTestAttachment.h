//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSDate, NSDictionary, NSString, NSUUID;

@interface IDESchemeActionTestAttachment : NSObject
{
    NSString *_payloadFileName;
    BOOL _hasPayload;
    NSString *_uniformTypeIdentifier;
    NSString *_name;
    NSDate *_timestamp;
    NSDictionary *_userInfo;
    long long _lifetime;
    long long _inActivityIdentifier;
    NSUUID *_activityUUID;
    NSString *_attachmentsDirectory;
}

@property(readonly) BOOL hasPayload; // @synthesize hasPayload=_hasPayload;
@property(copy) NSString *attachmentsDirectory; // @synthesize attachmentsDirectory=_attachmentsDirectory;
@property(readonly, copy) NSUUID *activityUUID; // @synthesize activityUUID=_activityUUID;
@property(readonly) long long inActivityIdentifier; // @synthesize inActivityIdentifier=_inActivityIdentifier;
@property(readonly) long long lifetime; // @synthesize lifetime=_lifetime;
@property(readonly, copy) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(copy) NSDate *timestamp; // @synthesize timestamp=_timestamp;
@property(readonly, copy) NSString *name; // @synthesize name=_name;
@property(readonly, copy) NSString *uniformTypeIdentifier; // @synthesize uniformTypeIdentifier=_uniformTypeIdentifier;
- (void).cxx_destruct;
@property(readonly) NSDictionary *dictionaryRepresentation;
- (id)initWithDictionaryRepresentation:(id)arg1 activityUUID:(id)arg2;
- (void)deletePayload;
- (id)_loadAttachmentData;
- (void)_savePayload:(id)arg1;
@property(readonly, copy) NSData *payload;
@property(readonly, copy) NSString *payloadFilePath;
@property(readonly, copy) NSString *payloadFileName;
- (void)_resolveLazyPayload:(id)arg1;
- (id)initWithUniformTypeIdentifier:(id)arg1 name:(id)arg2 timestamp:(id)arg3 userInfo:(id)arg4 lifetime:(long long)arg5 inActivityIdentifier:(long long)arg6 fileName:(id)arg7 activityUUID:(id)arg8 attachmentsDirectory:(id)arg9;
- (id)initWithAttachment:(id)arg1 inActivityIdentifier:(long long)arg2 activityUUID:(id)arg3 attachmentsDirectory:(id)arg4;

@end

