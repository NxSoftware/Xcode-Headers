//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IBDocumentArchiving-Protocol.h"
#import "NSCoding-Protocol.h"

@class NSString;

@interface IBNSSliderAccessoryBehavior : NSObject <IBDocumentArchiving, NSCoding>
{
    BOOL _encodeAsRuntimeInstance;
    long long _behavior;
}

+ (id)instantiateWithDocumentUnarchiver:(id)arg1;
@property long long behavior; // @synthesize behavior=_behavior;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (Class)classForCoder;
- (Class)classForBehavior:(long long)arg1;
- (void)ibPrepareCocoaDocumentForCompiling:(id)arg1 withContext:(id)arg2;
- (id)ibLocalAttributeKeyPaths;
- (void)unarchiveWithDocumentUnarchiver:(id)arg1;
- (void)archiveWithDocumentArchiver:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

