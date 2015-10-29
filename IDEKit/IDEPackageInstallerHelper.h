//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class DVTFirstLaunchPackageInstallationHelper, NSArray;

@interface IDEPackageInstallerHelper : NSObject
{
    BOOL _backgroundDownloadInProgress;
    BOOL _needToQuitApps;
    DVTFirstLaunchPackageInstallationHelper *_dvtFLEPackageInstallationHelper;
}

+ (void)initialize;
@property(readonly) BOOL backgroundDownloadInProgress; // @synthesize backgroundDownloadInProgress=_backgroundDownloadInProgress;
- (void).cxx_destruct;
- (id)_genericErrorMessage;
- (id)_badPackageErrorMessage;
- (id)_notEnoughSpaceErrorMessage;
- (id)errorMessageForError:(id)arg1;
- (id)_errorAttributes;
@property(readonly) NSArray *appsThatNeedToBeQuitBeforeInstallCanProceed;
- (void)installPackagesWithAuthRef:(struct AuthorizationOpaqueRef *)arg1;
- (BOOL)needToInstallPackages;
@property(readonly) NSArray *packagesToInstall;
- (id)initWithDelegate:(id)arg1;

@end

