//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <IDEInterfaceBuilderKit/IBAutolayoutIssueResolvingViewController.h>

@class IBAutolayoutMisplacementStatus, IBDocument, NSButton;

@interface IBAutolayoutMisplacedViewResolvingViewController : IBAutolayoutIssueResolvingViewController
{
    BOOL _shouldApplyToAllViewsInContainer;
    IBAutolayoutMisplacementStatus *_status;
    IBDocument *_document;
    unsigned long long _resolvingAction;
    NSButton *_shouldUpdateFramesButton;
    NSButton *_shouldUpdateConstraintsButton;
    NSButton *_shouldResetToSuggestedConstraintsButton;
    NSButton *_shouldApplyToAllViewsInContainerButton;
}

+ (id)keyPathsForValuesAffectingShouldResetToSuggestedConstraints;
+ (id)keyPathsForValuesAffectingShouldUpdateConstraints;
+ (id)keyPathsForValuesAffectingShouldUpdateFrames;
@property(nonatomic) BOOL shouldApplyToAllViewsInContainer; // @synthesize shouldApplyToAllViewsInContainer=_shouldApplyToAllViewsInContainer;
@property(retain) NSButton *shouldApplyToAllViewsInContainerButton; // @synthesize shouldApplyToAllViewsInContainerButton=_shouldApplyToAllViewsInContainerButton;
@property(retain) NSButton *shouldResetToSuggestedConstraintsButton; // @synthesize shouldResetToSuggestedConstraintsButton=_shouldResetToSuggestedConstraintsButton;
@property(retain) NSButton *shouldUpdateConstraintsButton; // @synthesize shouldUpdateConstraintsButton=_shouldUpdateConstraintsButton;
@property(retain) NSButton *shouldUpdateFramesButton; // @synthesize shouldUpdateFramesButton=_shouldUpdateFramesButton;
@property(nonatomic) unsigned long long resolvingAction; // @synthesize resolvingAction=_resolvingAction;
@property(readonly, nonatomic) IBDocument *document; // @synthesize document=_document;
@property(readonly, nonatomic) IBAutolayoutMisplacementStatus *status; // @synthesize status=_status;
- (void).cxx_destruct;
- (void)primitiveInvalidate;
- (void)confirmChanges;
@property(nonatomic) BOOL shouldResetToSuggestedConstraints;
- (void)setShouldResetToSuggestedConstraintsAction:(id)arg1;
@property(nonatomic) BOOL shouldUpdateConstraints;
- (void)setShouldUpdateConstraintsAction:(id)arg1;
@property(nonatomic) BOOL shouldUpdateFrames;
- (void)setShouldUpdateFramesAction:(id)arg1;
- (void)viewDidInstall;
- (id)initWithStatus:(id)arg1 document:(id)arg2;

@end

