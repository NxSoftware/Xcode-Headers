//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <IDEFoundation/IDEIndexSymbol.h>

@class IDEIndexCollection, IDEIndexContainerSymbol, IDEIndexPropertySymbol;

@interface IDEIndexCallableSymbol : IDEIndexSymbol
{
    IDEIndexContainerSymbol *_containerSymbol;
}

- (void).cxx_destruct;
- (id)callsCancelWhen:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) IDEIndexCollection *calls;
- (id)typeOfArgument:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long numArguments;
@property(readonly, nonatomic) IDEIndexSymbol *returnType;
@property(readonly, nonatomic) IDEIndexPropertySymbol *property;
@property(readonly, nonatomic) IDEIndexCollection *overridingSymbols;
@property(readonly, nonatomic) IDEIndexCollection *overriddenSymbols;
- (void)setContainerSymbol:(id)arg1;
- (id)containerSymbol;
- (id)ide_callHeirarchy_callableSymbols;

@end

