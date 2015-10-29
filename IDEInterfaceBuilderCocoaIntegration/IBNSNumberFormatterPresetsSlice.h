//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IDEInspectorProperty.h"

@class IBInspectorViewController, NSTableView;

@interface IBNSNumberFormatterPresetsSlice : IDEInspectorProperty
{
    NSTableView *presetsTableView;
}

+ (id)presetFormattersToDescriptions;
+ (id)formatDescriptions;
- (void).cxx_destruct;
- (double)baseline;
- (long long)numberOfRowsInTableView:(id)arg1;
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3;
- (void)tableViewSelectionDidChange:(id)arg1;
- (BOOL)tableView:(id)arg1 shouldSelectRow:(long long)arg2;
- (id)presetFormatters;

// Remaining properties
@property(readonly) IBInspectorViewController *inspectorController; // @dynamic inspectorController;

@end

