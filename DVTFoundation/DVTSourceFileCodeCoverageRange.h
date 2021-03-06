//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DVTFoundation/NSCoding-Protocol.h>

@interface DVTSourceFileCodeCoverageRange : NSObject <NSCoding>
{
    BOOL _executable;
    unsigned long long _line;
    unsigned long long _column;
    unsigned long long _length;
}

@property(readonly, nonatomic) BOOL executable; // @synthesize executable=_executable;
@property(readonly, nonatomic) unsigned long long length; // @synthesize length=_length;
@property(readonly, nonatomic) unsigned long long column; // @synthesize column=_column;
@property(readonly, nonatomic) unsigned long long line; // @synthesize line=_line;
- (id)description;
@property(readonly, nonatomic) int executionCount;
- (BOOL)isExecutable;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithLine:(unsigned long long)arg1 column:(unsigned long long)arg2 length:(unsigned long long)arg3;

@end

