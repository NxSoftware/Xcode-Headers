//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSView.h>

#import <IDEIODebugGaugesUI/DVTInvalidation-Protocol.h>

@class DVTStackBacktrace, NSAttributedString, NSColor, NSMutableArray, NSString;

@interface IDEGFXGaugeVerticalAxisLabel : NSView <DVTInvalidation>
{
    NSMutableArray *_planes;
    NSMutableArray *_planesNeedLabel;
    NSMutableArray *_rangeObservingTokens;
    NSAttributedString *_targetLabel;
    double _targetLabelHeight;
    NSColor *_borderColor;
    NSColor *_fontColor;
    long long _targetFramerate;
}

+ (void)initialize;
@property(nonatomic) long long targetFramerate; // @synthesize targetFramerate=_targetFramerate;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (void)addAxisForPlane:(id)arg1 hasLabel:(BOOL)arg2;
- (void)primitiveInvalidate;
- (void)_setupLabel;
- (void)_commonInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

