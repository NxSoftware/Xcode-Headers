//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface XDPMImporter : NSObject
{
    NSMutableDictionary *_allClasses;
    NSMutableDictionary *_allEntities;
    NSMutableDictionary *_allPFEntities;
}

+ (id)importMOMAtPath:(id)arg1 intoModel:(id)arg2;
- (void).cxx_destruct;
- (id)importMOM:(id)arg1 intoModel:(id)arg2;
- (id)init;

@end

