//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSFormatter.h>

@class IDEAppIDItemIdentifiersItemModelSet;

@interface IDEEvaluatedStringFormatter : NSFormatter
{
    IDEAppIDItemIdentifiersItemModelSet *_identifiers;
}

@property(readonly) IDEAppIDItemIdentifiersItemModelSet *identifiers; // @synthesize identifiers=_identifiers;
- (void).cxx_destruct;
- (BOOL)getObjectValue:(out id *)arg1 forString:(id)arg2 errorDescription:(id *)arg3;
- (id)editingStringForObjectValue:(id)arg1;
- (id)stringForObjectValue:(id)arg1;
- (id)attributedStringForObjectValue:(id)arg1 withDefaultAttributes:(id)arg2;
- (id)_titleForContainerID:(id)arg1;
- (id)initWithIdentifiers:(id)arg1;

@end

