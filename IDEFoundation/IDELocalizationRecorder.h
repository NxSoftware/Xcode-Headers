//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableArray;

@interface IDELocalizationRecorder : NSObject
{
    NSMutableArray *_mutableRecords;
    NSMutableArray *_classNames;
}

+ (id)sharedInstance;
@property(retain) NSMutableArray *classNames; // @synthesize classNames=_classNames;
@property(retain) NSMutableArray *mutableRecords; // @synthesize mutableRecords=_mutableRecords;
- (void).cxx_destruct;
- (void)removeAllRecords;
- (void)addRecordForMessage:(id)arg1;
- (id)recordForClassNames:(id)arg1 message:(id)arg2;
- (void)popTopClassName;
- (void)pushClassName:(id)arg1;
@property(readonly) NSArray *records;
- (id)init;

@end
