//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <DVTInstrumentsUtilities/XRXMLElementParser.h>

#import <DVTInstrumentsUtilities/XREngineeringTypeDef-Protocol.h>

@class NSString, XREngineeringTypeEncodingConvention;

@interface _XREngineeringTypeDef : XRXMLElementParser <XREngineeringTypeDef>
{
    BOOL _handledEncodingElement;
    unsigned char _impl;
    BOOL _experimental;
    BOOL _deprecated;
    NSString *_mnemonic;
    NSString *_title;
    NSString *_enumString;
    NSString *_usage;
    unsigned long long _attributes;
    XREngineeringTypeEncodingConvention *_encodingConvention;
}

+ (id)_elementNameToKVCMap;
+ (id)_elementNameToClassMap;
@property(retain, nonatomic) XREngineeringTypeEncodingConvention *encodingConvention; // @synthesize encodingConvention=_encodingConvention;
@property(nonatomic) BOOL deprecated; // @synthesize deprecated=_deprecated;
@property(nonatomic) BOOL experimental; // @synthesize experimental=_experimental;
@property(nonatomic) unsigned long long attributes; // @synthesize attributes=_attributes;
@property(nonatomic) unsigned char impl; // @synthesize impl=_impl;
@property(retain, nonatomic) NSString *usage; // @synthesize usage=_usage;
@property(retain, nonatomic) NSString *enumString; // @synthesize enumString=_enumString;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *mnemonic; // @synthesize mnemonic=_mnemonic;
- (void).cxx_destruct;
- (long long)conventionalBitWidth;
- (id)errorStringHeader;
- (void)_handleCompletion;
- (void)didHandleEncodingElement;
- (void)addAttribute:(unsigned long long)arg1;
- (void)addString:(id)arg1 elementType:(id)arg2;

@end

