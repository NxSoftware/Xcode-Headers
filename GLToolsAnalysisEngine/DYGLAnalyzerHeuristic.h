//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <GPUToolsServices/DYAnalyzerHeuristic.h>

@class DYGLProfileConstraints;

@interface DYGLAnalyzerHeuristic : DYAnalyzerHeuristic
{
    DYGLProfileConstraints *_platformConstraints;
}

+ (BOOL)supportsAPI:(unsigned int)arg1;
@property(readonly, nonatomic) DYGLProfileConstraints *platformConstraints; // @synthesize platformConstraints=_platformConstraints;
- (void).cxx_destruct;
- (void)appendObjectDescription:(id)arg1 objectType:(int)arg2 objectID:(int)arg3 andShortDesc:(BOOL)arg4;
- (void)appendBoundObjectDescription:(id)arg1 target:(int)arg2 andShortDesc:(BOOL)arg3;
- (id)objectDescription:(int)arg1 objectID:(int)arg2;
- (id)boundObjectDescription:(int)arg1;
- (void)addFunctionIndexFBOAttachments:(id)arg1;
- (void)addFunctionIndexTextureMip:(id)arg1 textureID:(int)arg2;
- (void)addFunctionIndexTextureCreation:(id)arg1 textureID:(int)arg2;
- (id)errorFindingFromFunction:(const struct Function *)arg1;
- (id)finding;
- (void)_setGenerationEnvironmentForFinding:(id)arg1;
- (void)processFunction:(const struct Function *)arg1 stateMirrorRetCode:(unsigned int)arg2;

@end

