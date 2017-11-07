//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <IDEKit/IDEInspectorProperty.h>

@class IDEInspectorKeyPath, NSColorScaleSlider, NSStepper, NSString, NSTextField;

@interface IDEInspectorColorComponentProperty : IDEInspectorProperty
{
    IDEInspectorKeyPath *_valueKeyPath;
    IDEInspectorKeyPath *_colorValueKeyPath;
    NSString *_componentName;
    long long _inputType;
    BOOL _extendedRange;
    NSColorScaleSlider *_colorSlider;
    NSTextField *_valueText;
    NSStepper *_stepper;
}

@property(retain, nonatomic) NSStepper *stepper; // @synthesize stepper=_stepper;
@property(retain, nonatomic) NSTextField *valueText; // @synthesize valueText=_valueText;
@property(retain, nonatomic) NSColorScaleSlider *colorSlider; // @synthesize colorSlider=_colorSlider;
- (void).cxx_destruct;
- (void)userDidChangeValue:(id)arg1;
- (void)refresh;
- (void)setupRefreshTriggersAndConfigure;
- (id)nibName;
- (double)baseline;
- (id)initWithPropertyDefinition:(id)arg1 andController:(id)arg2;

@end

