//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <IDEKit/IDEFilterControlBar.h>

@class DVTSearchField, NSMenu;

@interface IDESearchFilterControlBar : IDEFilterControlBar
{
}

- (id)_filterControlFieldWithFrame:(struct CGRect)arg1;
@property(copy) NSMenu *searchMenuTemplate;
- (void)_updateCellForSearchField:(id)arg1;

// Remaining properties
@property(readonly) DVTSearchField *filterControlField; // @dynamic filterControlField;

@end
