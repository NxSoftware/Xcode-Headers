//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <DVTFoundation/DVTDocumentLocation.h>

@class NSString;

@interface IDEScriptingDefinitionDocumentLocation : DVTDocumentLocation
{
    NSString *suiteCode;
    NSString *commandOrClassCode;
    NSString *elementOrPropertyCode;
}

@property(readonly) NSString *elementOrPropertyCode; // @synthesize elementOrPropertyCode;
@property(readonly) NSString *commandOrClassCode; // @synthesize commandOrClassCode;
@property(readonly) NSString *suiteCode; // @synthesize suiteCode;
- (void).cxx_destruct;
- (id)initWithDocumentURL:(id)arg1 timestamp:(id)arg2 definition:(id)arg3;

@end

