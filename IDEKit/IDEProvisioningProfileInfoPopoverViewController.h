//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTKit/DVTPopoverContentViewController.h>

@class IDEProfileQualification, IDEProvisioningProfileInfoViewController;

@interface IDEProvisioningProfileInfoPopoverViewController : DVTPopoverContentViewController
{
    IDEProfileQualification *_qualification;
    IDEProvisioningProfileInfoViewController *_infoViewController;
}

@property(retain, nonatomic) IDEProvisioningProfileInfoViewController *infoViewController; // @synthesize infoViewController=_infoViewController;
@property(retain, nonatomic) IDEProfileQualification *qualification; // @synthesize qualification=_qualification;
- (void).cxx_destruct;
- (void)primitiveInvalidate;
- (void)viewDidLoad;
- (id)initWithQualification:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

