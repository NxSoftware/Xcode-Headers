//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEViewController.h>

#import <IDEKit/IDEProvisioningIssueSliceViewDelegate-Protocol.h>

@class DVTStackView_AppKitAutolayout, IDEProvisioningIssue, IDEProvisioningSliceConfiguration, NSImageView;

@interface IDEProvisioningIssueViewController : IDEViewController <IDEProvisioningIssueSliceViewDelegate>
{
    IDEProvisioningIssue *_issue;
    NSImageView *_statusImageView;
    DVTStackView_AppKitAutolayout *_issuesStackView;
    IDEProvisioningSliceConfiguration *_configuration;
}

@property(retain, nonatomic) IDEProvisioningSliceConfiguration *configuration; // @synthesize configuration=_configuration;
@property __weak DVTStackView_AppKitAutolayout *issuesStackView; // @synthesize issuesStackView=_issuesStackView;
@property __weak NSImageView *statusImageView; // @synthesize statusImageView=_statusImageView;
@property(retain, nonatomic) IDEProvisioningIssue *issue; // @synthesize issue=_issue;
- (void).cxx_destruct;
- (void)primitiveInvalidate;
- (void)didSelectIssueActionFromProvisioningIssuesSliceView:(id)arg1;
- (void)didSelectSubtitleActionFromProvisioningIssueSliceView:(id)arg1;
- (void)viewDidLoad;
- (id)initWithIssue:(id)arg1 configuration:(id)arg2;

@end

