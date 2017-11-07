//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DVTExtension, NSArray, NSAttributedString, NSImage, NSString;

@interface DVTLibraryAsset : NSObject
{
    DVTExtension *_extension;
    id _representedObject;
    NSImage *_image;
    NSString *_title;
    NSString *_subtitle;
    NSString *_summary;
    NSString *_badgeString;
    NSAttributedString *_fullDescription;
    NSArray *_detailControllerIdentifiers;
    NSString *_identifier;
}

@property(readonly) NSString *identifier; // @synthesize identifier=_identifier;
@property(copy) NSArray *detailControllerIdentifiers; // @synthesize detailControllerIdentifiers=_detailControllerIdentifiers;
@property(copy) NSAttributedString *fullDescription; // @synthesize fullDescription=_fullDescription;
@property(copy) NSString *badgeString; // @synthesize badgeString=_badgeString;
@property(copy) NSString *summary; // @synthesize summary=_summary;
@property(copy) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(copy) NSString *title; // @synthesize title=_title;
@property(copy) NSImage *image; // @synthesize image=_image;
@property(retain) id representedObject; // @synthesize representedObject=_representedObject;
- (void).cxx_destruct;
- (id)description;
- (id)initWithIdentifier:(id)arg1;

@end

