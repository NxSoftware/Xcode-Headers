//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <IDEFoundation/IDEBatchFindAbstractMatchResult.h>

@class IDEIndexSymbol;

@interface IDEBatchFindSymbolicResult : IDEBatchFindAbstractMatchResult
{
    IDEIndexSymbol *_symbol;
}

@property(retain) IDEIndexSymbol *symbol; // @synthesize symbol=_symbol;
- (void).cxx_destruct;
- (id)initWithDocumentLocation:(id)arg1 contextText:(id)arg2 contextTextMatchingRange:(struct _NSRange)arg3 initialNumberOfLinesCalculator:(CDUnknownBlockType)arg4 parent:(id)arg5 symbol:(id)arg6;

@end

