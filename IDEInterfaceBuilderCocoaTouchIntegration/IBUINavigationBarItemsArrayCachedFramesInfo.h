//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <IDEInterfaceBuilderCocoaTouchIntegration/IBUIViewCachedGeometryInfo.h>

@class IBUINavigationBar, NSString;

@interface IBUINavigationBarItemsArrayCachedFramesInfo : IBUIViewCachedGeometryInfo
{
    IBUINavigationBar *_navBar;
    NSString *_itemsKeyPath;
}

@property(copy, nonatomic) NSString *itemsKeyPath; // @synthesize itemsKeyPath=_itemsKeyPath;
@property __weak IBUINavigationBar *navBar; // @synthesize navBar=_navBar;
- (void).cxx_destruct;
- (id)cachedValueFromRequestedValue:(id)arg1;
- (id)initWithNavigationBar:(id)arg1 itemsKeyPath:(id)arg2 cachedKeyPath:(id)arg3 requestedKeyPath:(id)arg4;

@end

