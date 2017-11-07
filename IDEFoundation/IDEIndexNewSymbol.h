//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IDEIndexNewFile;

@interface IDEIndexNewSymbol : NSObject
{
    IDEIndexNewFile *_file;
    long long _lineNumber;
    long long _column;
    long long _symbolId;
    unsigned long long _containerSeq;
    BOOL _hasBody;
}

@property(readonly, nonatomic) BOOL hasBody; // @synthesize hasBody=_hasBody;
@property(nonatomic) unsigned long long containerSeq; // @synthesize containerSeq=_containerSeq;
@property(nonatomic) long long symbolId; // @synthesize symbolId=_symbolId;
@property(readonly, nonatomic) long long column; // @synthesize column=_column;
@property(readonly, nonatomic) long long lineNumber; // @synthesize lineNumber=_lineNumber;
@property(readonly, nonatomic) __weak IDEIndexNewFile *file; // @synthesize file=_file;
- (void).cxx_destruct;
- (void)didAddBody;
@property(readonly, nonatomic) long long realSymbolId;
- (id)initWithFile:(id)arg1 lineNumber:(long long)arg2 column:(long long)arg3;

@end

