//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface DBGScreenMaskConfiguration : NSObject
{
    NSString *_deviceType;
    long long _displayPixelWidth;
    long long _displayPixelHeight;
    long long _displayCornerRadius;
}

+ (id)_knownConfigurations;
+ (id)configurationForDisplayPixelWidth:(long long)arg1 displayPixelHeight:(long long)arg2 displayCornerRadius:(long long)arg3;
@property long long displayCornerRadius; // @synthesize displayCornerRadius=_displayCornerRadius;
@property long long displayPixelHeight; // @synthesize displayPixelHeight=_displayPixelHeight;
@property long long displayPixelWidth; // @synthesize displayPixelWidth=_displayPixelWidth;
- (void).cxx_destruct;
- (id)fetchMaskImage;
- (id)initWithPixelWidth:(long long)arg1 pixelHeight:(long long)arg2 cornerRadius:(long long)arg3 deviceType:(id)arg4;

@end
