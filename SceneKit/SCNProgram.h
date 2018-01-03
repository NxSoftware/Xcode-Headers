//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SceneKit/NSCopying-Protocol.h>
#import <SceneKit/NSSecureCoding-Protocol.h>

@class NSMutableDictionary, NSString;
@protocol MTLLibrary, SCNProgramDelegate;

@interface SCNProgram : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_vertexShader;
    NSString *_tessellationControlShader;
    NSString *_tessellationEvaluationShader;
    NSString *_geometryShader;
    NSString *_fragmentShader;
    NSString *_vertexFunctionName;
    NSString *_fragmentFunctionName;
    NSString *_name;
    NSMutableDictionary *_semanticInfos;
    BOOL _opaque;
    id _library;
    id _delegate;
    NSMutableDictionary *_bufferBindings;
}

+ (BOOL)supportsSecureCoding;
+ (id)programWithLibrary:(id)arg1;
+ (id)program;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)_customDecodingOfSCNProgram:(id)arg1;
- (void)_customEncodingOfSCNProgram:(id)arg1;
@property(nonatomic) id <SCNProgramDelegate> delegate;
- (void)setSemantic:(id)arg1 forSymbol:(id)arg2;
- (id)copy;
- (void)handleBindingOfBufferNamed:(id)arg1 frequency:(long long)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (id)_bufferBindings;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)setSemanticInfos:(id)arg1;
- (id)_allSymbolsWithSceneKitSemantic;
- (id)_optionsForSymbol:(id)arg1;
- (id)semanticForSymbol:(id)arg1;
- (void)setSemantic:(id)arg1 forSymbol:(id)arg2 options:(id)arg3;
@property(copy, nonatomic) NSString *fragmentShader;
@property(copy, nonatomic) NSString *geometryShader;
@property(copy, nonatomic) NSString *tessellationEvaluationShader;
@property(copy, nonatomic) NSString *tessellationControlShader;
@property(copy, nonatomic) NSString *vertexShader;
@property(copy, nonatomic) NSString *fragmentFunctionName;
@property(copy, nonatomic) NSString *vertexFunctionName;
@property(nonatomic, getter=isOpaque) BOOL opaque;
- (id)name;
- (int)shadingLanguage;
- (void)setName:(id)arg1;
@property(retain, nonatomic) id <MTLLibrary> library;
- (id)init;
- (void)dealloc;

@end

