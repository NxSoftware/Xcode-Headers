//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <XCSAdministration/XCSInitializationOperation.h>

@class _TtC17XCSAdministration14NewUserAccount;

@interface XCSCreateBuildUserOperation : XCSInitializationOperation
{
    _TtC17XCSAdministration14NewUserAccount *_userToCreate;
}

@property(retain, nonatomic) _TtC17XCSAdministration14NewUserAccount *userToCreate; // @synthesize userToCreate=_userToCreate;
- (void).cxx_destruct;
- (void)run;
- (id)statusDescription;

@end

