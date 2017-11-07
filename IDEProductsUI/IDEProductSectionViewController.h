//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <IDEKit/IDEViewController.h>

#import <IDEProductsUI/IDEProductsInspectableVending-Protocol.h>

@class DVTProduct, IDEProductsViewController, NSString;
@protocol IDEProductsInspectable;

@interface IDEProductSectionViewController : IDEViewController <IDEProductsInspectableVending>
{
    BOOL _hasCompletedInitialLoading;
    BOOL _busy;
    BOOL _empty;
    DVTProduct *_selectedProduct;
    IDEProductsViewController *_productsViewController;
    NSString *_busyReason;
    id <IDEProductsInspectable> _currentInspectable;
}

+ (BOOL)canShowContentForProduct:(id)arg1;
@property(readonly, nonatomic) BOOL empty; // @synthesize empty=_empty;
@property(retain, nonatomic) id <IDEProductsInspectable> currentInspectable; // @synthesize currentInspectable=_currentInspectable;
@property(readonly, nonatomic) NSString *busyReason; // @synthesize busyReason=_busyReason;
@property(readonly, nonatomic) BOOL busy; // @synthesize busy=_busy;
@property(nonatomic) BOOL hasCompletedInitialLoading; // @synthesize hasCompletedInitialLoading=_hasCompletedInitialLoading;
@property __weak IDEProductsViewController *productsViewController; // @synthesize productsViewController=_productsViewController;
@property(retain, nonatomic) DVTProduct *selectedProduct; // @synthesize selectedProduct=_selectedProduct;
- (void).cxx_destruct;
@property(readonly) BOOL shouldShowNoSelection;
- (void)handleAction:(id)arg1 fromInspectable:(id)arg2;
- (void)refresh;
- (void)primitiveInvalidate;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) BOOL vendorIsBusy;

@end

