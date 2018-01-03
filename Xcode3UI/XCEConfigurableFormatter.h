//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSFormatter.h>

@class NSString;

@interface XCEConfigurableFormatter : NSFormatter
{
    struct NSObject *_adapter;
    NSString *_oldStringValue;
    struct {
        unsigned int _adapterRespondsTo_stringForObjectValue:1;
        unsigned int _adapterRespondsTo_getObjectValue:1;
        unsigned int _reserved:30;
    } _flags;
}

- (void).cxx_destruct;
- (BOOL)getObjectValue:(out id *)arg1 forString:(id)arg2 errorDescription:(out id *)arg3;
- (id)stringForObjectValue:(id)arg1;
- (id)oldStringValue;
- (void)setOldStringValue:(id)arg1;
- (struct NSObject *)adapter;
- (void)setAdapter:(struct NSObject *)arg1;

@end

