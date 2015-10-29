//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class NSString;

@interface XRVMRegion : NSObject <NSCoding, NSCopying>
{
    unsigned long long start;
    unsigned long long length;
    int current_prot;
    int max_prot;
    unsigned char external_pager;
    unsigned char share_mode;
    unsigned char user_tag;
    BOOL is_submap;
    NSString *path;
    NSString *type;
    unsigned int pages_resident;
    unsigned int pages_shared_now_private;
    unsigned int pages_swapped_out;
    unsigned int pages_dirtied;
    unsigned int ref_count;
    unsigned int region_page_shift;
}

+ (void)initialize;
+ (unsigned long long)regionIndexInArray:(id)arg1 forAddress:(unsigned long long)arg2;
- (void).cxx_destruct;
- (id)displayPath;
- (id)displayType;
- (int)maxProtection;
- (int)currentProtection;
- (id)path;
- (id)type;
- (unsigned char)tag;
- (unsigned long long)pageSize;
- (unsigned long long)swappedSize;
- (unsigned long long)dirtySize;
- (unsigned long long)residentSize;
- (unsigned int)virtualPages;
- (unsigned long long)virtualSize;
- (unsigned long long)location;
- (BOOL)isSubmapRegion;
- (void)_setResident:(unsigned int)arg1 dirty:(unsigned int)arg2 swapped:(unsigned int)arg3 speculative:(unsigned int)arg4;
- (void)setAddress:(unsigned long long)arg1 size:(unsigned long long)arg2;
- (void)setPath:(id)arg1 type:(id)arg2;
- (BOOL)isAdjacentTo:(id)arg1;
- (BOOL)typeMatches:(id)arg1;
- (BOOL)regionMatch:(id)arg1;
- (BOOL)matchesAddr:(unsigned long long)arg1 size:(unsigned long long)arg2 regionInfo:(struct vm_region_submap_info_64 *)arg3;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithAddress:(unsigned long long)arg1 size:(unsigned long long)arg2 regionInfo:(struct vm_region_submap_info_64 *)arg3;

@end

