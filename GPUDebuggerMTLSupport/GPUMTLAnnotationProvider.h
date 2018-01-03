//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTKit/DVTAnnotationProvider.h>

@class GPUMTLAnnotationContext;

__attribute__((visibility("hidden")))
@interface GPUMTLAnnotationProvider : DVTAnnotationProvider
{
    GPUMTLAnnotationContext *_context;
}

+ (id)annotationProviderForContext:(id)arg1 error:(id *)arg2;
- (void).cxx_destruct;
- (void)onUpdateProfilerData:(id)arg1;
- (void)onUpdatedProfilerDataIsAvailable:(id)arg1;
- (void)onLibraryUpdateAttempted:(id)arg1;
- (void)_addAnnotationWithClass:(Class)arg1 text:(id)arg2 lineRange:(struct _NSRange)arg3;
- (void)providerWillUninstall;
- (id)initWithAnnotationContext:(id)arg1;

@end

