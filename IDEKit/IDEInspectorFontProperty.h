//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEInspectorProperty.h>

#import <IDEKit/DVTFontTextFieldCellDelegate-Protocol.h>

@class DVTFontTextField, IDEInspectorKeyPath, NSStepper, NSString;

@interface IDEInspectorFontProperty : IDEInspectorProperty <DVTFontTextFieldCellDelegate>
{
    IDEInspectorKeyPath *_dataSourceKeyPath;
    IDEInspectorKeyPath *_valueKeyPath;
    DVTFontTextField *_textField;
    NSStepper *_stepper;
}

@property(retain, nonatomic) NSStepper *stepper; // @synthesize stepper=_stepper;
@property(retain, nonatomic) DVTFontTextField *textField; // @synthesize textField=_textField;
- (void).cxx_destruct;
- (id)findIndicatorContentViewWithContext:(id)arg1;
- (void)tearDownRefreshTriggers;
- (void)setupRefreshTriggersAndConfigure;
- (void)fontTextFieldCell:(id)arg1 enumerateMultipleValues:(CDUnknownBlockType)arg2;
- (void)refresh;
- (BOOL)canEditSize;
- (void)userDidChangeValue:(id)arg1;
- (void)incrementSize:(id)arg1;
- (double)baseline;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

