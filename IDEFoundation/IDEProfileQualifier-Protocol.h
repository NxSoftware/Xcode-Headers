//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

@class IDEProfileQualifierResult, NSString;

@protocol IDEProfileQualifier
@property(readonly, copy, nonatomic) NSString *debugDescription;
@property(readonly, nonatomic) NSString *userFacingName;
@property(readonly, nonatomic) BOOL onlyDisplayOnError;
@property(readonly, nonatomic) IDEProfileQualifierResult *result;
- (BOOL)qualify;
@end

