//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GLToolsServices/DYGLResourceObject.h>

@interface DYGLSamplerObject : DYGLResourceObject
{
    unsigned int _minFilter;
    unsigned int _magFilter;
    unsigned int _wrapS;
    unsigned int _wrapT;
    unsigned int _wrapR;
    unsigned int _compareMode;
    unsigned int _compareFunc;
    float _maxAnisotropy;
    float _minLOD;
    float _maxLOD;
}

@property(readonly, nonatomic) float maxLOD; // @synthesize maxLOD=_maxLOD;
@property(readonly, nonatomic) float minLOD; // @synthesize minLOD=_minLOD;
@property(readonly, nonatomic) float maxAnisotropy; // @synthesize maxAnisotropy=_maxAnisotropy;
@property(readonly, nonatomic) unsigned int compareFunc; // @synthesize compareFunc=_compareFunc;
@property(readonly, nonatomic) unsigned int compareMode; // @synthesize compareMode=_compareMode;
@property(readonly, nonatomic) unsigned int wrapR; // @synthesize wrapR=_wrapR;
@property(readonly, nonatomic) unsigned int wrapT; // @synthesize wrapT=_wrapT;
@property(readonly, nonatomic) unsigned int wrapS; // @synthesize wrapS=_wrapS;
@property(readonly, nonatomic) unsigned int magFilter; // @synthesize magFilter=_magFilter;
@property(readonly, nonatomic) unsigned int minFilter; // @synthesize minFilter=_minFilter;
- (id)initWithProperties:(id)arg1;
- (id)initWithResourceObject:(id)arg1 functionStream:(id)arg2 dataResolver:(CDUnknownBlockType)arg3;

@end

