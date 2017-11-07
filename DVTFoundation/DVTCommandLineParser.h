//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface DVTCommandLineParser : NSObject
{
    NSString *_usageBanner;
    NSArray *_optionDefinitions;
    CDUnknownBlockType _fallbackOptionHandlerBlock;
}

@property(copy) CDUnknownBlockType fallbackOptionHandlerBlock; // @synthesize fallbackOptionHandlerBlock=_fallbackOptionHandlerBlock;
@property(copy) NSArray *optionDefinitions; // @synthesize optionDefinitions=_optionDefinitions;
@property(copy) NSString *usageBanner; // @synthesize usageBanner=_usageBanner;
- (void).cxx_destruct;
- (id)usageString;
- (id)parseArguments:(id)arg1 intoOptionsDictionary:(id)arg2 error:(id *)arg3;
- (id)lookUpOptionDefinitionForArgument:(id)arg1;
- (id)init;

@end

