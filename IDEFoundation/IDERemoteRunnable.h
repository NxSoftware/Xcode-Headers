//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <IDEFoundation/IDERunnable.h>

#import <IDEFoundation/DVTXMLUnarchiving-Protocol.h>

@class DVTFilePath, IDESchemeBuildableReference, NSString;
@protocol IDEBuildableProduct;

@interface IDERemoteRunnable : IDERunnable <DVTXMLUnarchiving>
{
    DVTFilePath *_remotePath;
    IDESchemeBuildableReference *_buildableReference;
}

+ (id)keyPathsForValuesAffectingBuildableProduct;
+ (id)remoteRunnableWithBundleIdentifier:(id)arg1 filePath:(id)arg2 mode:(int)arg3 buildableReference:(id)arg4;
@property(retain) IDESchemeBuildableReference *buildableReference; // @synthesize buildableReference=_buildableReference;
- (id)remotePath;
- (void).cxx_destruct;
- (void)addBuildableReference:(id)arg1 fromXMLUnarchiver:(id)arg2;
- (void)dvt_encodeRelationshipsWithXMLArchiver:(id)arg1 version:(id)arg2;
- (void)dvt_encodeAttributesWithXMLArchiver:(id)arg1 version:(id)arg2;
- (void)setRemotePathFromUTF8String:(char *)arg1 fromXMLUnarchiver:(id)arg2;
- (void)setScheme:(id)arg1;
- (int)runnableType;
- (id)pathToRunnableForBuildParameters:(id)arg1;
@property(readonly) id <IDEBuildableProduct> buildableProduct;
- (id)toolTip;
- (id)displayName;
- (id)runnableUTIType:(id *)arg1;
- (BOOL)hasRunnablePath;
- (id)initFromXMLUnarchiver:(id)arg1 archiveVersion:(float)arg2;
- (id)initWithRemotePath:(id)arg1 bundleIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

