//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DVTInstrumentsUtilities/XRXMLParserDelegate-Protocol.h>

@class NSDate, NSString;

@interface XREngineeringTypeDefinitions : NSObject <XRXMLParserDelegate>
{
    CDUnknownBlockType _etypeDefHandler;
}

+ (id)implementationClassByEngineeringTypeMnemonic;
+ (void)announceUsageOfEnumString:(id)arg1 context:(id)arg2;
+ (BOOL)registerEngineeringTypes:(id)arg1;
+ (id)descriptionForImplClass:(unsigned char)arg1;
- (void).cxx_destruct;
- (void)parser:(id)arg1 didFinishParsingElement:(id)arg2;
- (void)enumerateEngineeringTypeDefs:(CDUnknownBlockType)arg1;
- (id)definitionXMLContents;
- (id)checksum;
@property(readonly, nonatomic) NSDate *lastModificationDate;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

