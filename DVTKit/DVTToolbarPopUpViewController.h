//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTKit/DVTGenericButtonViewController.h>

@class NSArray;

@interface DVTToolbarPopUpViewController : DVTGenericButtonViewController
{
    NSArray *_images;
}

- (void).cxx_destruct;
- (BOOL)validateMenuItem:(id)arg1;
- (id)menuFormRepresentation;
- (void)_menuItemFormRepresentationAction:(id)arg1;
- (void)_buttonAction:(id)arg1;
- (id)_popUpButton;
- (id)initWithPopUpButton:(id)arg1 images:(id)arg2 actionBlock:(CDUnknownBlockType)arg3 setupTeardownBlock:(CDUnknownBlockType)arg4 itemIdentifier:(id)arg5 window:(id)arg6;

@end

