//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IDEKeyDrivenNavigableItem.h"

@class DVTNotificationToken, NSImage, NSString;

@interface Xcode3OCUnitTestableNavigableItem : IDEKeyDrivenNavigableItem
{
    NSString *_testableName;
    NSImage *_testableImage;
    DVTNotificationToken *_testableImageNotificationToken;
}

- (void).cxx_destruct;
- (id)image;
- (id)name;
- (void)_setImageFromTarget;
- (void)_setNameFromTarget;
- (void)primitiveInvalidate;
- (id)initWithRepresentedObject:(id)arg1;

@end

