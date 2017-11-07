//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSTextField.h>

#import <IDEInterfaceBuilderKit/IBFindIndicatorProvider-Protocol.h>

@class NSString;

@interface NSTextField (IBTextFieldAdditions) <IBFindIndicatorProvider>
+ (id)ib_staticTextLabel;
- (struct _NSRange)ib_findIndicatorRangeForSearchString:(id)arg1;
- (id)ib_findableStringValue;
- (id)ib_showFindIndicatorForTextRange:(struct _NSRange)arg1 takeFocus:(BOOL)arg2;
- (void)ib_prepareFieldEditorBeforeShowingFindIndicator:(id)arg1;
- (void)ib_sizeToFitAndCenterWithIntegralOriginAndSizeInRect:(struct CGRect)arg1;
- (struct CGRect)ib_sizeToFitFrameCenteredWithIntegralOriginAndSizeInRect:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

