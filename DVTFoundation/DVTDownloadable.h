//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class DVTDotSeparatedVersion, NSArray, NSDictionary, NSPredicate, NSSet, NSString, NSURL;

@interface DVTDownloadable : NSObject <NSCoding, NSCopying>
{
    _Bool _userInitiated;
    NSString *_identifier;
    DVTDotSeparatedVersion *_version;
    NSString *_name;
    NSSet *_dependencies;
    NSURL *_source;
    unsigned long long _fileSize;
    NSDictionary *_userInfo;
}

@property(readonly) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(readonly) unsigned long long fileSize; // @synthesize fileSize=_fileSize;
@property(readonly) NSURL *source; // @synthesize source=_source;
@property(readonly) NSSet *dependencies; // @synthesize dependencies=_dependencies;
@property(readonly, getter=isUserInitiated) _Bool userInitiated; // @synthesize userInitiated=_userInitiated;
@property(readonly) NSString *name; // @synthesize name=_name;
@property(readonly) DVTDotSeparatedVersion *version; // @synthesize version=_version;
@property(readonly) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
@property(readonly) NSString *category;
@property(readonly) NSDictionary *installedIfAllReceiptsArePresentOrNewer;
@property(readonly) NSDictionary *installedIfAllSHA1SumsMatch;
@property(readonly) NSArray *installedIfAllPathsArePresent;
@property(readonly) NSPredicate *activationPredicate;
@property(readonly) BOOL requiresADCAuthentication;
- (id)sortKey;
@property(readonly) NSString *installPrefix;
@property(readonly, getter=isUserVisible) _Bool userVisible;
- (id)propertyList;
- (id)initWithPropertyList:(id)arg1 error:(id *)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (long long)compare:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)initWithIdentifier:(id)arg1 version:(id)arg2 source:(id)arg3 fileSize:(unsigned long long)arg4 name:(id)arg5 dependencies:(id)arg6 userInitiated:(_Bool)arg7 userInfo:(id)arg8;

@end

