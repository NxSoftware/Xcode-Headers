//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IDEInspectorProperty.h"

@class DBGImageInspectorPropertyView, IDEInspectorKeyPath, NSTextField;

@interface DBGImageInspectorProperty : IDEInspectorProperty
{
    IDEInspectorKeyPath *_valueKeyPath;
    NSTextField *_textField;
    DBGImageInspectorPropertyView *_imageView;
}

@property __weak DBGImageInspectorPropertyView *imageView; // @synthesize imageView=_imageView;
@property __weak NSTextField *textField; // @synthesize textField=_textField;
- (void).cxx_destruct;
- (void)_copyImageToClipboard:(id)arg1;
- (void)setupRefreshTriggersAndConfigure;
- (double)baseline;
- (void)_adjustHeightTo:(double)arg1;
- (void)refresh;

@end

