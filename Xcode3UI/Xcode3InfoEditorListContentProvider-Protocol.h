//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Xcode3UI/NSObject-Protocol.h>

@class IDEWorkspace, NSArray;
@protocol IDEBlueprint;

@protocol Xcode3InfoEditorListContentProvider <NSObject>
@property(readonly) NSArray *listContents;
- (id)initWithBlueprint:(id <IDEBlueprint>)arg1 workspace:(IDEWorkspace *)arg2;
@end

