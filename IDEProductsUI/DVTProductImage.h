//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DVTProductIdentifier, NSImage, NSURL;

@interface DVTProductImage : NSObject
{
    NSImage *_image;
    NSURL *_imageURL;
    DVTProductIdentifier *_productIdentifier;
}

@property(retain, nonatomic) DVTProductIdentifier *productIdentifier; // @synthesize productIdentifier=_productIdentifier;
@property(retain, nonatomic) NSURL *imageURL; // @synthesize imageURL=_imageURL;
@property(retain, nonatomic) NSImage *image; // @synthesize image=_image;
- (void).cxx_destruct;
- (id)initWithImage:(id)arg1 imageURL:(id)arg2 productIdentifer:(id)arg3;

@end

