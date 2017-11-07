//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <iCloudSupport/iCloudItem-Protocol.h>

@class NSArray, NSDate, NSImage, NSMutableArray, NSNumber, NSString, NSURL;
@protocol iCloudItemProvider;

@interface iCloudItem : NSObject <iCloudItem>
{
    BOOL _fetchingChildren;
    NSString *_ubiquityContainer;
    BOOL _inCloud;
    BOOL _deleted;
    BOOL _pending;
    BOOL _onlyEmbedded;
    BOOL _conflicted;
    BOOL _wasDownloading;
    BOOL _wasUploading;
    BOOL _uploading;
    BOOL _downloading;
    id <iCloudItemProvider> _itemProvider;
    NSURL *_localURL;
    NSURL *_iCloudURL;
    NSNumber *_itemID;
    NSNumber *_parentItemID;
    NSString *_type;
    NSNumber *_changeID;
    NSString *_name;
    NSNumber *_size;
    NSString *_signature;
    NSNumber *_peerID;
    NSString *_peerName;
    NSNumber *_conflictToken;
    NSArray *_losers;
    NSDate *_modified;
    NSImage *_icon;
    unsigned long long _lastSizeDuringDownloading;
    unsigned long long _lastSizeDuringUploading;
    double _downloadProgress;
    double _uploadProgress;
    NSString *_localType;
    unsigned long long _status;
    NSMutableArray *_children;
}

@property(readonly, nonatomic) NSMutableArray *children; // @synthesize children=_children;
@property(nonatomic) unsigned long long status; // @synthesize status=_status;
@property(nonatomic, getter=isDownloading) BOOL downloading; // @synthesize downloading=_downloading;
@property(nonatomic, getter=isUploading) BOOL uploading; // @synthesize uploading=_uploading;
@property(nonatomic) double uploadProgress; // @synthesize uploadProgress=_uploadProgress;
@property(nonatomic) double downloadProgress; // @synthesize downloadProgress=_downloadProgress;
@property(nonatomic) BOOL wasUploading; // @synthesize wasUploading=_wasUploading;
@property(nonatomic) BOOL wasDownloading; // @synthesize wasDownloading=_wasDownloading;
@property(nonatomic) unsigned long long lastSizeDuringUploading; // @synthesize lastSizeDuringUploading=_lastSizeDuringUploading;
@property(nonatomic) unsigned long long lastSizeDuringDownloading; // @synthesize lastSizeDuringDownloading=_lastSizeDuringDownloading;
@property(retain, nonatomic) NSImage *icon; // @synthesize icon=_icon;
@property(retain, nonatomic) NSDate *modified; // @synthesize modified=_modified;
@property(retain, nonatomic) NSArray *losers; // @synthesize losers=_losers;
@property(retain, nonatomic) NSNumber *conflictToken; // @synthesize conflictToken=_conflictToken;
@property(nonatomic) BOOL conflicted; // @synthesize conflicted=_conflicted;
@property(retain, nonatomic) NSString *peerName; // @synthesize peerName=_peerName;
@property(retain, nonatomic) NSNumber *peerID; // @synthesize peerID=_peerID;
@property(retain, nonatomic) NSString *signature; // @synthesize signature=_signature;
@property(retain, nonatomic) NSNumber *size; // @synthesize size=_size;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) BOOL onlyEmbedded; // @synthesize onlyEmbedded=_onlyEmbedded;
@property(nonatomic) BOOL pending; // @synthesize pending=_pending;
@property(nonatomic) BOOL deleted; // @synthesize deleted=_deleted;
@property(nonatomic) BOOL inCloud; // @synthesize inCloud=_inCloud;
@property(retain, nonatomic) NSNumber *changeID; // @synthesize changeID=_changeID;
@property(retain, nonatomic) NSString *type; // @synthesize type=_type;
@property(retain, nonatomic) NSNumber *parentItemID; // @synthesize parentItemID=_parentItemID;
@property(retain, nonatomic) NSNumber *itemID; // @synthesize itemID=_itemID;
@property(retain, nonatomic) NSURL *localURL; // @synthesize localURL=_localURL;
@property(readonly, nonatomic) __weak id <iCloudItemProvider> itemProvider; // @synthesize itemProvider=_itemProvider;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSURL *iCloudURL; // @synthesize iCloudURL=_iCloudURL;
- (id)ubiquityRootPath;
- (id)ubiquityRoot;
- (id)ubiquityRelativePath;
- (id)_ubiquityRelativePath:(id)arg1;
- (id)ubiquityContainer;
- (BOOL)isContainer;
- (BOOL)isPackage;
- (BOOL)isFile;
- (BOOL)isFolder;
- (void)removeChildIfPresent:(id)arg1;
- (void)addChildIfAbsent:(id)arg1;
- (void)childrenWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)_childrenWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)faultWithCompletionBlock:(CDUnknownBlockType)arg1;
- (id)parentItem;
- (BOOL)isRootItem;
- (void)_setUploadProgress:(double)arg1;
- (void)_setDownloadProgress:(double)arg1;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (id)initWithLocalURL:(id)arg1 type:(id)arg2 status:(unsigned long long)arg3 size:(unsigned long long)arg4 modified:(id)arg5 itemProvider:(id)arg6;
- (id)initWithLocalURL:(id)arg1 itemProvider:(id)arg2;
- (unsigned long long)_computedLocalSize;
- (unsigned long long)_childrenSize;
- (id)initWithJSON:(id)arg1 localURL:(id)arg2 itemProvider:(id)arg3;
- (void)_takeDataFromJSON:(id)arg1;
@property(readonly, nonatomic) NSString *localType; // @synthesize localType=_localType;
- (id)inputDateFormatter;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

