//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface DVTIconSet : NSObject
{
    NSArray *_components;
}

+ (id)generateThumbnailFromURL:(id)arg1 targetSize:(struct CGSize)arg2;
+ (id)generateImageFromURL:(id)arg1 error:(id *)arg2;
@property(readonly) NSArray *components; // @synthesize components=_components;
- (void).cxx_destruct;
- (id)description;
- (id)generateImageReturningError:(id *)arg1;
- (id)initWithURL:(id)arg1 error:(id *)arg2;

@end

