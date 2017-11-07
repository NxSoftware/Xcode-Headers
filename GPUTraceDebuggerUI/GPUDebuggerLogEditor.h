//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <IDEKit/IDEEditor.h>

#import <GPUTraceDebuggerUI/NSTextViewDelegate-Protocol.h>

@class DVTObservingToken, DVTSourceTextView, NSString;

__attribute__((visibility("hidden")))
@interface GPUDebuggerLogEditor : IDEEditor <NSTextViewDelegate>
{
    DVTSourceTextView *_textView;
    DVTObservingToken *_logItemsObserver;
}

@property(readonly) DVTSourceTextView *textView; // @synthesize textView=_textView;
- (void).cxx_destruct;
- (void)viewWillUninstall;
- (void)viewDidInstall;
- (void)primitiveInvalidate;
- (BOOL)canBecomeMainViewController;
- (void)loadView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

