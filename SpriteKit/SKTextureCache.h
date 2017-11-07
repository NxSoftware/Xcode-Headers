//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface SKTextureCache : NSObject
{
    long long filteringMode;
    struct CGSize size;
    struct CGSize pixelSize;
    BOOL hasAlpha;
    BOOL isPOT;
    char *pixelData;
    int state;
    struct _opaque_pthread_mutex_t lock;
    shared_ptr_bb77cfd9 _backingTexture;
    unsigned int _textureFormat;
    int wrapMode;
}

@property(nonatomic) shared_ptr_bb77cfd9 backingTexture; // @synthesize backingTexture=_backingTexture;
@property(nonatomic) unsigned int textureFormat; // @synthesize textureFormat=_textureFormat;
@property(nonatomic) int wrapMode; // @synthesize wrapMode;
@property(nonatomic) long long filteringMode; // @synthesize filteringMode;
@property(nonatomic) int state; // @synthesize state;
@property(nonatomic) struct CGSize pixelSize; // @synthesize pixelSize;
@property(nonatomic) char *pixelData; // @synthesize pixelData;
@property(nonatomic) BOOL hasAlpha; // @synthesize hasAlpha;
@property(nonatomic) BOOL isPOT; // @synthesize isPOT;
@property(nonatomic) struct CGSize size; // @synthesize size;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, nonatomic, getter=getLock) struct _opaque_pthread_mutex_t *lock;
- (void)_reset;
- (void)dealloc;
- (id)init;

@end

