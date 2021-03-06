//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <DVTKit/DVTLayoutView_ML.h>

#import <DVTKit/DVTDisclosureHeaderViewDelegate-Protocol.h>
#import <DVTKit/DVTDraggableView-Protocol.h>
#import <DVTKit/DVTIssueDisplayingView-Protocol.h>

@class DVTDisclosureHeaderView, NSColor, NSDictionary, NSString, NSView;

@interface DVTDisclosureView : DVTLayoutView_ML <DVTDisclosureHeaderViewDelegate, DVTDraggableView, DVTIssueDisplayingView>
{
    NSView *contentView;
    DVTDisclosureHeaderView *_headerView;
    NSColor *_bottomBorderColor;
    NSColor *_backgroundColor;
    NSString *_disclosureStatePersistenceDefaultsKey;
    CDStruct_bf6d4a14 _contentMargins;
    BOOL _shouldAlwaysDrawBottomBorder;
}

+ (Class)headerViewClass;
+ (id)keyPathsForValuesAffectingDisclosed;
+ (void)initialize;
@property BOOL shouldAlwaysDrawBottomBorder; // @synthesize shouldAlwaysDrawBottomBorder=_shouldAlwaysDrawBottomBorder;
- (void).cxx_destruct;
- (id)accessibilityTitle;
- (id)accessibilityRoleDescription;
- (id)accessibilityRole;
- (void)setAccessibilityExpanded:(BOOL)arg1;
- (BOOL)isAccessibilityExpanded;
- (BOOL)isAccessibilityElement;
@property(copy) NSDictionary *issueInfoDictionary;
- (struct CGRect)draggingRect;
- (void)disclosureHeaderView:(id)arg1 didChangeDisclosedState:(BOOL)arg2;
@property(copy) NSString *disclosureStatePersistenceDefaultsKey; // @dynamic disclosureStatePersistenceDefaultsKey;
@property(getter=isDisclosed) BOOL disclosed;
@property(copy) NSColor *backgroundColor;
@property(copy) NSColor *bottomBorderColor;
@property CDStruct_bf6d4a14 contentMargins;
@property(retain) NSView *contentView;
- (void)reflectDefaultsDisclosureState;
- (void)drawRect:(struct CGRect)arg1;
- (struct CGRect)bottomBorderRect;
- (void)layoutBottomUp;
- (void)layoutTopDown;
- (BOOL)shouldDrawBottomBorder;
- (BOOL)isFlipped;
@property(retain) DVTDisclosureHeaderView *headerView; // @dynamic headerView;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

