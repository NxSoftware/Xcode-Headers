//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <DVTKit/DVTToolbarViewController.h>

@class NSMenuItem;

@interface DVTGenericButtonViewController : DVTToolbarViewController
{
    NSMenuItem *_menuItem;
    CDUnknownBlockType _actionBlock;
    CDUnknownBlockType _setupTeardownBlock;
}

@property(copy, nonatomic) CDUnknownBlockType actionBlock; // @synthesize actionBlock=_actionBlock;
- (void).cxx_destruct;
- (BOOL)validateMenuItem:(id)arg1;
- (id)menuFormRepresentation;
- (void)_buttonAction:(id)arg1;
- (void)primitiveInvalidate;
- (id)initWithButton:(id)arg1 actionBlock:(CDUnknownBlockType)arg2 setupTeardownBlock:(CDUnknownBlockType)arg3 itemIdentifier:(id)arg4 window:(id)arg5;

@end

