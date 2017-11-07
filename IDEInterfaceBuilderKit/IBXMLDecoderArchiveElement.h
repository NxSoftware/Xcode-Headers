//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <IDEInterfaceBuilderKit/IBXMLDecoderElement.h>

@class IBXMLDecoderClassesElement, IBXMLDecoderDataElement, NSString;

@interface IBXMLDecoderArchiveElement : IBXMLDecoderElement
{
    IBXMLDecoderDataElement *_dataElement;
    IBXMLDecoderClassesElement *_classesElement;
    NSString *_version;
    NSString *_type;
}

+ (id)elementName;
@property(readonly) NSString *type; // @synthesize type=_type;
@property(readonly) NSString *version; // @synthesize version=_version;
@property(readonly) IBXMLDecoderClassesElement *classesElement; // @synthesize classesElement=_classesElement;
@property(readonly) IBXMLDecoderDataElement *dataElement; // @synthesize dataElement=_dataElement;
- (void).cxx_destruct;
- (Class)elementClassForElementName:(const char *)arg1;
- (void)enumerateElements:(CDUnknownBlockType)arg1;
- (BOOL)acceptClassesElement:(id)arg1 error:(id *)arg2;
- (BOOL)acceptDataElement:(id)arg1 error:(id *)arg2;
- (BOOL)requestInsertionIntoParent:(id)arg1 error:(id *)arg2;
- (id)initWithAttributes:(const char **)arg1 stringTable:(id)arg2 error:(id *)arg3;

@end

