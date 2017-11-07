//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <HexEditor/IDEHexEditor.h>

#import <DebuggerUI/HFTextColoringDelegate-Protocol.h>

@class DBGMemoryBrowserDocument, DVTBorderedView, DVTObservingToken, NSButton, NSPopUpButton, NSString, NSTextField;

@interface DBGMemoryBrowser : IDEHexEditor <HFTextColoringDelegate>
{
    DVTBorderedView *_bottomToolBar;
    NSTextField *_addressTextField;
    NSButton *_freezeButton;
    NSPopUpButton *_numberOfBytes;
    struct CGColor *_validBytesColor;
    struct CGColor *_invalidBytesColor;
    DVTObservingToken *memoryDataValidityObservingToken;
    DVTObservingToken *rawMemoryDataObservingToken;
}

+ (unsigned long long)defaultLineNumberFormat;
+ (id)lineNumberFormatStateKey;
+ (BOOL)_isAddressData64Bit:(unsigned long long)arg1;
+ (id)displayStringForAddress:(unsigned long long)arg1;
+ (id)keyPathsForValuesAffectingMemoryBrowserDocument;
- (void).cxx_destruct;
- (void)_themeColorsUpdated;
- (void)colorForBytesStartingAtIndex:(unsigned long long)arg1 resultingColor:(struct CGColor **)arg2 chunkLength:(unsigned long long *)arg3;
- (void)_updateMemoryDataWithRelativeOffset:(long long)arg1;
- (void)nextOrPreviousPage:(id)arg1;
- (void)numberOfBytesChanged:(id)arg1;
- (void)addressEntered:(id)arg1;
- (void)_handleMemoryDataUpdated;
@property(readonly) DBGMemoryBrowserDocument *memoryBrowserDocument;
- (void)primitiveInvalidate;
- (void)loadView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

