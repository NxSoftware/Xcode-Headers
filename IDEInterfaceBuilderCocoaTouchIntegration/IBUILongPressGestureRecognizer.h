//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <IDEInterfaceBuilderCocoaTouchIntegration/IBUIGestureRecognizer.h>

#import <IDEInterfaceBuilderCocoaTouchIntegration/IBDocumentArchiving-Protocol.h>

@class NSString;

@interface IBUILongPressGestureRecognizer : IBUIGestureRecognizer <IBDocumentArchiving>
{
    double _allowableMovement;
    double _minimumPressDuration;
    unsigned long long _numberOfTapsRequired;
    long long _numberOfTouchesRequired;
}

+ (id)ibInstantiateForRole:(long long)arg1 withTargetRuntime:(id)arg2 documentClass:(Class)arg3 assetIdentifier:(id)arg4;
@property long long numberOfTouchesRequired; // @synthesize numberOfTouchesRequired=_numberOfTouchesRequired;
@property unsigned long long numberOfTapsRequired; // @synthesize numberOfTapsRequired=_numberOfTapsRequired;
@property double minimumPressDuration; // @synthesize minimumPressDuration=_minimumPressDuration;
@property double allowableMovement; // @synthesize allowableMovement=_allowableMovement;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)unarchiveWithDocumentUnarchiver:(id)arg1;
- (void)archiveWithDocumentArchiver:(id)arg1;
- (BOOL)showAllowedPressTypes;
- (id)ibSegueTriggers;
- (id)ibLocalAttributeKeyPaths;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

