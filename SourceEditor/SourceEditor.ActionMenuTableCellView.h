//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSTableCellView.h>

@class NSImage, NSProgressIndicator, NSTextField;

@interface SourceEditor.ActionMenuTableCellView : NSTableCellView
{
    // Error parsing type: , name: modifierTextField
    // Error parsing type: , name: progressIndicator
    // Error parsing type: , name: icon
    // Error parsing type: , name: tintedIcon
    // Error parsing type: , name: isDark
    // Error parsing type: , name: isEnabled
    // Error parsing type: , name: isSelected
    // Error parsing type: , name: requiresMoreTime
}

- (CDUnknownBlockType).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviewsWithWidth:(double)arg1 maximumModifierWidth:(double)arg2;
@property(nonatomic) BOOL requiresMoreTime; // @synthesize requiresMoreTime;
@property(nonatomic) BOOL isSelected; // @synthesize isSelected;
- (void)awakeFromNib;
@property(nonatomic) BOOL isEnabled; // @synthesize isEnabled;
@property(nonatomic) BOOL isDark; // @synthesize isDark;
@property(nonatomic, retain) NSImage *tintedIcon; // @synthesize tintedIcon;
@property(nonatomic, retain) NSImage *icon; // @synthesize icon;
@property(nonatomic, retain) NSProgressIndicator *progressIndicator; // @synthesize progressIndicator;
@property(nonatomic, retain) NSTextField *modifierTextField; // @synthesize modifierTextField;

@end

