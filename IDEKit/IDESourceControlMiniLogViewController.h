//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <IDEKit/IDESourceControlLogViewController.h>

@class DVTComparisonDocumentLocation, DVTNotificationToken, DVTObservingToken;

@interface IDESourceControlMiniLogViewController : IDESourceControlLogViewController
{
    DVTComparisonDocumentLocation *_comparisonDocumentLocation;
    DVTNotificationToken *_didScanWorkspaceToken;
    DVTObservingToken *_localStatusToken;
}

+ (Class)logItemViewClass;
- (void).cxx_destruct;
- (void)primitiveInvalidate;
- (void)updateBoundComparisonDocumentLocation;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)dvtExtraBindings;

@end

