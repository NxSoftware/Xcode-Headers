//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEProjectItemViewController.h>

@class IDEAppIDItemIdentifiersTableViewController, NSView, Xcode3ApplePayItemModel;

@interface Xcode3ApplePayItemViewController : IDEProjectItemViewController
{
    NSView *_identifiersSlice;
    IDEAppIDItemIdentifiersTableViewController *_identifiersTableViewController;
}

@property(retain) IDEAppIDItemIdentifiersTableViewController *identifiersTableViewController; // @synthesize identifiersTableViewController=_identifiersTableViewController;
@property(retain) NSView *identifiersSlice; // @synthesize identifiersSlice=_identifiersSlice;
- (void).cxx_destruct;
- (void)primitiveInvalidate;
- (void)loadView;

// Remaining properties
@property(readonly, nonatomic) Xcode3ApplePayItemModel *model; // @dynamic model;

@end

