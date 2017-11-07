//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <IDEKit/IDEViewController.h>

@class DVTObservingToken, DVTStackView_AppKitAutolayout, IDEProvisioningSliceConfiguration, NSBox, NSLayoutConstraint, NSTextField;
@protocol IDEProvisioningIssuesDataSource;

@interface IDEProvisioningIssuesViewController : IDEViewController
{
    id <IDEProvisioningIssuesDataSource> _dataSource;
    DVTStackView_AppKitAutolayout *_issuesStackView;
    NSLayoutConstraint *_issuesStackViewLeadingConstraint;
    NSLayoutConstraint *_issuesStackViewTopConstraint;
    NSLayoutConstraint *_issuesStackViewWidthConstraint;
    NSTextField *_statusLabel;
    NSBox *_divider;
    DVTObservingToken *_errorsObserver;
    IDEProvisioningSliceConfiguration *_configuration;
}

@property(retain, nonatomic) IDEProvisioningSliceConfiguration *configuration; // @synthesize configuration=_configuration;
@property(retain, nonatomic) DVTObservingToken *errorsObserver; // @synthesize errorsObserver=_errorsObserver;
@property(retain, nonatomic) NSBox *divider; // @synthesize divider=_divider;
@property(retain, nonatomic) NSTextField *statusLabel; // @synthesize statusLabel=_statusLabel;
@property(retain, nonatomic) NSLayoutConstraint *issuesStackViewWidthConstraint; // @synthesize issuesStackViewWidthConstraint=_issuesStackViewWidthConstraint;
@property(retain, nonatomic) NSLayoutConstraint *issuesStackViewTopConstraint; // @synthesize issuesStackViewTopConstraint=_issuesStackViewTopConstraint;
@property(retain, nonatomic) NSLayoutConstraint *issuesStackViewLeadingConstraint; // @synthesize issuesStackViewLeadingConstraint=_issuesStackViewLeadingConstraint;
@property(retain, nonatomic) DVTStackView_AppKitAutolayout *issuesStackView; // @synthesize issuesStackView=_issuesStackView;
@property(retain, nonatomic) id <IDEProvisioningIssuesDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (void)primitiveInvalidate;
- (void)updateIssuesList;
- (void)viewDidLoad;
- (id)initWithDataSource:(id)arg1 configuration:(id)arg2;

@end

