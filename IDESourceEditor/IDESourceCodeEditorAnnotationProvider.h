//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <DVTKit/DVTAnnotationProvider.h>

@class IDEEditor;

@interface IDESourceCodeEditorAnnotationProvider : DVTAnnotationProvider
{
    IDEEditor *_editor;
}

+ (id)annotationProviderForContext:(id)arg1 error:(id *)arg2;
@property(retain) IDEEditor *editor; // @synthesize editor=_editor;
- (void).cxx_destruct;
- (void)providerWillUninstall;
- (id)initWithEditor:(id)arg1;

@end

