//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSColor.h>

@class NSString;

@interface IBICNamedColor : NSColor
{
    NSString *_bundleID;
    NSString *_colorNameComponent;
    BOOL _placeholder;
    BOOL _unarchivesAsColorWrapper;
    NSColor *_genericColor;
}

+ (id)placeholderColorWithName:(id)arg1 genericColor:(id)arg2;
+ (id)colorWithBundleID:(id)arg1 name:(id)arg2 genericColor:(id)arg3;
+ (id)colorWithName:(id)arg1 genericColor:(id)arg2;
+ (void)swizzleInNamedColorSupport;
@property(readonly, nonatomic) BOOL unarchivesAsColorWrapper; // @synthesize unarchivesAsColorWrapper=_unarchivesAsColorWrapper;
@property(readonly, nonatomic, getter=isPlaceholder) BOOL placeholder; // @synthesize placeholder=_placeholder;
@property(readonly, nonatomic) NSColor *genericColor; // @synthesize genericColor=_genericColor;
- (void).cxx_destruct;
- (BOOL)dvt_isMissingResource;
- (BOOL)ibGetColorName:(id *)arg1 bundleID:(id *)arg2 fallbackColor:(id *)arg3 unarchiveAsColorWrapper:(char *)arg4;
- (id)colorThatUnarchivesAsNamedColor;
- (id)colorThatUnarchivesAsColorWrapper;
- (void)encodeWithCoder:(id)arg1;
- (Class)classForCoder;
- (BOOL)ib_isAssetCatalogNamedColor;
- (id)ib_assetCatalogNamedColorBaseColor;
- (BOOL)isUniform;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (id)colorNameComponent;
- (id)colorUsingColorSpace:(id)arg1;
- (id)colorUsingColorSpaceName:(id)arg1 device:(id)arg2;
- (id)colorWithAlphaComponent:(double)arg1;
- (double)alphaComponent;
- (void)drawSwatchInRect:(struct CGRect)arg1;
- (struct CGColor *)CGColor;
- (void)setStroke;
- (void)setFill;
- (void)set;
- (id)colorSpaceName;
@property(readonly, nonatomic) NSString *bundleIDComponent;
- (id)catalogNameComponent;
- (id)initWithBundleID:(id)arg1 colorName:(id)arg2 isPlaceholder:(BOOL)arg3 genericColor:(id)arg4 unarchivesAsColorWrapper:(BOOL)arg5;
- (id)initWithBundleID:(id)arg1 colorName:(id)arg2 isPlaceholder:(BOOL)arg3 genericColor:(id)arg4;

@end

