//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IBUIButtonPerStateAttributes;

@interface IBUIButtonStateAttribtues : NSObject
{
    IBUIButtonPerStateAttributes *_normal;
    IBUIButtonPerStateAttributes *_highlighted;
    IBUIButtonPerStateAttributes *_disabled;
    IBUIButtonPerStateAttributes *_selected;
    IBUIButtonPerStateAttributes *_focused;
}

@property(retain, nonatomic) IBUIButtonPerStateAttributes *focused; // @synthesize focused=_focused;
@property(retain, nonatomic) IBUIButtonPerStateAttributes *selected; // @synthesize selected=_selected;
@property(retain, nonatomic) IBUIButtonPerStateAttributes *disabled; // @synthesize disabled=_disabled;
@property(retain, nonatomic) IBUIButtonPerStateAttributes *highlighted; // @synthesize highlighted=_highlighted;
@property(retain, nonatomic) IBUIButtonPerStateAttributes *normal; // @synthesize normal=_normal;
- (void).cxx_destruct;
- (id)init;

@end

