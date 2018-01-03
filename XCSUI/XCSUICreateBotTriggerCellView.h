//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSTableCellView.h>

@class IDECapsuleView, IDEViewController;
@protocol IDECapsuleViewController;

@interface XCSUICreateBotTriggerCellView : NSTableCellView
{
    IDECapsuleView *_capsuleView;
    IDEViewController<IDECapsuleViewController> *_viewController;
}

@property(readonly) IDEViewController<IDECapsuleViewController> *viewController; // @synthesize viewController=_viewController;
@property(readonly) __weak IDECapsuleView *capsuleView; // @synthesize capsuleView=_capsuleView;
- (void).cxx_destruct;
- (void)seekAndDestroy;
- (void)configureForViewController:(id)arg1 disclosed:(BOOL)arg2;

@end

