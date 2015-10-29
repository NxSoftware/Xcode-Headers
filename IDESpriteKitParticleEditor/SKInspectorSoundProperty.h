//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IDEInspectorProperty.h"

@class IDEInspectorKeyPath, NSArray, NSComboBox;

@interface SKInspectorSoundProperty : IDEInspectorProperty
{
    NSComboBox *_comboBox;
    NSArray *_availableSoundFiles;
    IDEInspectorKeyPath *_valueKeyPath;
}

+ (id)scannedSoundNames;
+ (id)supportedSoundFileTypes;
- (void).cxx_destruct;
- (void)userDidChangeValue:(id)arg1;
- (void)setupRefreshTriggersAndConfigure;
- (void)refresh;
- (double)baseline;
- (id)comboBox;

@end

