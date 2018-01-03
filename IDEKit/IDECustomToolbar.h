//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSToolbar.h>

@class NSSet;

@interface IDECustomToolbar : NSToolbar
{
    NSSet *_allowedDisplayModes;
    NSSet *_allowedSizeModes;
}

@property(copy) NSSet *allowedSizeModes; // @synthesize allowedSizeModes=_allowedSizeModes;
@property(copy) NSSet *allowedDisplayModes; // @synthesize allowedDisplayModes=_allowedDisplayModes;
- (void).cxx_destruct;
- (void)setVisible:(BOOL)arg1;
- (BOOL)_allowsSizeMode:(unsigned long long)arg1;
- (BOOL)_allowsDisplayMode:(unsigned long long)arg1;
- (BOOL)isFullScreen;

@end

