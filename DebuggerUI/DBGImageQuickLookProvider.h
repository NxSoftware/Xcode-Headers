//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DebuggerKit/DBGAbstractQuickLookProvider.h>

@class DVTObservingToken, NSImageView, NSLayoutConstraint;
@protocol DBGNSImageProvider;

@interface DBGImageQuickLookProvider : DBGAbstractQuickLookProvider
{
    id <DBGNSImageProvider> _nsImageProvider;
    DVTObservingToken *_nsImageProviderObserver;
    int _loadedState;
    NSImageView *_imageView;
    NSLayoutConstraint *_imageWidth;
    NSLayoutConstraint *_imageHeight;
}

@property __weak NSLayoutConstraint *imageHeight; // @synthesize imageHeight=_imageHeight;
@property __weak NSLayoutConstraint *imageWidth; // @synthesize imageWidth=_imageWidth;
@property __weak NSImageView *imageView; // @synthesize imageView=_imageView;
- (void)setLoadedState:(int)arg1;
- (int)loadedState;
- (void).cxx_destruct;
- (void)writeAtomicallyToTemporaryFile:(id)arg1;
- (id)extensionForTemporaryFile;
- (void)cancelLoading;
- (void)_updateImage:(id)arg1;
- (void)loadView;
- (id)initWithDataValue:(id)arg1 options:(id)arg2;

@end

