//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DVTInstrumentsFoundation/NSCopying-Protocol.h>

@class NSMutableDictionary, NSString, NSURL;
@protocol DTTapBulkDataReceiver;

@interface DTTapConfig : NSObject <NSCopying>
{
    NSMutableDictionary *_dict;
    NSURL *_archivingURL;
    _Bool _createdArchivingURL;
    BOOL _filePreservation;
    NSString *_serviceName;
    long long _serviceVersion;
    NSString *_uuid;
    id <DTTapBulkDataReceiver> _bulkDataReceiver;
    CDUnknownBlockType _runningMetadataChangedHandler;
    CDUnknownBlockType _statusHandler;
    CDUnknownBlockType _recordingInfoHandler;
}

@property(copy, nonatomic) CDUnknownBlockType recordingInfoHandler; // @synthesize recordingInfoHandler=_recordingInfoHandler;
@property(copy, nonatomic) CDUnknownBlockType statusHandler; // @synthesize statusHandler=_statusHandler;
@property(copy, nonatomic) CDUnknownBlockType runningMetadataChangedHandler; // @synthesize runningMetadataChangedHandler=_runningMetadataChangedHandler;
@property(nonatomic) id <DTTapBulkDataReceiver> bulkDataReceiver; // @synthesize bulkDataReceiver=_bulkDataReceiver;
@property(nonatomic) BOOL filePreservation; // @synthesize filePreservation=_filePreservation;
@property(retain, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
@property(nonatomic) long long serviceVersion; // @synthesize serviceVersion=_serviceVersion;
@property(copy, nonatomic) NSString *serviceName; // @synthesize serviceName=_serviceName;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long windowSize;
@property(nonatomic) unsigned long long bufferMode;
@property(nonatomic) unsigned long long pollingInterval;
- (void)setSpoolToDiskWhenPossible:(BOOL)arg1;
- (BOOL)spoolToDiskWhenPossible;
- (void)setIsDeferredDisplay:(BOOL)arg1;
@property(readonly, nonatomic) BOOL isDeferredDisplay;
- (void)_dispatchStatus:(unsigned int)arg1 timestamp:(unsigned long long)arg2 notice:(id)arg3 info:(id)arg4;
- (void)_runningMetadataChanged:(id)arg1;
- (BOOL)setArchivingURL:(id)arg1 error:(id *)arg2;
- (void)refreshUUID;
- (id)archivingURL;
- (void)_removeSerializableObjectForKey:(id)arg1;
- (id)_getSerializableObjectForKey:(id)arg1;
- (void)_setSerializableObject:(id)arg1 forKey:(id)arg2;
- (id)plist;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithPlist:(id)arg1;
- (id)init;

@end

