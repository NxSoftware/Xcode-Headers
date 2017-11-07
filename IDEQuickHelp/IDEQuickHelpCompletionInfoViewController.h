//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <IDEKit/IDEViewController.h>

#import <IDEQuickHelp/NSTextViewDelegate-Protocol.h>

@class IDEQuickHelpTextCompletionController, NSString, NSTextField;

@interface IDEQuickHelpCompletionInfoViewController : IDEViewController <NSTextViewDelegate>
{
    NSTextField *_textField;
    IDEQuickHelpTextCompletionController *_controller;
    struct CGSize _renderedTextSize;
}

@property struct CGSize renderedTextSize; // @synthesize renderedTextSize=_renderedTextSize;
@property(retain) IDEQuickHelpTextCompletionController *controller; // @synthesize controller=_controller;
@property(retain, nonatomic) NSTextField *textField; // @synthesize textField=_textField;
- (void).cxx_destruct;
- (void)viewWillUninstall;
- (void)viewDidInstall;
- (void)viewDidLoad;
- (void)primitiveInvalidate;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

