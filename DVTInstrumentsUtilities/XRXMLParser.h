//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DVTInstrumentsUtilities/NSXMLParserDelegate-Protocol.h>

@class NSString, NSXMLParser, XRXMLElementParser;
@protocol XRIssueResponder, XRXMLParserDelegate;

@interface XRXMLParser : NSObject <NSXMLParserDelegate>
{
    NSXMLParser *_parser;
    XRXMLElementParser *_workingElement;
    XRXMLElementParser *_topLevelElementParser;
    BOOL _delegateWantsFinishedCB;
    id <XRXMLParserDelegate> _delegate;
    id <XRIssueResponder> _issueResponder;
}

+ (BOOL)parseStream:(id)arg1 topLevelParser:(id)arg2 delegate:(id)arg3;
@property(retain, nonatomic) id <XRIssueResponder> issueResponder; // @synthesize issueResponder=_issueResponder;
@property(nonatomic) __weak id <XRXMLParserDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)parser:(id)arg1 parseErrorOccurred:(id)arg2;
- (void)parser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4;
- (void)parser:(id)arg1 foundCharacters:(id)arg2;
- (void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5;
- (void)finishedParsing;
- (BOOL)parseData:(id)arg1;
- (id)initWithTopLevelParser:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

