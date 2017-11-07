//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <IDEKit/IDEInspectorProperty.h>

@class IDEInspectorKeyPath, NSArray, NSComboBox;

@interface SKInspectorSoundProperty : IDEInspectorProperty
{
    NSArray *_availableSoundResources;
    IDEInspectorKeyPath *_valueKeyPath;
    struct NSObject *_resourcesKVOToken;
    NSComboBox *_comboBox;
}

@property(retain) NSComboBox *comboBox; // @synthesize comboBox=_comboBox;
- (void).cxx_destruct;
- (void)userDidChangeValue:(id)arg1;
- (void)setupRefreshTriggersAndConfigure;
- (void)refresh;
- (double)baseline;
- (void)primitiveInvalidate;
- (void)_beginObservingWorkspaceSoundResources;
- (void)viewDidLoad;

@end

