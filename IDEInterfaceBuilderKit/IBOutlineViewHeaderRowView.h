//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSTableRowView.h>

@class CALayer;

@interface IBOutlineViewHeaderRowView : NSTableRowView
{
    CALayer *_topLineLayer;
    BOOL _showTopLine;
}

@property(nonatomic) BOOL showTopLine; // @synthesize showTopLine=_showTopLine;
- (void).cxx_destruct;
- (id)makeBackingLayer;
- (void)_updateTopLineLayerVisibility;

@end

