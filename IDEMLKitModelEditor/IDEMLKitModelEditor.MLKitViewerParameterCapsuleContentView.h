//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <DVTKit/DVTWrapperView.h>

#import <IDEMLKitModelEditor/NSOutlineViewDelegate-Protocol.h>

@class NSOutlineView;

@interface IDEMLKitModelEditor.MLKitViewerParameterCapsuleContentView : DVTWrapperView <NSOutlineViewDelegate>
{
    // Error parsing type: , name: outlineInset
    // Error parsing type: , name: outlineView
}

- (CDUnknownBlockType).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutBottomUp;
- (void)outlineViewItemDidCollapse:(id)arg1;
- (void)outlineViewItemDidExpand:(id)arg1;
- (void)awakeFromNib;
@property(nonatomic, retain) NSOutlineView *outlineView; // @synthesize outlineView;
@property(nonatomic, readonly) CDStruct_d2b197d1 outlineInset; // @synthesize outlineInset;

@end

