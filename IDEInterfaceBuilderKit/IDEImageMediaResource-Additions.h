//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEImageMediaResource.h>

#import <IDEInterfaceBuilderKit/IBICVariantObject-Protocol.h>

@class NSString;

@interface IDEImageMediaResource (Additions) <IBICVariantObject>
- (long long)compareForVariantMatching:(id)arg1;
- (BOOL)isMinimallyFitForVariantSelection;
- (id)slotForVariantSelection;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

