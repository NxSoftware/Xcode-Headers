//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEInspectorProperty.h>

@class _TtC6IDEKit27_IDEInspectorPathEditorView;

__attribute__((visibility("hidden")))
@interface _TtC6IDEKit30IDEInspectorPathEditorProperty : IDEInspectorProperty
{
    // Error parsing type: , name: _view
    // Error parsing type: , name: _valueKeyPath
    // Error parsing type: , name: _placeHolderKeyPath
    // Error parsing type: , name: _shouldChooseFileKeyPath
    // Error parsing type: , name: _shouldChooseDirKeyPath
    // Error parsing type: , name: _canClearFilePathKeyPath
    // Error parsing type: , name: _choosePathDefaultFilePathKeyPath
    // Error parsing type: , name: _choosePathMessageKeyPath
    // Error parsing type: , name: _pathValue
    // Error parsing type: , name: _placeholderValue
    // Error parsing type: , name: _canChooseFile
    // Error parsing type: , name: _canChooseDir
    // Error parsing type: , name: _canClear
    // Error parsing type: , name: _choosePathMessage
    // Error parsing type: , name: _choosePathDefaultPath
}

- (CDUnknownBlockType).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithPropertyDefinition:(id)arg1 andController:(id)arg2;
- (void)_clearButtonClicked:(id)arg1;
- (void)_chooserButtonClicked:(id)arg1;
- (void)refresh;
- (void)setupRefreshTriggersAndConfigure;
- (void)primitiveInvalidate;
@property(nonatomic, retain) _TtC6IDEKit27_IDEInspectorPathEditorView *_view; // @synthesize _view;

@end

