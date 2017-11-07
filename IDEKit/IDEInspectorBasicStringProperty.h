//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <IDEKit/IDEInspectorStringProperty.h>

@class IDEInspectorKeyPath, NSString, NSTextField;

@interface IDEInspectorBasicStringProperty : IDEInspectorStringProperty
{
    NSString *_explicitPlaceholder;
    IDEInspectorKeyPath *_explicitPlaceholderKeyPath;
    IDEInspectorKeyPath *_valueKeyPath;
    IDEInspectorKeyPath *_enabledKeyPath;
    IDEInspectorKeyPath *_editableKeyPath;
    Class _valueTransformerClass;
    NSString *_title;
    BOOL _isExplanitoryText;
    BOOL _allowsNilValues;
    BOOL _editable;
    BOOL _allowsAttributedStrings;
    BOOL _textFieldIsConfiguredAsEditable;
    NSTextField *_textField;
    NSTextField *_titleField;
}

@property(retain, nonatomic) NSTextField *titleField; // @synthesize titleField=_titleField;
@property(retain, nonatomic) NSTextField *textField; // @synthesize textField=_textField;
- (void).cxx_destruct;
- (id)findIndicatorContentViewWithContext:(id)arg1;
- (void)setupRefreshTriggersAndConfigure;
- (void)refresh;
- (id)nibName;
- (void)userDidChangeValue:(id)arg1;
- (double)baseline;
- (void)awakeFromNib;
- (id)view;

@end

