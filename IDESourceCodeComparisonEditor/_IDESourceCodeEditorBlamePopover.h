//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSPopover.h>

@class IDESourceCodeSingleLineBlameProvider;

@interface _IDESourceCodeEditorBlamePopover : NSPopover
{
    IDESourceCodeSingleLineBlameProvider *_blameProvider;
    id _sourceView;
}

@property(retain) id sourceView; // @synthesize sourceView=_sourceView;
@property(retain) IDESourceCodeSingleLineBlameProvider *blameProvider; // @synthesize blameProvider=_blameProvider;
- (void).cxx_destruct;

@end

