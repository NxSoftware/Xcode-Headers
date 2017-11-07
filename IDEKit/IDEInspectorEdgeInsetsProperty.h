//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <IDEKit/IDEInspectorProperty.h>

@class IDEInspectorKeyPath, NSButton, NSStepper, NSString, NSTextField;

@interface IDEInspectorEdgeInsetsProperty : IDEInspectorProperty
{
    IDEInspectorKeyPath *_valueKeyPath;
    IDEInspectorKeyPath *_nonNilValueKeyPath;
    IDEInspectorKeyPath *_nonNilValueObjectKeyPath;
    NSString *_nilPlaceholder;
    BOOL _allowsNilValues;
    long long _checkStateForNonNil;
    long long _checkStateForNil;
    NSTextField *_topTextField;
    NSTextField *_leftTextField;
    NSStepper *_topStepper;
    NSStepper *_leftStepper;
    NSTextField *_topLabel;
    NSTextField *_leftLabel;
    NSTextField *_bottomTextField;
    NSTextField *_rightTextField;
    NSStepper *_bottomStepper;
    NSStepper *_rightStepper;
    NSTextField *_bottomLabel;
    NSTextField *_rightLabel;
    NSButton *_hasValueCheckBox;
}

@property(retain, nonatomic) NSButton *hasValueCheckBox; // @synthesize hasValueCheckBox=_hasValueCheckBox;
@property(retain, nonatomic) NSTextField *rightLabel; // @synthesize rightLabel=_rightLabel;
@property(retain, nonatomic) NSTextField *bottomLabel; // @synthesize bottomLabel=_bottomLabel;
@property(retain, nonatomic) NSStepper *rightStepper; // @synthesize rightStepper=_rightStepper;
@property(retain, nonatomic) NSStepper *bottomStepper; // @synthesize bottomStepper=_bottomStepper;
@property(retain, nonatomic) NSTextField *rightTextField; // @synthesize rightTextField=_rightTextField;
@property(retain, nonatomic) NSTextField *bottomTextField; // @synthesize bottomTextField=_bottomTextField;
@property(retain, nonatomic) NSTextField *leftLabel; // @synthesize leftLabel=_leftLabel;
@property(retain, nonatomic) NSTextField *topLabel; // @synthesize topLabel=_topLabel;
@property(retain, nonatomic) NSStepper *leftStepper; // @synthesize leftStepper=_leftStepper;
@property(retain, nonatomic) NSStepper *topStepper; // @synthesize topStepper=_topStepper;
@property(retain, nonatomic) NSTextField *leftTextField; // @synthesize leftTextField=_leftTextField;
@property(retain, nonatomic) NSTextField *topTextField; // @synthesize topTextField=_topTextField;
- (void).cxx_destruct;
- (id)findIndicatorContentViewWithContext:(id)arg1;
- (void)refresh;
- (void)toggleNilValue:(id)arg1;
- (void)userDidEnterRight:(id)arg1;
- (void)userDidEnterBottom:(id)arg1;
- (void)userDidEnterLeft:(id)arg1;
- (void)userDidEnterTop:(id)arg1;
- (void)userDidIncrementRight:(id)arg1;
- (void)userDidIncrementBottom:(id)arg1;
- (void)userDidIncrementLeft:(id)arg1;
- (void)userDidIncrementTop:(id)arg1;
- (void)applyUserEdgeInsetsFromSender:(id)arg1 byMappingValues:(CDUnknownBlockType)arg2;
- (double)baseline;
- (id)nibName;
- (void)loadView;
- (void)setupRefreshTriggersAndConfigure;
- (BOOL)allowsNilValues;

@end

