//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <XCSCore/XCSObject.h>

@class NSDictionary;

@interface XCSBotSCMBlueprint : XCSObject
{
    NSDictionary *sourceControlBlueprint;
}

+ (id)blueprintWithContents:(id)arg1 validationErrors:(id *)arg2;
@property(retain, nonatomic) NSDictionary *sourceControlBlueprint; // @synthesize sourceControlBlueprint;
- (void).cxx_destruct;
- (BOOL)_validateWithContents:(id)arg1 validationErrors:(id *)arg2;
- (id)saveRepresentationHumanReadable:(BOOL)arg1;
- (id)saveRepresentation;
- (id)dictionaryRepresentation;
- (id)description;
- (id)initWithContents:(id)arg1 service:(id)arg2 validationErrors:(id *)arg3;

@end

