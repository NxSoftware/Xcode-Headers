//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <IDEKit/IDEViewController.h>

@class DVTBorderedView, DVTReplacementView, DVTTabChooserView, NSString;

@interface IDESourceControlUI.SourceControlPrefsPaneController : IDEViewController
{
    // Error parsing type: , name: replacementView
    // Error parsing type: , name: borderedView
    // Error parsing type: , name: tabChooserView
}

- (CDUnknownBlockType).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)primitiveInvalidate;
- (void)loadWithSystems:(id)arg1;
- (void)setupTabChooserView;
- (void)loadView;
@property(nonatomic, readonly) NSString *nibName;
@property(nonatomic) __weak DVTTabChooserView *tabChooserView; // @synthesize tabChooserView;
@property(nonatomic) __weak DVTBorderedView *borderedView; // @synthesize borderedView;
@property(nonatomic) __weak DVTReplacementView *replacementView; // @synthesize replacementView;

@end
