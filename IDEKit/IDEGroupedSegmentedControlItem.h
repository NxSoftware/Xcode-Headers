//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEKit/NSCopying-Protocol.h>

@class NSImage, NSString, NSView;

@interface IDEGroupedSegmentedControlItem : NSObject <NSCopying>
{
    id _representedObject;
    NSString *_title;
    NSImage *_image;
    NSView *_overlayView;
}

+ (id)itemWithRepresentedObject:(id)arg1 title:(id)arg2 overlayView:(id)arg3;
+ (id)itemWithRepresentedObject:(id)arg1 title:(id)arg2 image:(id)arg3;
@property(readonly) NSView *overlayView; // @synthesize overlayView=_overlayView;
@property(readonly) NSImage *image; // @synthesize image=_image;
@property(readonly) NSString *title; // @synthesize title=_title;
@property(readonly) id representedObject; // @synthesize representedObject=_representedObject;
- (void).cxx_destruct;
- (id)debugDescription;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToGroupedSegmentedControlItem:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithRepresentedObject:(id)arg1 title:(id)arg2 image:(id)arg3 overlayView:(id)arg4;

@end

