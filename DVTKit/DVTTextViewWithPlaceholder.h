//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSTextView.h>

@class NSFont, NSString;

@interface DVTTextViewWithPlaceholder : NSTextView
{
    NSString *_centeredPlaceholderString;
    BOOL _didDrawPlaceholder;
    NSFont *_placeholderFont;
}

@property(retain, nonatomic) NSFont *placeholderFont; // @synthesize placeholderFont=_placeholderFont;
@property(copy) NSString *centeredPlaceholderString; // @synthesize centeredPlaceholderString=_centeredPlaceholderString;
- (void).cxx_destruct;
- (void)didChangeText;
- (void)drawViewBackgroundInRect:(struct CGRect)arg1;

@end

