//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface XDPMCodeGenerationController : NSObject
{
}

+ (id)generateImplementationsWithOptions:(id)arg1;
+ (id)generateDeclarationsWithOptions:(id)arg1;
+ (id)_generateCodeSnippetFromFileName:(id)arg1 withOptions:(id)arg2;
+ (id)availableTemplatesForCodeGeneration;
+ (void)clearCaches;
+ (id)templateStringForDefinitionName:(id)arg1 fileName:(id)arg2;
+ (id)templateDefinitionsByName;

@end

