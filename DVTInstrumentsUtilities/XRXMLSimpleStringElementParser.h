//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <DVTInstrumentsUtilities/XRXMLElementParser.h>

@class NSMutableString, NSString;

@interface XRXMLSimpleStringElementParser : XRXMLElementParser
{
    NSMutableString *accumulator;
}

- (void).cxx_destruct;
- (void)_handleCompletion;
- (void)_handleCharacters:(id)arg1;
- (id)collapsedStringValue;
@property(readonly, nonatomic) NSString *stringValue;

@end

