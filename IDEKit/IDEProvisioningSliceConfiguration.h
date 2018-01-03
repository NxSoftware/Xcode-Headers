//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DVTPortalCertificateType, NSString;

@interface IDEProvisioningSliceConfiguration : NSObject
{
    BOOL _showIconsInMenu;
    BOOL _wantsRegularControls;
    BOOL _showManageCertificates;
    BOOL _showEmptyProfileSelectionPlaceholderPlaceholder;
    BOOL _hideStatusLabel;
    BOOL _hideDivider;
    double _leftPadding;
    double _topPadding;
    double _controlWidth;
    DVTPortalCertificateType *_certificateTypeForManageCertificates;
    NSString *_signingCertificatePickerLabel;
    NSString *_noProfileRequiredLabel;
    NSString *_profilePickerLabel;
    NSString *_emptyProfileSelectionName;
    NSString *_teamPickerLabel;
}

@property(nonatomic) BOOL hideDivider; // @synthesize hideDivider=_hideDivider;
@property(nonatomic) BOOL hideStatusLabel; // @synthesize hideStatusLabel=_hideStatusLabel;
@property(retain, nonatomic) NSString *teamPickerLabel; // @synthesize teamPickerLabel=_teamPickerLabel;
@property(nonatomic) BOOL showEmptyProfileSelectionPlaceholderPlaceholder; // @synthesize showEmptyProfileSelectionPlaceholderPlaceholder=_showEmptyProfileSelectionPlaceholderPlaceholder;
@property(retain, nonatomic) NSString *emptyProfileSelectionName; // @synthesize emptyProfileSelectionName=_emptyProfileSelectionName;
@property(retain, nonatomic) NSString *profilePickerLabel; // @synthesize profilePickerLabel=_profilePickerLabel;
@property(retain, nonatomic) NSString *noProfileRequiredLabel; // @synthesize noProfileRequiredLabel=_noProfileRequiredLabel;
@property(retain, nonatomic) NSString *signingCertificatePickerLabel; // @synthesize signingCertificatePickerLabel=_signingCertificatePickerLabel;
@property(retain, nonatomic) DVTPortalCertificateType *certificateTypeForManageCertificates; // @synthesize certificateTypeForManageCertificates=_certificateTypeForManageCertificates;
@property(nonatomic) BOOL showManageCertificates; // @synthesize showManageCertificates=_showManageCertificates;
@property(nonatomic) double controlWidth; // @synthesize controlWidth=_controlWidth;
@property(nonatomic) BOOL wantsRegularControls; // @synthesize wantsRegularControls=_wantsRegularControls;
@property(nonatomic) BOOL showIconsInMenu; // @synthesize showIconsInMenu=_showIconsInMenu;
@property(nonatomic) double topPadding; // @synthesize topPadding=_topPadding;
@property(nonatomic) double leftPadding; // @synthesize leftPadding=_leftPadding;
- (void).cxx_destruct;

@end

