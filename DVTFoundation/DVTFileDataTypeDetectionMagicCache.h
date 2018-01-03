//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DVTExtension, DVTFileDataType, NSArray;

@interface DVTFileDataTypeDetectionMagicCache : NSObject
{
    DVTExtension *_extension;
    DVTFileDataType *_matchedType;
    DVTFileDataType *_detectedType;
    NSArray *_magicWords;
}

@property(readonly) NSArray *magicWords; // @synthesize magicWords=_magicWords;
@property(readonly) DVTFileDataType *detectedType; // @synthesize detectedType=_detectedType;
@property(readonly) DVTFileDataType *matchedType; // @synthesize matchedType=_matchedType;
- (void).cxx_destruct;
- (id)initWithExtension:(id)arg1;

@end

